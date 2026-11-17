/* FUN_004aa24e - 0x004aa24e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004aa24e(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_004aa2be();
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - iVar1;
  }
  else if (param_2 == 1) {
    iVar1 = FUN_004aa2e4();
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar1;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 4) {
        uVar2 = 4;
      }
      else {
        if (param_2 != 5) goto LAB_004aa2b2;
        uVar2 = 5;
      }
      FUN_004aa550(uVar2);
      goto LAB_004aa2b2;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x34) + -4);
    }
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  FUN_004aa5f9(0,0,0);
LAB_004aa2b2:
  FUN_004b3daf();
  return;
}


