/* FUN_51811240 - 0x51811240 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51811240(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_518112e7();
    if (-1 < iVar1) {
      (**(code **)(iRam00000000 + 4))(0);
      FUN_518103e1(0x10);
      FUN_518112a0((void *)0x10,param_1 + 0x10);
      uRam00000024 = *(undefined4 *)(param_1 + 0x24);
      *param_2 = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}


