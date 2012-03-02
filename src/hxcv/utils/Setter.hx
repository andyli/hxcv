package hxcv.utils;

import haxe.macro.Expr;
import haxe.macro.Context;

typedef SetterObj = {
	var setterObj:Dynamic;
}

#if !macro
@:build(hxcv.utils.SetterBuilder.build())
#end
class Setter<T> {
	static public function test(t:T){
		return t;
	}
/*
	@:macro static public function set(e:Expr) {
		var pos = Context.currentPos();
		var iname = switch(e.expr){
			case EConst(c):
				switch(c){
					case CIdent(s):
						s;
					default: throw "should be CIdent";
				}
			default: throw "should be EConst";
		}
		trace(Context.typeof(e));
		trace(iname);
		return Context.parse("{setterObj:"+iname+"}",pos);
	}*/
}

class SetterBuilder {
	@:macro static public function build(){
		var localClassInterfaces = Context.getLocalClass().get().name;
		trace(localClassInterfaces);
		
		var pos = Context.currentPos();
        var fields = [/*
			{ expr : EVars([{ 
				name : "property__getData__setData__data",
				type : TPath({ pack : [], name : dataType.name, params : [], sub : null }),
				expr : null 
			}]), pos : pos },

			{ expr : EVars([{ 
				name : "private___data", 
				type : TPath({ pack : [], name : dataType.name, params : [], sub : null }),
				expr : null 
			}]), pos : pos },

			{ expr : EFunction({ 
				name : "private__getData", 
				args : [], 
				ret : null, 
				expr : { expr : EReturn({ expr : EConst(CIdent("_data")), pos : pos }), pos : pos } //return _data;
			}), pos : pos },
			
			{ expr : EFunction({ 
				name : "private__setData", 
				args : [{ type : null, opt : false, name : "val", value : null }], 
				ret : null, 
				expr : { expr : EReturn({ expr : EBinop(OpAssign,{ expr : EConst(CIdent("_data")), pos : pos },{ expr : EConst(CIdent("val")), pos : pos }), pos : pos }), pos : pos } //return _data = val;
			}), pos : pos }
			*/
        ];
        return { expr : EBlock(fields), pos : pos };
	}
}
