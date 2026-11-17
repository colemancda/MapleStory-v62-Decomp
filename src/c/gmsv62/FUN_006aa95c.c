/* FUN_006aa95c - 0x006aa95c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006aa95c(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_8c [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  iStack_28 = *(undefined4 *)(unaff_EBP + 8);
  uStack_2c = 0x6aa976;
  FUN_0081622a();
  iStack_28 = unaff_EBP + 8;
  uStack_2c = 0x6aa981;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_28 = 3;
  uStack_2c = 0xff;
  uStack_30 = 0x6aa994;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0x84);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) =
       *(undefined4 *)(extraout_ECX + 0x5a4 + (uint)(iVar1 != 0) * 4);
  piStack_44 = *(int **)(unaff_EBP + 8);
  if (piStack_44 == (int *)0x0) {
    iStack_28 = 0x80004003;
    uStack_2c = 0x6aa9be;
    FUN_00878dfb();
    piStack_44 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piStack_44;
  uStack_38 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_34 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_30 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_3c = 0x1a;
  uStack_2c = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_40 = 0x2e;
  *(int **)(unaff_EBP + -0x14) = piStack_44;
  iStack_28 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_48 = (undefined *)0x6aa9e0;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    puStack_48 = &DAT_00963cc8;
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_54 = 0x6aa9f2;
    iStack_50 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_48 = (undefined *)(unaff_EBP + -0x24);
  uStack_4c = 0x6aa9ff;
  puStack_48 = (undefined *)FUN_00402bc3();
  if ((int)puStack_48 < 0) {
    uStack_4c = 0x6aaa0a;
    FUN_00878dfb();
  }
  puStack_48 = (undefined *)0x3;
  uStack_4c = 0xff;
  iStack_50 = 0x6aaa19;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x5ac);
  piStack_64 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_64 == (int *)0x0) {
    puStack_48 = (undefined *)0x80004003;
    uStack_4c = 0x6aaa37;
    FUN_00878dfb();
    piStack_64 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piStack_64;
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_5c = 0x96;
  uStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_60 = 0x1e;
  *(int **)(unaff_EBP + -0x10) = piStack_64;
  puStack_48 = *(undefined **)(unaff_EBP + -0x18);
  piStack_68 = (int *)0x6aaa5c;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    piStack_68 = (int *)&DAT_00963cc8;
    uStack_6c = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_74 = 0x6aaa70;
    iStack_70 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_68 = (int *)(unaff_EBP + -0x24);
  uStack_6c = 0x6aaa7d;
  piStack_68 = (int *)FUN_00402bc3();
  if ((int)piStack_68 < 0) {
    uStack_6c = 0x6aaa88;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x84) != 0) {
    piStack_68 = (int *)0x0;
    uStack_6c = 0;
    iStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0x7e;
    uStack_84 = 0x4a;
    uStack_88 = 0x6aaaa5;
    FUN_0053793e();
    uStack_88 = 0x6aaaaf;
    uStack_88 = thunk_FUN_0045e2eb();
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_8c;
    FUN_00448dc6(auStack_8c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0048b97b();
    FUN_005558b0();
  }
  piStack_68 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_68 != (int *)0x0) {
    uStack_6c = 0x6aaadf;
    (**(code **)(*piStack_68 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


