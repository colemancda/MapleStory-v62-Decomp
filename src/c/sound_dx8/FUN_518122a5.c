/* FUN_518122a5 - 0x518122a5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_518122a5(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    iVar1 = FUN_5181307f();
    if (-1 < iVar1) {
      piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 4U);
      uRam0000001c = (uint)(piVar2 != (int *)0x0);
      FUN_51804af0((int *)0x18,piVar2);
      *param_2 = 0;
      (**(code **)(iRam00000000 + 4))(0);
      iVar1 = 0;
    }
  }
  return iVar1;
}


