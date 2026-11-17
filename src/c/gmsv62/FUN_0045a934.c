/* FUN_0045a934 - 0x0045a934 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045a934(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar5;
  int unaff_EBP;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (iVar2 != 0) goto LAB_0045ac82;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_4c = *(undefined4 *)(unaff_EBP + 8);
  iStack_50 = unaff_EBP + -0x38;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_54 = 0x45a96c;
  FUN_0084a5e4();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x45a97b;
  iVar2 = FUN_0045e2eb();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  if ((iVar2 / 10000 != 0x38f) && (iVar2 / 10000 != 0x21f)) {
    iStack_4c = 0;
    iStack_50 = 0;
    iStack_54 = 0;
    iStack_58 = 0;
    iStack_5c = 10000;
    *(int **)(unaff_EBP + 8) = &iStack_5c;
    uStack_60 = 0x239;
    FUN_00679d22(&iStack_5c);
    uStack_60 = 0x45a9b3;
    FUN_007db3ad();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_4c = 0x45a9c1;
    FUN_0045e46f();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_4c = *(int *)(unaff_EBP + -0x14) + -0xc;
      iStack_50 = 0x45a9d9;
      FUN_00434e38();
    }
    goto LAB_0045ac82;
  }
  iStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_50 = unaff_EBP + -0x18;
  iStack_54 = 0x45a9f1;
  FUN_00556acf();
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = (*(int *)(unaff_EBP + -0x1c) / 1000) % 10;
  *(int *)(unaff_EBP + -0x20) = iVar5;
  if ((iVar5 < 0) || ((5 < iVar5 || (iVar5 == 5)))) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x45ac6b;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_4c = 0x45ac76;
    FUN_0045e46f();
  }
  else {
    iStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_50 = 0x45aa34;
    uVar3 = FUN_00552d7f();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      iStack_4c = *(undefined4 *)(extraout_ECX + 0x24);
      iStack_50 = extraout_ECX + 0x1c;
      iStack_54 = 0x45aad9;
      iVar5 = FUN_00413367();
      if (iVar2 <= iVar5) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
      }
      iStack_4c = *(undefined4 *)(extraout_ECX + 0x30);
      iStack_50 = extraout_ECX + 0x28;
      iStack_54 = 0x45aaef;
      iVar5 = FUN_00413367();
      if (iVar2 <= iVar5) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
      }
      iStack_4c = *(int *)(extraout_ECX + 0x3c);
      iStack_50 = extraout_ECX + 0x34;
      iStack_54 = 0x45ab05;
      iVar5 = FUN_00413367();
      if (iVar2 <= iVar5) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
      }
      iStack_54 = iStack_4c;
      if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_0045aa49;
      iStack_5c = iStack_4c;
      *(int **)(unaff_EBP + 8) = &iStack_5c;
      uStack_60 = 0x224;
      goto LAB_0045ab27;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    iStack_54 = extraout_ECX_00;
LAB_0045aa49:
    iStack_4c = 0;
    iStack_58 = unaff_EBP + -0x38;
    *(int **)(unaff_EBP + -0x28) = &iStack_54;
    iStack_5c = 0x45aa5a;
    iStack_50 = iStack_54;
    FUN_0045e0ed();
    iStack_58 = unaff_EBP + -0x10;
    iStack_5c = 0;
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_60;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_60 = extraout_ECX_01;
    FUN_00679d22(&uStack_60,0x207);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_004592e2();
    if (iVar2 == 1) {
      iStack_4c = unaff_EBP + -0x30;
      iStack_50 = 0x45aa9d;
      iVar2 = FUN_00455c59();
      iVar2 = *(int *)(iVar2 + 4);
      iVar5 = extraout_ECX_02;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        iStack_4c = 0;
        iStack_50 = 0x45aaae;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        iVar5 = extraout_ECX_03;
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        iVar4 = *(int *)(extraout_ECX + 0x48c);
      }
      else {
        iVar4 = *(int *)(iVar2 + 0x3e3 + *(int *)(unaff_EBP + -0x20) * 4);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + -4);
        }
        iVar4 = iVar4 + -1;
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        if (*(int *)(*(int *)(unaff_EBP + -0x24) + 0x48c) + *(int *)(unaff_EBP + -0x1c) < 0x31)
        goto LAB_0045abb0;
        *(int **)(unaff_EBP + 8) = &iStack_5c;
        uStack_60 = 0x1fa;
        iStack_5c = iVar5;
      }
      else {
        iStack_4c = *(undefined4 *)(iVar2 + 0x3d);
        iStack_50 = iVar2 + 0x39;
        iStack_54 = 0x45ab5e;
        sVar1 = FUN_0045f084();
        iStack_54 = (int)sVar1;
        iStack_58 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_5c = 0x45ab6a;
        iVar2 = FUN_00458df2();
        if (iVar4 + iVar2 * -4 + *(int *)(unaff_EBP + -0x1c) < 0x31) {
LAB_0045abb0:
          iStack_4c = 0;
          iStack_50 = 0;
          iStack_54 = 0xc6;
          iStack_58 = 0x45abbf;
          FUN_0060142b();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_4c = 0x45abce;
          iVar2 = FUN_0045e2eb();
          iStack_4c = CONCAT31((int3)((uint)(iVar2 / 1000) >> 8),iVar2 / 1000 == 0x2396) + 6;
          iStack_50 = 0x45abea;
          uVar3 = FUN_00457cda();
          iStack_4c = CONCAT31((int3)((uint)uVar3 >> 8),*(int *)(unaff_EBP + -0x10) == 2);
          iStack_50 = 0x45abfa;
          FUN_00457cda();
          iStack_4c = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_50 = 0x45ac05;
          FUN_00457d37();
          iStack_4c = 1;
          iStack_50 = 0x45ac11;
          FUN_00457cda();
          iStack_4c = *(undefined4 *)(unaff_EBP + 8);
          iStack_50 = 0x45ac1c;
          FUN_00457d37();
          iStack_4c = unaff_EBP + -0x48;
          iStack_50 = 0x45ac2b;
          FUN_004751b2();
          *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_4c = 0x45ac3d;
          FUN_0045ebca();
          goto LAB_0045ac3d;
        }
        *(int **)(unaff_EBP + 8) = &iStack_5c;
        uStack_60 = 0x1f9;
        iStack_5c = extraout_ECX_04;
      }
LAB_0045ab27:
      iStack_4c = 0;
      iStack_50 = 0;
      iStack_54 = 0;
      iStack_58 = 0;
      FUN_00679d22(&iStack_5c);
      uStack_60 = 0x45ab37;
      FUN_007db3ad();
    }
LAB_0045ac3d:
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x45ac49;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      iStack_4c = 0;
      iStack_50 = 0x45ac5a;
      FUN_0045e794();
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4c = 0x45ac82;
  FUN_00414ebb();
LAB_0045ac82:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


