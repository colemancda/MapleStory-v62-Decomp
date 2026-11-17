/* FUN_006b364c - 0x006b364c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006b364c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  iStack_2c = unaff_EBP + -0x14;
  uStack_30 = 0x6b366d;
  iVar1 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_2c = 0;
    uStack_30 = 0x6b3683;
    FUN_0045e7c2();
  }
  iVar1 = *(int *)(unaff_EBP + 0xc);
  uStack_30 = *(undefined4 *)(unaff_EBP + 8);
  iStack_34 = 0x6b3692;
  iStack_2c = iVar1;
  iStack_2c = FUN_006b38b8();
  iStack_2c = -iStack_2c;
  uStack_30 = 1;
  iStack_34 = unaff_EBP + -0x28;
  iVar2 = FUN_00458c4f();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iStack_2c = 0;
    uStack_30 = 0x6b36b7;
    FUN_00449913();
  }
  uStack_30 = *(undefined4 *)(unaff_EBP + 8);
  iStack_34 = 0x6b36c3;
  iStack_2c = iVar1;
  iStack_2c = FUN_006b38b8();
  iStack_2c = -100 - iStack_2c;
  uStack_30 = 1;
  iStack_34 = unaff_EBP + -0x20;
  iVar2 = FUN_00458c4f();
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    iStack_2c = 0;
    uStack_30 = 0x6b36eb;
    FUN_00449913();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      uStack_30 = *(undefined4 *)(unaff_EBP + 8);
      iStack_34 = 0x6b37bd;
      iStack_2c = iVar1;
      iVar2 = FUN_006b38b8();
      if ((iVar2 == 200) && (0 < *(int *)(DAT_00979110 + 0x380))) {
        iStack_2c = 5;
        uStack_30 = 0x6b37de;
        FUN_00526a75();
        iStack_2c = 1;
        *(int **)(unaff_EBP + 0xc) = &iStack_34;
        FUN_0068684c(0);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        FUN_006b414b(0,0,0,0,0,0,0,0,0,0,0);
        uVar3 = FUN_006b38aa();
      }
      else {
        uStack_30 = *(undefined4 *)(unaff_EBP + 8);
        iStack_34 = 0x6b3836;
        iStack_2c = iVar1;
        iVar2 = FUN_006b38b8();
        if ((iVar2 != 0xc9) || (*(int *)(DAT_00979110 + 900) < 1)) {
          iStack_2c = 0x6b388b;
          FUN_0074d6fb();
          iStack_2c = 0;
          uStack_30 = 0x6b3897;
          FUN_00526a75();
          goto LAB_006b3897;
        }
        iStack_2c = 5;
        uStack_30 = 0x6b3857;
        FUN_00526a75();
        iStack_2c = 1;
        *(int **)(unaff_EBP + 0xc) = &iStack_34;
        FUN_0068684c(0);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        FUN_006b414b(0,0,0,0,0,0,0,0,0,0,0);
        uVar3 = FUN_006b38b1();
      }
      iVar2 = (**(code **)(*extraout_ECX + 0x30))(uVar3);
      iVar1 = iVar2 + 0x14 + iVar1;
      iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
      FUN_007529b7(iVar2 + *(int *)(unaff_EBP + 8),iVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
                   uVar10,uVar11,uVar12,uVar13,uVar14);
      goto LAB_006b3897;
    }
    iStack_2c = 5;
    uStack_30 = 0x6b378e;
    FUN_00526a75();
    iStack_2c = 1;
    *(int **)(unaff_EBP + -0x18) = &iStack_34;
    FUN_0068684c(0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    iStack_2c = 5;
    uStack_30 = 0x6b3704;
    FUN_00526a75();
    iStack_2c = 1;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      uStack_30 = *(undefined4 *)(unaff_EBP + 0xc);
      iStack_34 = *(int *)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*extraout_ECX + 0x30))();
      iVar1 = iVar2 + 0x14 + iVar1;
      iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
      FUN_00750e64(iVar2 + *(int *)(unaff_EBP + 8),iVar1);
      goto LAB_006b3897;
    }
    *(int **)(unaff_EBP + 0xc) = &iStack_34;
    FUN_0068684c(0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
  }
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = FUN_006b40e7(uVar3,0,0,0,0,0,0,0,0);
  iVar2 = (**(code **)(*extraout_ECX + 0x30))(uVar3);
  iVar1 = iVar2 + 0x14 + iVar1;
  iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
  FUN_0074eacf(iVar2 + *(int *)(unaff_EBP + 8),iVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
               uVar10,uVar11);
LAB_006b3897:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


