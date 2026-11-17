/* FUN_0077221e - 0x0077221e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077221e(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar8;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 *puStack_7c;
  
  FUN_00879bb8();
  puStack_7c = (undefined4 *)0x0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_80 = 0x772240;
  cVar1 = FUN_00433bfa();
  if (cVar1 == '\0') {
    puStack_7c = (undefined4 *)&DAT_00978474;
    iStack_80 = 0x772255;
    iVar2 = FUN_004a3109();
    if (iVar2 != 0) {
      puStack_7c = (undefined4 *)0x3;
      iStack_80 = 0xfffffffe;
      uStack_84 = 0x772269;
      FUN_004031b7();
      iVar2 = *(int *)(extraout_ECX + 0x5c);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        puStack_7c = (undefined4 *)0x80004003;
        iStack_80 = 0x77227a;
        FUN_00878dfb();
      }
      puStack_7c = (undefined4 *)(unaff_EBP + -0x38);
      iStack_80 = unaff_EBP + -0x18;
      uStack_84 = 0x772289;
      FUN_0041141a();
      puStack_7c = (undefined4 *)0x772291;
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_7c = (undefined4 *)(unaff_EBP + -0x38);
      iStack_80 = 0x77229e;
      puStack_7c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_7c < 0) {
        iStack_80 = 0x7722a9;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      puStack_7c = (undefined4 *)0x3af;
      iStack_80 = unaff_EBP + -0x18;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_84 = 0x7722c6;
      puVar3 = (undefined4 *)FUN_00679d86();
      uStack_84 = *puVar3;
      puStack_7c = (undefined4 *)0x0;
      iStack_80 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_88 = 0x7722d7;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        puStack_7c = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
        iStack_80 = 0x7722ee;
        FUN_00403384();
      }
      puStack_7c = &DAT_00980690;
      iStack_80 = 0x7722fd;
      FUN_00403191();
      puStack_7c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_80 = 0x77230a;
      FUN_00403191();
      piStack_a4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piStack_a4 == (int *)0x0) {
        puStack_7c = (undefined4 *)0x80004003;
        iStack_80 = 0x77231f;
        FUN_00878dfb();
        piStack_a4 = *(int **)(unaff_EBP + -0x10);
      }
      uStack_88 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x24);
      iVar2 = *piStack_a4;
      iStack_80 = *(undefined4 *)(unaff_EBP + -0x20);
      puStack_7c = *(undefined4 **)(unaff_EBP + -0x1c);
      uStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_9c = 0xf;
      uStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
      uStack_a0 = 0x10e;
      *(int **)(unaff_EBP + -0x18) = piStack_a4;
      uStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
      puStack_a8 = (undefined4 *)0x77234a;
      iVar2 = (**(code **)(iVar2 + 0x2c))();
      if (iVar2 < 0) {
        puStack_a8 = (undefined4 *)&DAT_00963cc8;
        uStack_ac = *(undefined4 *)(unaff_EBP + -0x18);
        uStack_b4 = 0x77235e;
        iStack_b0 = iVar2;
        FUN_00878e09();
      }
      puStack_a8 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_ac = 0x77236b;
      puStack_a8 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_a8 < 0) {
        uStack_ac = 0x772376;
        FUN_00878dfb();
      }
      puStack_a8 = (undefined4 *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_ac = 0x772383;
      puStack_a8 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_a8 < 0) {
        uStack_ac = 0x77238e;
        FUN_00878dfb();
      }
      puStack_a8 = &DAT_00980690;
      uStack_ac = 0x772397;
      FUN_00403191();
      puStack_a8 = (undefined4 *)0x3;
      uStack_ac = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_b0 = 0x7723aa;
      FUN_004031b7();
      puStack_a8 = (undefined4 *)0x0;
      uStack_ac = 0;
      uStack_b4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x58);
      iStack_b0 = 0xffffffff;
      uStack_b8 = 0;
      uStack_bc = 0;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      iVar2 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_bc;
      iStack_c4 = unaff_EBP + -0x38;
      iStack_c8 = 0x7723ec;
      iStack_c8 = FUN_00449749();
      iStack_cc = -1;
      uVar4 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x18));
      uVar4 = FUN_00456ad5(uVar4);
      *(int **)(unaff_EBP + -0x18) = &iStack_cc;
      FUN_004033a1(uVar4);
      uVar8 = 0;
      uVar4 = *(undefined4 *)(iVar2 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004115d9(uVar4,0);
      FUN_00448e3a(uVar4,uVar8);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_c4 = 0x772431;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x77243c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_c4 = 0x772449;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x772454;
        FUN_00878dfb();
      }
      iStack_c4 = 0x77245d;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_c4 = 0x77246a;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_c4 = 0x772477;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_c4 = 0x772484;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_c4 = 0x772491;
      FUN_00403191();
      iVar5 = *(int *)(iVar2 + 0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (iVar5 == 0) {
        iStack_c4 = 0x7724a5;
        FUN_00878dfb();
      }
      iStack_c4 = unaff_EBP + -0x58;
      iStack_c8 = unaff_EBP + -0x48;
      iStack_cc = unaff_EBP + -0x28;
      FUN_004250ac(unaff_EBP + -0x78,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x38);
      iStack_c4 = 0x7724d1;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x7724dc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_c4 = 0x7724e9;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x7724f4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_c4 = 0x772501;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x77250c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_c4 = 0x772519;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x772524;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_c4 = 0x772531;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x77253c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_c4 = 0x772549;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_c4 = 0x772554;
        FUN_00878dfb();
      }
      iStack_c4 = 0x77255e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
      iStack_c4 = unaff_EBP + -0x28;
      iStack_c8 = 0x772568;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_c4 = 0x772574;
        FUN_00878dfb();
      }
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + -1;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_c4 = 0x772586;
      iStack_c8 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_c4;
      iStack_cc = 0x772592;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_c8 = 0x7725a4;
      FUN_0044974c();
      iStack_c8 = 0x7725ab;
      iVar6 = FUN_00448ebb();
      iVar5 = *(int *)(iVar2 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_c4 = 0x7725c0;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_c4 = 0x7725cb;
        FUN_00878dfb();
      }
      if (iVar5 + iVar6 < 0) {
        *(undefined4 *)(iVar2 + 0x60) = 0xfa;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        iStack_c4 = 0x7725e7;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


