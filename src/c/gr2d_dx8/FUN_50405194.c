/* FUN_50405194 - 0x50405194 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_50405194(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_14 [8];
  
  if ((short)param_4 == 8) {
    iVar1 = FUN_50405216(param_1,param_2);
  }
  else if ((param_1 == param_2) && (*param_2 == 8)) {
    local_14[0] = 0;
    iVar1 = Ordinal_12(local_14,param_2,param_3,param_4);
    if (-1 < iVar1) {
      FUN_5040278b((short *)param_1);
      memcpy(param_1,local_14,0x10);
    }
  }
  else {
    if (*param_1 == 8) {
      FUN_5040278b((short *)param_1);
    }
    iVar1 = Ordinal_12(param_1,param_2,param_3,param_4);
  }
  return iVar1;
}


