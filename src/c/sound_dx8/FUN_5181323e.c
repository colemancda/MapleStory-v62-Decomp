/* FUN_5181323e - 0x5181323e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5181323e(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_5181307f();
    if (-1 < iVar1) {
      (**(code **)(iRam00000000 + 4))(0);
      uRam0000001c = *(undefined4 *)(param_1 + 0x1c);
      FUN_51804af0((int *)0x18,*(int **)(param_1 + 0x18));
      *param_2 = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}


