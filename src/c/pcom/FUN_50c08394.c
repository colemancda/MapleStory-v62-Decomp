/* FUN_50c08394 - 0x50c08394 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c08394(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_14 [8];
  
  if ((short)param_4 == 8) {
    iVar1 = FUN_50c08416(param_1,param_2);
  }
  else if ((param_1 == param_2) && (*param_2 == 8)) {
    local_14[0] = 0;
    iVar1 = Ordinal_12(local_14,param_2,param_3,param_4);
    if (-1 < iVar1) {
      FUN_50c08269((short *)param_1);
      memcpy(param_1,local_14,0x10);
    }
  }
  else {
    if (*param_1 == 8) {
      FUN_50c08269((short *)param_1);
    }
    iVar1 = Ordinal_12(param_1,param_2,param_3,param_4);
  }
  return iVar1;
}


