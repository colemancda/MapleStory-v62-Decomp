/* FUN_00459375 - 0x00459375 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00459375(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  int extraout_ECX_06;
  int unaff_EBP;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x18) != 0) goto LAB_004596f9;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar3 = DAT_00978368;
  iStack_4c = *(undefined4 *)(unaff_EBP + 8);
  uStack_50 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  uStack_54 = 0x4593b4;
  FUN_0084a5e4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    iStack_4c = 0x4593cb;
    iVar1 = FUN_0045e2eb();
    if (iVar1 / 10000 != 0x38e) {
      iStack_4c = 0;
      uStack_50 = 0;
      uStack_54 = 0;
      iStack_58 = 0;
      uStack_5c = 10000;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_5c;
      iStack_60 = 0x239;
      FUN_00679d22(&uStack_5c);
      iStack_60 = 0x4593fb;
      iVar1 = FUN_007db3ad();
      if (iVar1 != 0) goto LAB_00459493;
    }
    iStack_4c = 0x459411;
    FUN_0045e2eb();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x20);
    *(int *)(unaff_EBP + -0x20) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 2;
      iVar1 = extraout_ECX_00;
    }
    else {
      iStack_4c = *(undefined4 *)(extraout_ECX + 0x24);
      uStack_50 = extraout_ECX + 0x1c;
      uStack_54 = 0x45942d;
      iVar1 = FUN_00413367();
      if (*(int *)(unaff_EBP + -0x20) <= iVar1) {
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
      }
      iStack_4c = *(undefined4 *)(extraout_ECX + 0x30);
      uStack_50 = extraout_ECX + 0x28;
      uStack_54 = 0x459444;
      iVar1 = FUN_00413367();
      if (*(int *)(unaff_EBP + -0x20) <= iVar1) {
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 2;
      }
      iStack_4c = *(undefined4 *)(extraout_ECX + 0x3c);
      uStack_50 = extraout_ECX + 0x34;
      uStack_54 = 0x45945b;
      iVar2 = FUN_00413367();
      iVar1 = iStack_4c;
      if (*(int *)(unaff_EBP + -0x20) <= iVar2) {
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 4;
      }
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      uStack_50 = 0;
      while ((iVar1 = *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x5c), iVar1 != 0 &&
             (uStack_50 < *(uint *)(iVar1 + -4)))) {
        iStack_4c = *(undefined4 *)(iVar1 + uStack_50 * 4);
        uStack_50 = unaff_EBP + -0x38;
        uStack_54 = 0x4594fc;
        FUN_0084a5e4();
        iStack_4c = 0;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_50 = 0x45950c;
        uStack_50 = FUN_0045e2eb();
        uStack_54 = 0x459514;
        iVar1 = FUN_0045d395();
        if (iVar1 != 0) {
          iStack_4c = 0;
          uStack_50 = 0;
          uStack_54 = 0;
          iStack_58 = 0;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_5c;
          iStack_60 = 0x200;
          uStack_5c = extraout_ECX_01;
          FUN_00679d22(&uStack_5c);
LAB_004595de:
          iStack_60 = 0x4595e3;
          iVar1 = FUN_007db791();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (iVar1 != 6) {
LAB_004595ef:
            if (*(int *)(unaff_EBP + -0x34) != 0) {
              iStack_4c = 0;
              uStack_50 = 0x459601;
              FUN_0045e794();
              *(undefined4 *)(unaff_EBP + -0x34) = 0;
            }
            goto LAB_004596cd;
          }
          uStack_50 = extraout_ECX_04;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            iStack_4c = 0;
            uStack_50 = 0x459617;
            FUN_0045e794();
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            uStack_50 = extraout_ECX_05;
          }
          break;
        }
        iStack_4c = unaff_EBP + -0x18;
        uStack_50 = 0x459527;
        uStack_50 = FUN_0045e2eb();
        uStack_54 = 0x45952f;
        iVar1 = FUN_0045870a();
        if (iVar1 == 0) {
          iStack_4c = 0x239;
          uStack_50 = unaff_EBP + -0x24;
          uStack_54 = 0x459579;
          iStack_4c = FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          uStack_50 = 0x459586;
          iVar1 = FUN_0045ec92();
          if (iVar1 == 0) {
LAB_004595b1:
            *(undefined1 *)(unaff_EBP + -0xd) = 0;
          }
          else {
            iStack_4c = 0;
            uStack_50 = 0;
            uStack_54 = 0;
            iStack_58 = 0;
            *(undefined4 **)(unaff_EBP + -0x20) = &uStack_5c;
            iStack_60 = 0x239;
            uStack_5c = extraout_ECX_02;
            FUN_00679d22(&uStack_5c);
            iStack_60 = 0x4595a6;
            iVar1 = FUN_007db3ad();
            *(undefined1 *)(unaff_EBP + -0xd) = 1;
            if (iVar1 == 0) goto LAB_004595b1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_4c = 0x4595c0;
          FUN_00414ebb();
          if (*(char *)(unaff_EBP + -0xd) == '\0') {
            iStack_4c = 0;
            uStack_50 = 0;
            uStack_54 = 0;
            iStack_58 = 0;
            iStack_60 = unaff_EBP + -0x18;
            *(undefined4 **)(unaff_EBP + -0x20) = &uStack_5c;
            uStack_5c = extraout_ECX_03;
            FUN_00450368();
            goto LAB_004595de;
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          goto LAB_004595ef;
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          iStack_4c = 0;
          uStack_50 = 0x459545;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        uStack_50 = *(uint *)(unaff_EBP + -0x20);
      }
      iStack_4c = 0;
      iStack_58 = unaff_EBP + -0x30;
      *(uint **)(unaff_EBP + -0x20) = &uStack_54;
      uStack_5c = 0x45962b;
      uStack_54 = uStack_50;
      FUN_0045e0ed();
      iStack_58 = unaff_EBP + -0x14;
      uStack_5c = 0;
      *(int **)(unaff_EBP + -0x28) = &iStack_60;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_60 = extraout_ECX_06;
      FUN_00679d22(&iStack_60,0x207);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar1 = FUN_004592e2();
      if (iVar1 == 1) {
        iStack_4c = 0;
        uStack_50 = 0;
        uStack_54 = 0xc6;
        iStack_58 = 0x459669;
        FUN_0060142b();
        iStack_4c = 0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        uStack_50 = 0x459677;
        uVar3 = FUN_00457cda();
        iStack_4c = CONCAT31((int3)((uint)uVar3 >> 8),*(int *)(unaff_EBP + -0x14) == 2);
        uStack_50 = 0x459687;
        FUN_00457cda();
        iStack_4c = *(undefined4 *)(unaff_EBP + -0x14);
        uStack_50 = 0x459692;
        FUN_00457d37();
        iStack_4c = *(undefined4 *)(unaff_EBP + 8);
        uStack_50 = 0x45969d;
        FUN_00457d37();
        iStack_4c = unaff_EBP + -0x48;
        uStack_50 = 0x4596ac;
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX + 0x18) = 1;
        if (*(int *)(extraout_ECX + 0x500) == 9) {
          *(undefined4 *)(extraout_ECX + 0x4c4) = *(undefined4 *)(unaff_EBP + 8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_4c = 0x4596cd;
        FUN_0045ebca();
      }
LAB_004596cd:
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        iStack_4c = 0;
        uStack_50 = 0x4596df;
        FUN_0045e794();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_4c = 0x4596ed;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_4c = 0x4596f9;
      FUN_00414ebb();
      goto LAB_004596f9;
    }
    iStack_4c = 0;
    uStack_50 = 0;
    uStack_54 = 0;
    iStack_58 = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_5c;
    iStack_60 = 0x224;
    uStack_5c = iVar1;
    FUN_00679d22(&uStack_5c);
    iStack_60 = 0x459490;
    FUN_007db3ad();
  }
LAB_00459493:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x45949f;
  FUN_0045e46f();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_4c = *(int *)(unaff_EBP + -0x18) + -0xc;
    uStack_50 = 0x4594b2;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    iStack_4c = *(int *)(unaff_EBP + -0x1c) + -0xc;
    uStack_50 = 0x4594cb;
    FUN_00434e38();
  }
LAB_004596f9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


