/* FUN_00691715 - 0x00691715 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00691715(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  undefined1 *puStack_1ec;
  undefined1 auStack_1e8 [4];
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  int *piStack_1d4;
  
  FUN_00879bb8();
  piStack_1d4 = (int *)0x691737;
  FUN_004497c2();
  piStack_1d4 = (int *)0x0;
  uStack_1d8 = 100;
  uStack_1dc = 0x4b;
  uStack_1e0 = 0x120;
  uStack_1e4 = 1;
  puStack_1ec = auStack_1e8;
  *(undefined1 **)(unaff_EBP + -0x20) = auStack_1e8;
  FUN_004489f5();
  puStack_1ec = (undefined1 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_1ec;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0048bccf(uVar1);
  iVar3 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004e21db(iVar3);
  FUN_00455c59(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = FUN_00649618();
  uVar1 = FUN_006495c0(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uVar2 = FUN_0044972c(2,1);
  FUN_00449780(uVar1,uVar2);
  FUN_0043f082(uVar1,uVar2);
  *(undefined ***)(unaff_EBP + -0x1d0) = &PTR_LAB_008e84a0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_1d4 = (int *)0x0;
    uStack_1d8 = 0x6917d9;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  piStack_1d4 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_1d4 != (int *)0x0) {
    uStack_1d8 = 0x6917ed;
    (**(code **)(*piStack_1d4 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


