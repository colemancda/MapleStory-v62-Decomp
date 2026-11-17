/* FUN_00402bed - 0x00402bed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


HRESULT FUN_00402bed(VARIANTARG *param_1,VARIANTARG *param_2,USHORT param_3,VARTYPE param_4)

{
  HRESULT HVar1;
  _union_2683 local_14;
  
  if (param_4 == 8) {
    HVar1 = FUN_00402c6f(param_1,param_2);
  }
  else if ((param_1 == param_2) && ((param_2->n1).n2.vt == 8)) {
    local_14.n2.vt = 0;
    HVar1 = VariantChangeType((VARIANTARG *)&local_14.n2,param_2,param_3,param_4);
    if (-1 < HVar1) {
      FUN_00402bc3(param_1);
      FUN_00879c20(param_1,&local_14,0x10);
    }
  }
  else {
    if ((param_1->n1).n2.vt == 8) {
      FUN_00402bc3(param_1);
    }
    HVar1 = VariantChangeType(param_1,param_2,param_3,param_4);
  }
  return HVar1;
}


