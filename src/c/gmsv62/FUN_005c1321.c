/* FUN_005c1321 - 0x005c1321 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c1321(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_1f4;
  undefined1 auStack_1f0 [4];
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  int *piStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = *extraout_ECX;
  uStack_1d8 = *(undefined4 *)(unaff_EBP + 8);
  iStack_1d0 = unaff_EBP + -0x18;
  iStack_1d4 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -0x10) = 4;
  piStack_1dc = (int *)0x5c1357;
  (**(code **)(iVar1 + 0x3c))();
  piStack_1dc = (int *)0x5c1365;
  FUN_004497c2();
  piStack_1dc = (int *)0x0;
  uStack_1e0 = 100;
  uStack_1e4 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_1e8 = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_1ec = 1;
  puStack_1f4 = auStack_1f0;
  *(undefined1 **)(unaff_EBP + -0x20) = auStack_1f0;
  FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_1f4 = (undefined1 *)(unaff_EBP + 8);
  uVar2 = FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_1f4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0048bccf(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar3 = FUN_005c1de2(*(undefined4 *)(unaff_EBP + 0xc));
  uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00449780(uVar3,uVar2);
  FUN_0043f082(uVar3,uVar2);
  piStack_1dc = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x1d0) = &PTR_LAB_008e84a0;
  if (piStack_1dc != (int *)0x0) {
    uStack_1e0 = 0x5c13e1;
    (**(code **)(*piStack_1dc + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


