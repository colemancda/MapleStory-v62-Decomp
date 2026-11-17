/* FUN_0063c00e - 0x0063c00e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063c00e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 *puStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  
  FUN_00879bb8();
  piStack_18 = (int *)0x63c02c;
  FUN_004497c2();
  piStack_18 = (int *)0x0;
  uStack_1c = 100;
  uStack_20 = 0x105;
  uStack_24 = 0x34;
  uStack_28 = 1;
  puStack_30 = auStack_2c;
  *(undefined1 **)(unaff_EBP + -0x14) = auStack_2c;
  FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_30 = (undefined1 *)(unaff_EBP + -0x10);
  uVar1 = FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_30;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0048bccf(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = FUN_0044972c(2,0);
  FUN_005a9f5e(uVar1);
  uVar2 = FUN_0063c0b3();
  FUN_00449780(uVar2);
  FUN_0043f082(uVar2,uVar1);
  piStack_18 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    uStack_1c = 0x63c0a5;
    (**(code **)(*piStack_18 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


