/* FUN_004a21dc - 0x004a21dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a21dc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = FUN_004a2237();
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - iVar2;
  }
  else if (param_2 == 1) {
    iVar2 = FUN_004a225d();
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar2;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    if (param_2 != 3) goto LAB_004a222b;
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x34) + -4);
    }
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  FUN_004a2298(0,0,0);
LAB_004a222b:
  FUN_004b3daf();
  return;
}


