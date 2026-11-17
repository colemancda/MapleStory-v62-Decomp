/* FUN_0049b318 - 0x0049b318 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049b318(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint uVar6;
  int extraout_ECX_00;
  uint uVar7;
  int unaff_EBP;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int *piStack_70;
  undefined *puStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  iStack_54 = 3;
  iStack_58 = 0;
  iStack_5c = 0x49b337;
  FUN_004031b7();
  iVar4 = *(int *)(extraout_ECX + 0x48);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    iStack_54 = 0x80004003;
    iStack_58 = 0x49b349;
    FUN_00878dfb();
  }
  iStack_54 = unaff_EBP + -0x30;
  iStack_58 = unaff_EBP + -0x10;
  iStack_5c = 0x49b359;
  FUN_00425067();
  iStack_54 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_58 = 0x49b366;
  iStack_54 = FUN_00402bc3();
  if (iStack_54 < 0) {
    iStack_58 = 0x49b371;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_54 = 0x80004003;
    iStack_58 = 0x49b380;
    FUN_00878dfb();
  }
  iStack_58 = *(undefined4 *)(extraout_ECX + 0x20);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iStack_54 = 0xff999999;
  iStack_5c = *(int *)(extraout_ECX + 0x1c) + -1;
  uStack_60 = 0;
  uStack_64 = 0;
  puStack_6c = (undefined *)0x49b39c;
  piStack_68 = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar4 < 0) {
    puStack_6c = &DAT_00963cc8;
    uStack_78 = 0x49b3ac;
    iStack_74 = iVar4;
    piStack_70 = piVar1;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_6c = (undefined *)0x80004003;
    piStack_70 = (int *)0x49b3bb;
    FUN_00878dfb();
  }
  puStack_6c = *(undefined **)(*(int *)(extraout_ECX + 0x50) + 0x6c);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  piStack_70 = (int *)(*(int *)(extraout_ECX + 0x20) + -2);
  iStack_74 = *(int *)(extraout_ECX + 0x1c) + -3;
  uStack_78 = 1;
  uStack_7c = 1;
  piStack_84 = (int *)0x49b3df;
  piStack_80 = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar4 < 0) {
    piStack_84 = (int *)&DAT_00963cc8;
    iStack_90 = 0x49b3ef;
    iStack_8c = iVar4;
    piStack_88 = piVar1;
    FUN_00878e09();
  }
  uVar6 = *(uint *)(*(int *)(extraout_ECX + 0x50) + 0x40);
  if (uVar6 == 0) {
LAB_0049b56f:
    piStack_84 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_84 != (int *)0x0) {
      piStack_88 = (int *)0x49b580;
      (**(code **)(*piStack_84 + 8))();
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    uVar7 = *(uint *)(*(int *)(extraout_ECX + 0x50) + 0x40);
    iVar4 = 0;
    if (uVar7 == 0) {
LAB_0049b439:
      iVar4 = -1;
    }
    else {
      do {
        if (uVar7 == uVar6) break;
        iVar4 = iVar4 + 1;
        iVar2 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
        uVar7 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      } while (uVar7 != 0);
      if (uVar7 == 0) goto LAB_0049b439;
    }
    *(uint *)(unaff_EBP + -0x20) = uVar6;
    iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
    iVar3 = *(int *)(extraout_ECX + 0x34);
    *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    if (iVar3 == iVar4) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_84 = (int *)0x80004003;
        piStack_88 = (int *)0x49b470;
        FUN_00878dfb();
      }
      piStack_84 = *(int **)(*(int *)(extraout_ECX + 0x50) + 0x70);
      iStack_8c = *(int *)(extraout_ECX + 0x1c) + -2;
      piStack_88 = (int *)0xf;
      iStack_90 = iVar4 * 0x10 + 1;
      *(int **)(unaff_EBP + -0x1c) = *(int **)(unaff_EBP + -0x10);
      iStack_8c = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))
                            (*(undefined4 *)(unaff_EBP + -0x10),1);
      if (iStack_8c < 0) {
        piStack_84 = (int *)&DAT_00963cc8;
        piStack_88 = *(int **)(unaff_EBP + -0x1c);
        iStack_90 = 0x49b4ab;
        FUN_00878e09();
      }
      if (*(int *)(extraout_ECX + 0x34) != iVar4) goto LAB_0049b4b5;
      piStack_84 = *(int **)(extraout_ECX + 0x44);
    }
    else {
LAB_0049b4b5:
      piStack_84 = *(int **)(extraout_ECX + 0x40);
    }
    piStack_88 = (int *)(unaff_EBP + -0x14);
    iStack_8c = 0x49b4c2;
    FUN_007d4a9a();
    piStack_84 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_88 = (int *)0x49b4d1;
    FUN_00403191();
    piStack_84 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_88 = (int *)0x49b4de;
    FUN_00403191();
    piStack_84 = (int *)(unaff_EBP + -0x50);
    piStack_88 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_8c = 0x49b4f2;
    iStack_8c = FUN_00449749();
    iStack_90 = 0x49b4fb;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_90;
    iStack_90 = extraout_ECX_00;
    FUN_00448a17(uVar5);
    iVar4 = (iVar4 * 0x10 - *(int *)(extraout_ECX + 0x4c)) + 1;
    uVar5 = 7;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004115d9(7,iVar4);
    FUN_00448e3a(uVar5,iVar4);
    piStack_84 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_88 = (int *)0x49b531;
    piStack_84 = (int *)FUN_00402bc3();
    if ((int)piStack_84 < 0) {
      piStack_88 = (int *)0x49b53c;
      FUN_00878dfb();
    }
    piStack_84 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_88 = (int *)0x49b549;
    piStack_84 = (int *)FUN_00402bc3();
    if ((int)piStack_84 < 0) {
      piStack_88 = (int *)0x49b554;
      FUN_00878dfb();
    }
    piStack_84 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piStack_84 != (int *)0x0) {
      piStack_88 = (int *)0x49b565;
      (**(code **)(*piStack_84 + 8))();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) goto LAB_0049b56f;
    uVar6 = *(uint *)(unaff_EBP + -0x18);
  } while( true );
}


