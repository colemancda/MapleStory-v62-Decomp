/* FUN_004a2fef - 0x004a2fef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a2fef(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_00978474;
  }
  FUN_00414edd(param_2,0xffffffff);
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x34) + -4);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_004a2298(0,1,0);
  FUN_004b3daf();
  return;
}


