/* FUN_004aea12 - 0x004aea12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004aea12(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_EBP;
  int iStack_6c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x38) != 0) {
    *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x5c;
    FUN_004aee99();
    iVar3 = *(int *)(extraout_ECX + 0x44);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (0 < iVar3) {
      *(undefined4 *)(unaff_EBP + -0x60) = 0;
      iStack_6c = unaff_EBP + -0x18;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -100) = 0xfffffffe;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_6c = 0x4aea75;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      iStack_6c = 0x4aea8e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_6c = 0x4aea9e;
      uVar2 = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_6c;
      FUN_00448a17(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0044974c();
      uVar2 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      iStack_6c = 0x4aead0;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_6c = 0x4aeadb;
        FUN_00878dfb();
      }
      iStack_6c = -1;
      *(undefined4 *)(unaff_EBP + -0x58) = 0;
      *(undefined4 *)(unaff_EBP + -0x50) = 0xe;
      FUN_004aeed6();
      iStack_6c = 0x4aeaf9;
      FUN_004aee6e();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x60) != 0) {
        iStack_6c = 0x4aeb0d;
        FUN_00434e38();
      }
    }
    iVar3 = *(int *)(extraout_ECX + 0x44);
    iVar6 = *(int *)(extraout_ECX + 0x3c);
    iVar7 = *(int *)(extraout_ECX + 0x38);
    iVar4 = (iVar3 + 1) * iVar6;
    *(int *)(unaff_EBP + -0x18) = iVar4;
    if (iVar7 <= iVar4) {
      *(int *)(unaff_EBP + -0x18) = iVar7;
    }
    iVar6 = iVar6 * iVar3;
    *(int *)(unaff_EBP + -0x14) = iVar6;
    if (iVar6 < *(int *)(unaff_EBP + -0x18)) {
      while( true ) {
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
        *(int *)(unaff_EBP + -100) = iVar6;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        iStack_6c = 0x4aeb59;
        FUN_00414f8b();
        iStack_6c = 0x4aeb63;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
        iStack_6c = unaff_EBP + -0x34;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_6c = 0x4aeb7d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_6c = 0x4aeb8d;
        uVar2 = FUN_00449713();
        *(int **)(unaff_EBP + -0x24) = &iStack_6c;
        FUN_00448a17(uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_0044974c();
        iVar3 = FUN_00448ebb();
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar3;
        *(int *)(unaff_EBP + -0x54) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_6c = 0x4aebbf;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_6c = 0x4aebca;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x58) = 0;
        *(undefined4 *)(unaff_EBP + -0x50) = 0xe;
        iStack_6c = 0x4aebde;
        puVar5 = (undefined4 *)FUN_004aeed6();
        *puVar5 = *(undefined4 *)(unaff_EBP + -100);
        iStack_6c = 0x4aebf1;
        FUN_00414f8b();
        iVar3 = *(int *)(unaff_EBP + -0x18);
        puVar5[2] = *(undefined4 *)(unaff_EBP + -0x5c);
        puVar5[3] = *(undefined4 *)(unaff_EBP + -0x58);
        puVar5[4] = *(undefined4 *)(unaff_EBP + -0x54);
        iVar7 = *(int *)(unaff_EBP + -0x14);
        puVar5[5] = *(undefined4 *)(unaff_EBP + -0x50);
        if (iVar7 != iVar3 + -1) {
          iStack_6c = unaff_EBP + -0x20;
          *(undefined4 *)(unaff_EBP + -100) = 0xfffffffd;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_6c = 0x4aec2f;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00414ebb();
          iStack_6c = 0x4aec45;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
          iStack_6c = unaff_EBP + -0x4c;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_6c = 0x4aec5f;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_6c = 0x4aec6f;
          uVar2 = FUN_00449713();
          *(int **)(unaff_EBP + -0x24) = &iStack_6c;
          FUN_00448a17(uVar2);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_0044974c();
          iVar3 = FUN_00448ebb();
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar3;
          *(int *)(unaff_EBP + -0x54) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_6c = 0x4aeca1;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_6c = 0x4aecac;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x58) = 0;
          *(undefined4 *)(unaff_EBP + -0x50) = 0xe;
          iStack_6c = 0x4aecc1;
          puVar5 = (undefined4 *)FUN_004aeed6();
          *puVar5 = *(undefined4 *)(unaff_EBP + -100);
          iStack_6c = 0x4aecd4;
          FUN_00414f8b();
          puVar5[2] = *(undefined4 *)(unaff_EBP + -0x5c);
          puVar5[3] = *(undefined4 *)(unaff_EBP + -0x58);
          puVar5[4] = *(undefined4 *)(unaff_EBP + -0x54);
          puVar5[5] = *(undefined4 *)(unaff_EBP + -0x50);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x60) != 0) {
          iStack_6c = 0x4aecf2;
          FUN_00434e38();
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        if (*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + -0x14)) break;
        iVar6 = *(int *)(unaff_EBP + -0x14);
      }
    }
    if (*(int *)(extraout_ECX + 0x44) < *(int *)(extraout_ECX + 0x40) + -1) {
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x3c) = 0xffffffff;
      iStack_6c = unaff_EBP + -0x20;
      *(undefined4 *)(unaff_EBP + -4) = 10;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_6c = 0x4aed3f;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00414ebb();
      iStack_6c = 0x4aed55;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_6c = unaff_EBP + -0x4c;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_6c = 0x4aed6f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_6c = 0x4aed7f;
      uVar2 = FUN_00449713();
      *(int **)(unaff_EBP + -0x24) = &iStack_6c;
      FUN_00448a17(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_0044974c();
      iVar3 = FUN_00448ebb();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar3;
      *(int *)(unaff_EBP + -0x2c) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_6c = 0x4aedb1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_6c = 0x4aedbc;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x28) = 0xe;
      iStack_6c = 0x4aedd0;
      puVar5 = (undefined4 *)FUN_004aeed6();
      *puVar5 = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_6c = 0x4aede3;
      FUN_00414f8b();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puVar5[2] = *(undefined4 *)(unaff_EBP + -0x34);
      puVar5[3] = *(undefined4 *)(unaff_EBP + -0x30);
      puVar5[4] = *(undefined4 *)(unaff_EBP + -0x2c);
      puVar5[5] = *(undefined4 *)(unaff_EBP + -0x28);
      FUN_00414ebb();
    }
    if (*(int *)(extraout_ECX + 0x4c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(extraout_ECX + 0x1c) - *(int *)(unaff_EBP + -0x10)) / 2;
    }
    uVar8 = 0;
    iVar7 = 0;
    while( true ) {
      piVar1 = *(int **)(unaff_EBP + -0x1c);
      iVar6 = *piVar1;
      if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar8)) break;
      *(int *)(iVar7 + 8 + iVar6) = iVar3;
      iVar3 = iVar3 + *(int *)(iVar7 + 0x10 + *piVar1);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 0x18;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


