/* FUN_007477d6 - 0x007477d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007477d6(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar2 = *(int *)(extraout_ECX + 0xc68);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 == 3) {
    if (*(int **)(extraout_ECX + 0xa60) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xa60) + 0xc))();
    }
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4f1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00450382(uVar1);
    iVar2 = **(int **)(extraout_ECX + 0xa58);
    uVar1 = 0x3eb;
  }
  else {
    if (*(int **)(extraout_ECX + 0xa58) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xa58) + 0xc))();
    }
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4f2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00450382(uVar1);
    iVar2 = **(int **)(extraout_ECX + 0xa60);
    uVar1 = 0x3ec;
  }
  (**(code **)(iVar2 + 0x20))(extraout_ECX,uVar1,0x218,0x207,2,unaff_EBP + -0x24);
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


