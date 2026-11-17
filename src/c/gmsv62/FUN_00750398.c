/* FUN_00750398 - 0x00750398 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00750398(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar9;
  
  FUN_00879bb8();
  iVar8 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  if (iVar8 != 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    iVar9 = unaff_EBP + 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(iVar9);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    iVar9 = unaff_EBP + 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(iVar9);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    bVar1 = *(byte *)(iVar8 + 0x38);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if ((((bVar1 & 2) != 0) && (0 < *(int *)(iVar8 + 0x3c))) && (0 < *(int *)(iVar8 + 0x40))) {
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xe21);
      iVar9 = *(int *)(iVar8 + 0x3c);
      *(undefined4 *)(unaff_EBP + -0x18) = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(int *)(unaff_EBP + 0xc) = iVar9 % 100;
      FUN_00434e21(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + -0x18),
                   (*(int *)(iVar8 + 0x3c) % 10000 - *(int *)(unaff_EBP + 0xc)) / 100,
                   *(undefined4 *)(unaff_EBP + 0xc),iVar9 / 10000);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      iVar9 = unaff_EBP + -0x14;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar9);
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xe22);
      *(undefined4 *)(unaff_EBP + -0x20) = *puVar5;
      iVar9 = *(int *)(iVar8 + 0x40);
      iVar2 = *(int *)(iVar8 + 0x40);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      *(int *)(unaff_EBP + 0xc) = iVar9 % 100;
      FUN_00434e21(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + -0x20),
                   (*(int *)(iVar8 + 0x40) % 10000 - *(int *)(unaff_EBP + 0xc)) / 100,
                   *(undefined4 *)(unaff_EBP + 0xc),iVar2 / 10000);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      iVar9 = unaff_EBP + -0x14;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar9);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    bVar1 = *(byte *)(iVar8 + 0x38);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    if ((bVar1 & 4) != 0) {
      if (*(int *)(iVar8 + 0x50) != 0) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe23);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
      }
      if (*(int *)(iVar8 + 0x54) != 0) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe24);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
      }
      if (*(int *)(iVar8 + 0x58) != 0) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe25);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
      }
      if (*(int *)(iVar8 + 0x5c) != 0) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe26);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
      }
      if (*(int *)(iVar8 + 0x60) != 0) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe27);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
      }
      if (*(int *)(iVar8 + 100) != 0) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe28);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
      }
      if (*(int *)(iVar8 + 0x4c) != 0) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe29);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
      }
      if (*(int *)(unaff_EBP + 0xc) != 7) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xe2a);
        iVar9 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (iVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + -4);
        }
        FUN_0045efbb(iVar9,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
        if (*(int *)(unaff_EBP + 0xc) < 7) {
          iVar9 = unaff_EBP + -0x10;
          FUN_004655d4(0xffffffff);
          FUN_00414f8b(iVar9);
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    bVar1 = *(byte *)(iVar8 + 0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if ((((bVar1 & 8) != 0) && (-1 < *(int *)(iVar8 + 0x44))) && (-1 < *(int *)(iVar8 + 0x48))) {
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0xf5c);
      uVar7 = *(undefined4 *)(iVar8 + 0x48);
      uVar3 = *puVar5;
      uVar4 = *(undefined4 *)(iVar8 + 0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00434e21(unaff_EBP + -0x1c,uVar3,uVar4,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00414ebb();
      iVar9 = unaff_EBP + -0x1c;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar9);
    }
    if (((*(byte *)(iVar8 + 0x38) & 1) == 0) || (*(int *)(iVar8 + 0x30) < 1)) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xe33);
      uVar7 = *(undefined4 *)(iVar8 + 0x30);
      uVar3 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00434e21(unaff_EBP + 0xc,uVar3,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00414ebb();
      iVar8 = unaff_EBP + 0xc;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar8);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00414ebb();
      piVar6 = *(int **)(unaff_EBP + 8);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xe2f);
      uVar7 = *(undefined4 *)(iVar8 + 0x30);
      uVar3 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00434e21(unaff_EBP + -0x18,uVar3,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00414ebb();
      iVar9 = unaff_EBP + -0x18;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar9);
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xe32);
      uVar7 = *(undefined4 *)(iVar8 + 0x34);
      uVar3 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00434e21(unaff_EBP + 0xc,uVar3,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00414ebb();
      piVar6 = *(int **)(unaff_EBP + 8);
      iVar8 = unaff_EBP + 0xc;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar8);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00414ebb();
    }
    uVar7 = FUN_00679d22(unaff_EBP + 8,0xe34);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    iVar8 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(iVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    iVar8 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(iVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00414ebb();
    if (*piVar6 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*piVar6 + -4);
    }
    piVar6 = (int *)(*(int *)(unaff_EBP + -0x24) + 8);
    *piVar6 = *piVar6 + iVar8 * 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


