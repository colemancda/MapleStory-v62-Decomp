/* FUN_0069eabd - 0x0069eabd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069eabd(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  char *pcStack_90;
  int iStack_8c;
  int *piStack_88;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_88 = *(int **)(extraout_ECX + 0x8c);
  iStack_94 = unaff_EBP + -0x1c;
  iStack_8c = *(undefined4 *)(extraout_ECX + 0x88);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcStack_90 = s__03d_03d_0096a688;
  uStack_98 = 0x69eaf8;
  FUN_00434e21();
  piVar5 = (int *)(extraout_ECX + 0x2c4);
  iVar1 = 0;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  while( true ) {
    piStack_88 = (int *)(iVar1 + 1);
    pcStack_90 = (char *)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + -0x34) = piStack_88;
    iStack_94 = 0x69eb1f;
    iStack_8c = iVar1;
    puVar2 = (undefined4 *)FUN_0045e053();
    piStack_88 = (int *)0xc0d;
    iStack_8c = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    pcStack_90 = (char *)0x69eb38;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_88 = (int *)*puVar2;
    iStack_8c = *puVar3;
    pcStack_90 = (char *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_94 = 0x69eb4a;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      piStack_88 = (int *)(*(int *)(unaff_EBP + -0x20) + -0xc);
      iStack_8c = 0x69eb61;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      piStack_88 = (int *)(*(int *)(unaff_EBP + -0x24) + -0xc);
      iStack_8c = 0x69eb76;
      FUN_00434e38();
    }
    piStack_88 = &DAT_00980690;
    iStack_8c = 0x69eb85;
    FUN_00403191();
    piStack_88 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_8c = 0x69eb92;
    FUN_00403191();
    piStack_88 = (int *)0x0;
    iStack_8c = 0;
    pcStack_90 = (char *)0xffffffff;
    iStack_94 = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_98 = 0;
    uStack_9c = 0;
    iStack_a0 = 0x69eba5;
    (*DAT_0097b4c8)();
    iStack_a0 = 0x69ebb2;
    FUN_0087a1b0();
    iStack_a0 = 0;
    iStack_a4 = 0;
    iStack_a8 = unaff_EBP + -0x54;
    iStack_ac = unaff_EBP + -0x44;
    uStack_b0 = 0xffffffff;
    uVar4 = FUN_00449713(&uStack_9c);
    uVar4 = FUN_00456ad5(uVar4);
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_b0;
    FUN_004033a1(uVar4);
    iVar1 = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_a8 = 0x69ec05;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      iStack_a0 = unaff_EBP + -0x28;
      iStack_a4 = 0x69ec1b;
      iStack_a0 = FUN_0041a581();
      if ((iStack_a0 < 0) && (iStack_a0 != -0x7fffbffe)) {
        iStack_a4 = 0x69ec2c;
        FUN_00878dfb();
      }
    }
    iStack_a0 = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_a4 = 0x69ec3c;
    iStack_a0 = FUN_00402bc3();
    if (iStack_a0 < 0) {
      iStack_a4 = 0x69ec47;
      FUN_00878dfb();
    }
    iStack_a0 = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_a4 = 0x69ec54;
    iStack_a0 = FUN_00402bc3();
    if (iStack_a0 < 0) {
      iStack_a4 = 0x69ec5f;
      FUN_00878dfb();
    }
    iStack_a0 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_a4 = 0x69ec6c;
    iStack_a0 = FUN_00402bc3();
    if (iStack_a0 < 0) {
      iStack_a4 = 0x69ec77;
      FUN_00878dfb();
    }
    iStack_a0 = 3;
    iStack_a4 = 0xff;
    iStack_a8 = 0x69ec86;
    FUN_004031b7();
    iStack_a0 = 3;
    iStack_a4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_a8 = 0x69ec95;
    FUN_004031b7();
    iVar1 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar1 == 0) {
      iStack_a0 = 0x80004003;
      iStack_a4 = 0x69eca7;
      FUN_00878dfb();
    }
    iStack_a0 = unaff_EBP + -100;
    iStack_a4 = unaff_EBP + -0x30;
    iStack_a8 = 0x69ecb6;
    piVar5 = (int *)FUN_00425067();
    iVar1 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (iVar1 == 0) {
      iStack_a0 = 0x80004003;
      iStack_a4 = 0x69ecca;
      FUN_00878dfb();
    }
    piVar5 = (int *)*piVar5;
    iVar1 = *piVar5;
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_ac = *(undefined4 *)(unaff_EBP + -0x74);
    iStack_a8 = *(undefined4 *)(unaff_EBP + -0x70);
    iStack_a4 = *(undefined4 *)(unaff_EBP + -0x6c);
    *(int **)(unaff_EBP + -0x2c) = piVar5;
    iStack_a0 = *(undefined4 *)(unaff_EBP + -0x68);
    iVar1 = (**(code **)(iVar1 + 0x80))(piVar5,0,0);
    if (iVar1 < 0) {
      piStack_88 = (int *)&DAT_00963cc8;
      iStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
      iStack_94 = 0x69ecfb;
      pcStack_90 = (char *)iVar1;
      FUN_00878e09();
    }
    piStack_88 = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piStack_88 != (int *)0x0) {
      iStack_8c = 0x69ed0c;
      (**(code **)(*piStack_88 + 8))();
    }
    piStack_88 = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_8c = 0x69ed19;
    piStack_88 = (int *)FUN_00402bc3();
    if ((int)piStack_88 < 0) {
      iStack_8c = 0x69ed24;
      FUN_00878dfb();
    }
    piStack_88 = (int *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_8c = 0x69ed31;
    piStack_88 = (int *)FUN_00402bc3();
    if ((int)piStack_88 < 0) {
      iStack_8c = 0x69ed3c;
      FUN_00878dfb();
    }
    piStack_88 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piStack_88 != (int *)0x0) {
      iStack_8c = 0x69ed4d;
      (**(code **)(*piStack_88 + 8))();
    }
    iVar1 = *(int *)(unaff_EBP + -0x34);
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    if (5 < iVar1) break;
    piVar5 = *(int **)(unaff_EBP + -0x18);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_88 = (int *)0x69ed68;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_88 = (int *)0x69ed74;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


