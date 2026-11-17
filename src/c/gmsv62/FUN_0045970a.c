/* FUN_0045970a - 0x0045970a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045970a(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int unaff_EBP;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x18);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (iVar1 != 0) goto LAB_00459913;
  if ((*(int *)(unaff_EBP + 8) < 80000000) || (89999999 < *(int *)(unaff_EBP + 8))) {
    iStack_4c = 0;
    iStack_50 = 0;
    iStack_54 = 0;
    iStack_58 = 0;
    *(int **)(unaff_EBP + -0x24) = &iStack_5c;
    uStack_60 = 0x239;
    iStack_5c = extraout_ECX;
    FUN_00679d22(&iStack_5c);
    uStack_60 = 0x45975b;
    iVar1 = FUN_007db3ad();
    if (iVar1 != 0) goto LAB_00459913;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_4c = *(undefined4 *)(unaff_EBP + 8);
  iStack_50 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_54 = 0x459787;
  FUN_0084a5e4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x45979e;
    FUN_0045e46f();
  }
  else {
    iStack_4c = 0x4597ab;
    iStack_50 = FUN_0045e2eb();
    iStack_4c = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0x20);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    iStack_54 = 0x4597c1;
    iVar1 = FUN_0045d395();
    if (iVar1 == 0) {
LAB_004597ec:
      iStack_4c = unaff_EBP + -0x38;
      iStack_50 = 0x4597f7;
      iVar1 = FUN_00455c59();
      iStack_4c = *(int *)(*(int *)(iVar1 + 4) + 0xad);
      iStack_50 = *(int *)(iVar1 + 4) + 0xa5;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_54 = 0x45980f;
      iVar2 = FUN_00413367();
      iVar1 = iStack_4c;
      if (iVar2 < *(int *)(unaff_EBP + -0x20)) {
        iStack_4c = 0;
        iStack_50 = 0;
        iStack_54 = 0;
        iStack_58 = 0;
        iStack_5c = iVar1;
        *(int **)(unaff_EBP + -0x28) = &iStack_5c;
        uStack_60 = 0x116;
        FUN_00679d22(&iStack_5c);
        uStack_60 = 0x459832;
        iVar2 = FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -0xd) = 1;
        iStack_4c = extraout_ECX_01;
        iVar1 = extraout_ECX_01;
        if (iVar2 == 0) goto LAB_0045983d;
      }
      else {
LAB_0045983d:
        *(undefined1 *)(unaff_EBP + -0xd) = 0;
        iVar1 = iStack_4c;
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        iStack_4c = 0;
        iStack_50 = 0x459852;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        iVar1 = extraout_ECX_02;
      }
      if (*(char *)(unaff_EBP + -0xd) == '\0') {
        iStack_4c = 1;
        iStack_58 = unaff_EBP + -0x30;
        *(int **)(unaff_EBP + -0x28) = &iStack_54;
        iStack_5c = 0x459872;
        iStack_54 = iVar1;
        iStack_50 = iVar1;
        FUN_0045e0ed();
        iStack_58 = unaff_EBP + -0x24;
        iStack_5c = 0;
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_60;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_60 = extraout_ECX_03;
        FUN_00679d22(&uStack_60,0x207);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar1 = FUN_004592e2();
        if (iVar1 == 1) {
          iStack_4c = 0;
          iStack_50 = 0;
          iStack_54 = 0xc6;
          iStack_58 = 0x4598ad;
          FUN_0060142b();
          iStack_4c = 0x1e;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_50 = 0x4598bb;
          FUN_00457cda();
          iStack_4c = *(undefined4 *)(unaff_EBP + 8);
          iStack_50 = 0x4598c6;
          FUN_00457d37();
          iStack_4c = unaff_EBP + -0x48;
          iStack_50 = 0x4598d5;
          FUN_004751b2();
          *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_4c = 0x4598e7;
          FUN_0045ebca();
        }
      }
    }
    else {
      iStack_4c = 0;
      iStack_50 = 0;
      iStack_54 = 0;
      iStack_58 = 0;
      *(int **)(unaff_EBP + -0x28) = &iStack_5c;
      uStack_60 = 0xb4f;
      iStack_5c = extraout_ECX_00;
      FUN_00679d22(&iStack_5c);
      uStack_60 = 0x4597e1;
      iVar1 = FUN_007db3ad();
      if (iVar1 == 0) goto LAB_004597ec;
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      iStack_4c = 0;
      iStack_50 = 0x4598f9;
      FUN_0045e794();
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_4c = 0x459907;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4c = 0x459913;
  FUN_00414ebb();
LAB_00459913:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


