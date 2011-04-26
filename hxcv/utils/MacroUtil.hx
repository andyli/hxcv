package hxcv.utils;

import haxe.macro.Expr;
import haxe.macro.Context;

class MacroUtil {
	@:macro static public function exprToString(e:Expr) {
		return { expr: EConst(CString(Std.string(e))), pos:Context.currentPos() };
	}
}
