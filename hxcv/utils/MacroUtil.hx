package hxcv.utils;

class MacroUtil {
	@:macro static public function exprToString(e:Expr) {
		return { expr: EConst(CString(Std.string(e))), pos:Context.currentPos() };
	}
}
