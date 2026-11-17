/* FUN_007ce89a - 0x007ce89a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ce89a(void)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar10;
  uint uVar11;
  int unaff_EBP;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  iStack_48 = 0x7ce8bc;
  cVar2 = FUN_0042452b();
  iVar12 = (int)cVar2;
  *(int *)(unaff_EBP + -0x34) = iVar12;
  iStack_48 = 0x7ce8ca;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  iVar10 = extraout_ECX;
  if (-2 < iVar12) {
    iStack_48 = 0x7ce8de;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    iStack_48 = 0x7ce8e9;
    uVar5 = FUN_0042452b();
    iStack_48 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(uint *)(unaff_EBP + -0x30) = uVar5 & 0xff;
    iStack_4c = 0x7ce8f7;
    iVar6 = FUN_005d90ec();
    if ((iVar6 != 0) && (-1 < iVar12)) {
      iStack_4c = 0x7ce910;
      iStack_48 = iVar12;
      iVar12 = FUN_004e67c9();
      *(int *)(unaff_EBP + -0x28) = iVar12;
      if (iVar12 != 0) {
        *(int **)(unaff_EBP + -0x18) = (int *)(iVar12 + 0x78);
        piVar1 = *(int **)(iVar12 + 0x78);
        if ((piVar1 == (int *)0x0) || (iVar12 = *piVar1, iVar12 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(iVar12 + -4) >> 1;
        }
        if (uVar5 != 0) {
          iStack_48 = 1;
          iStack_4c = unaff_EBP + -0x44;
          iStack_50 = 0x7ce94c;
          FUN_0043f3d6();
          uVar5 = *(int *)(unaff_EBP + -0x3c) - *(int *)(unaff_EBP + -0x44);
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x44);
          if (uVar5 == 0) {
            iStack_48 = 0x7ce976;
            uVar4 = FUN_004133f0();
            *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
          }
          else {
            iStack_48 = 0x7ce965;
            uVar7 = FUN_004133f0();
            *(uint *)(unaff_EBP + -0x14) = uVar7 % uVar5 + *(int *)(unaff_EBP + -0x14);
          }
          uVar5 = *(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + -0x40);
          *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x40);
          if (uVar5 == 0) {
            iStack_48 = 0x7ce99d;
            iVar10 = FUN_004133f0();
          }
          else {
            iStack_48 = 0x7ce98d;
            uVar7 = FUN_004133f0();
            iVar10 = uVar7 % uVar5 + *(int *)(unaff_EBP + -0x24);
          }
          iStack_48 = 0xc00614a4;
          if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x84) == 0) {
            *(int **)(unaff_EBP + -0x28) = &iStack_4c;
            iStack_50 = 0;
            iStack_54 = 0x7ce9ee;
            FUN_00424e0a();
            iStack_54 = *(undefined4 *)(unaff_EBP + -0x14);
            *(undefined4 *)(unaff_EBP + -4) = 2;
            *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
            puStack_5c = (undefined1 *)0x0;
            uStack_60 = 0x7cea05;
            iStack_50 = iVar10;
            FUN_00424dd7();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            puStack_5c = *(undefined1 **)(unaff_EBP + -0x30);
          }
          else {
            *(int **)(unaff_EBP + -0x30) = &iStack_4c;
            iStack_50 = 0;
            iStack_54 = 0x7ce9bb;
            FUN_00424e0a();
            iStack_50 = 0;
            iStack_54 = 0;
            puStack_5c = (undefined1 *)&uStack_58;
            *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            uStack_60 = 0x7ce9d1;
            FUN_00486ada();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            puStack_5c = (undefined1 *)0x7ce9dd;
            iVar12 = FUN_0043f900();
            puStack_5c = (undefined1 *)(uint)(iVar12 == 0);
          }
          uStack_60 = 0x7cea14;
          uStack_60 = FUN_004091f9();
          FUN_00424e82();
          FUN_0042b613();
          iStack_4c = *(int *)(unaff_EBP + -0x14);
          iStack_50 = 0x7cea2a;
          iStack_48 = iVar10;
          iStack_50 = FUN_007d3c48();
          iStack_54 = *(int *)(unaff_EBP + -0x34) + 0xb;
          uStack_58 = *(undefined4 *)(unaff_EBP + -0x1c);
          puStack_5c = (undefined1 *)0x7cea3a;
          FUN_007d4267();
          iVar10 = *(int *)(unaff_EBP + -0x10);
        }
      }
    }
    iStack_48 = 0x7cea48;
    uVar5 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x1c) = uVar5 & 0xff;
    if ((uVar5 & 0xff) != 0) {
      iStack_48 = 0x7cea5e;
      cVar2 = FUN_0042452b();
      iStack_48 = 0x7cea70;
      iStack_48 = FUN_0042459a();
      iStack_4c = 0x7cea78;
      iVar10 = FUN_004308f4();
      *(int *)(unaff_EBP + -0x34) = iVar10;
      if (iVar10 == 0) {
        iStack_48 = 0x7ceb47;
        FUN_0042452b();
        iStack_48 = 0x7ceb4f;
        FUN_00424561();
        iStack_48 = 0x7ceb57;
        FUN_00424561();
      }
      else {
        if (cVar2 == '\0') {
          iVar10 = (*(int *)(unaff_EBP + -0x1c) * *(int *)(unaff_EBP + -0x20)) / 100;
LAB_007ceac9:
          *(int *)(unaff_EBP + -0x14) = iVar10;
        }
        else {
          iStack_48 = *(undefined4 *)(*(int *)(iVar10 + 0x15c) + 0x84);
          iStack_4c = *(int *)(iVar10 + 0x15c) + 0x7c;
          iStack_50 = 0x7cea9c;
          iVar12 = FUN_00413367();
          iVar10 = (*(int *)(unaff_EBP + -0x1c) * *(int *)(unaff_EBP + -0x20)) / 100;
          if (iVar10 < iVar12 / 10) goto LAB_007ceac9;
          *(int *)(unaff_EBP + -0x14) = iVar12 / 10;
        }
        iStack_48 = 0x7cead4;
        uVar5 = FUN_0042452b();
        uVar5 = uVar5 & 0xff;
        iStack_48 = 0x7ceadf;
        uVar3 = FUN_00424561();
        uVar11 = (uint)uVar3;
        iStack_48 = 0x7ceaec;
        uVar7 = FUN_00424561();
        iStack_48 = 0;
        iStack_4c = 0;
        iStack_50 = 0;
        iStack_54 = 0;
        uStack_58 = 1;
        puStack_5c = (undefined1 *)0x0;
        *(undefined4 **)(unaff_EBP + -0x30) = &uStack_60;
        *(uint *)(unaff_EBP + -0x28) = uVar7 & 0xffff;
        uStack_60 = extraout_ECX_00;
        FUN_00448a17(&DAT_00978474);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x28);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = *(undefined4 *)(unaff_EBP + -0x14);
        uVar8 = FUN_0043f900(uVar14,0,0,uVar11,uVar4);
        iVar10 = FUN_007d1e08(uVar5,uVar8);
        iVar10 = iVar10 + 100;
        uVar13 = 0;
        uVar9 = FUN_0067e5d1(0,iVar10);
        FUN_005cbf42(uVar9,uVar13,iVar10,uVar5,uVar8,uVar14,uVar15,uVar16,uVar11,uVar4);
      }
      iVar10 = *(int *)(unaff_EBP + -0x10);
    }
    iStack_48 = 0x7ceb62;
    cVar2 = FUN_0042452b();
    if (cVar2 != '\0') {
      iStack_48 = 0;
      iStack_4c = 1000;
      iStack_50 = 0x111aea;
      iStack_54 = 0x7ceb7c;
      iStack_50 = FUN_0064d61f();
      iStack_54 = 0x7ceb84;
      FUN_0079316f();
    }
  }
  iStack_48 = 0x7ceb8c;
  iVar12 = FUN_0042459a();
  if (iVar12 < 1) {
    if (iVar12 != 0) {
      if (iVar12 == -1) {
        iStack_48 = 0x7cebc9;
        iVar10 = FUN_0042459a();
        if (iVar10 == 0) {
          iStack_50 = 0;
        }
        else {
          iStack_4c = 0x7cebdb;
          iStack_48 = iVar10;
          iStack_50 = FUN_0064d61f();
        }
        if (iStack_50 != 0) {
          iStack_48 = 0;
          iStack_4c = 1000;
          iStack_54 = 0x7cebf1;
          FUN_0079316f();
          if ((iVar10 == 0x3eddc2) || (iVar10 == 0x406462)) {
            iStack_48 = 0x5dc;
            iStack_4c = 2;
            iStack_50 = 0x7cec10;
            FUN_0043f7b6();
          }
        }
      }
      goto LAB_007cec10;
    }
    iStack_48 = 0;
  }
  else {
    iStack_48 = 0x5dc;
    iStack_4c = 1;
    iStack_50 = 0x7ceba1;
    FUN_0043f7b6();
    iStack_48 = -iVar12;
    *(undefined4 *)(iVar10 + 0x528) = 5000;
  }
  iStack_4c = 0x7cebb5;
  FUN_0078c08d();
LAB_007cec10:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


