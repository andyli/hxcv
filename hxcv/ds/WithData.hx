package hxcv.ds;

import haxe.macro.Expr;
import haxe.macro.Context;
using Lambda;

@:autoBuild(hxcv.ds.WithDataBuilder.build())
interface WithData<D>
{
	public var data(getData, setData):D;

	private var _data:D;
	private function getData():D;
	private function setData(val:D):D;
}

class WithDataBuilder {
	@:macro static public function build() {
		var localClassInterfaces = Context.getLocalClass().get().interfaces;

		var dataType; //type param of WithData
		for (i in localClassInterfaces){
			if (i.t.get().name == "WithData"){
				switch(i.params[0]) {
					case TInst(t, params): dataType = t.get();
					default: 
				}
			}
		}
		
		var pos = haxe.macro.Context.currentPos();
        var fields = [
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
            		expr : { expr : EReturn({ expr : EConst(CIdent("_data")), pos : pos }), pos : pos } 
            	}), pos : pos },
            	
            { expr : EFunction({ 
            		name : "private__setData", 
            		args : [{ type : null, opt : false, name : "val", value : null }], 
            		ret : null, 
            		expr : { expr : EReturn({ expr : EBinop(OpAssign,{ expr : EConst(CIdent("_data")), pos : pos },{ expr : EConst(CIdent("val")), pos : pos }), pos : pos }), pos : pos } //return _data = val;
            	}), pos : pos }
        ];
        return { expr : EBlock(fields), pos : pos };
	}
}
