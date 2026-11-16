/* FUN_51405842 - 0x51405842 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int __cdecl FUN_51405842(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_14 [8];
  
  if ((short)param_4 == 8) {
    iVar1 = FUN_514058c4(param_1,param_2);
  }
  else if ((param_1 == param_2) && (*param_2 == 8)) {
    local_14[0] = 0;
    iVar1 = Ordinal_12(local_14,param_2,param_3,param_4);
    if (-1 < iVar1) {
      FUN_51405818((short *)param_1);
      memcpy(param_1,local_14,0x10);
    }
  }
  else {
    if (*param_1 == 8) {
      FUN_51405818((short *)param_1);
    }
    iVar1 = Ordinal_12(param_1,param_2,param_3,param_4);
  }
  return iVar1;
}


