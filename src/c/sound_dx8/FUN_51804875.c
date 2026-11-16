/* FUN_51804875 - 0x51804875 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_51804875(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_14 [8];
  
  if ((short)param_4 == 8) {
    iVar1 = FUN_518048f7(param_1,param_2);
  }
  else if ((param_1 == param_2) && (*param_2 == 8)) {
    local_14[0] = 0;
    iVar1 = Ordinal_12(local_14,param_2,param_3,param_4);
    if (-1 < iVar1) {
      FUN_518047f3((short *)param_1);
      memcpy(param_1,local_14,0x10);
    }
  }
  else {
    if (*param_1 == 8) {
      FUN_518047f3((short *)param_1);
    }
    iVar1 = Ordinal_12(param_1,param_2,param_3,param_4);
  }
  return iVar1;
}


