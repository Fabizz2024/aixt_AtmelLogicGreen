// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando Martínez Santa
// Date: 2023-2024
// License: MIT
module aixt_cgen

import v.ast

// assign_stmt is the code generation function for assignment statements.
// This works for:
// - declaration-assignments `:=`
// - only assignments `=`
// and
// - cumulative-assignments `+=`, `-=`, etc. 
fn (mut gen Gen) assign_stmt(node ast.AssignStmt) []string {
	mut out := []string{}
	gen.cur_op = node.op
	for i in 0 .. node.right.len {
		gen.cur_left = node.left[i]
		gen.cur_left_type = node.left_types[i]
		// var_kind := if node.left_types.len != 0 { gen.table.type_kind(node.left_types[i]).str() } else { '' }
		match node.right[i] {
			ast.IfExpr {	// conditional assignment
				// gen.ast_node(node.left[i])
				out << gen.ast_node(node.right[i])
			}
			else {			
				out << if node.op.str() == ':=' { // declaration-assignment
					gen.single_decl_assign(node.left[i], node.left_types[i], node.right[i])
				} else { // for the rest of assignments
					gen.single_assign(node.left[i], node.left_types[i], node.op, node.right[i])
				}
			}
		}
	}
	return out
}