/* FUN_5181373a - 0x5181373a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5181373a(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_c [4];
  int local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_5181287a();
    iVar1 = *(int *)(iVar1 + 4);
    if (local_8 != 0) {
      FUN_51813012((int)local_c);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_5181348f();
      if (-1 < iVar1) {
        (**(code **)(iRam00000000 + 4))(0);
        uRam00000024 = *(undefined4 *)(param_1 + 0x24);
        FUN_51804af0((int *)0x18,*(int **)(param_1 + 0x18));
        FUN_5181022b((void *)0x1c,param_1 + 0x1c);
        *param_2 = 0;
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7ffbfdfd;
    }
  }
  return iVar1;
}


