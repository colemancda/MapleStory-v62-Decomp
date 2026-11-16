/* FUN_51812d41 - 0x51812d41 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812d41(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_518017b5();
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x24) != 0) && (&stack0x00000000 != (undefined1 *)0xfffffffc)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
    param_2[1] = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
    param_3[1] = 0;
  }
  piVar1 = (int *)(param_1 + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return 0;
}


