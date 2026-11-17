/* FUN_00775d6e - 0x00775d6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00775d6e(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
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
  iStack_80 = 0x775d90;
  cVar2 = FUN_00433bfa();
  if (cVar2 == '\0') {
    if (*(int *)(extraout_ECX + 0x54) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(extraout_ECX + 0x54) + -4);
    }
    if (iVar4 != 0) {
      puStack_7c = (undefined4 *)0x3;
      iStack_80 = 0xfffffffe;
      uStack_84 = 0x775dbc;
      FUN_004031b7();
      iVar4 = *(int *)(extraout_ECX + 0x58);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar4 == 0) {
        puStack_7c = (undefined4 *)0x80004003;
        iStack_80 = 0x775dcd;
        FUN_00878dfb();
      }
      puStack_7c = (undefined4 *)(unaff_EBP + -0x28);
      iStack_80 = unaff_EBP + -0x18;
      uStack_84 = 0x775ddc;
      FUN_0041141a();
      puStack_7c = (undefined4 *)0x775de4;
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_7c = (undefined4 *)(unaff_EBP + -0x28);
      iStack_80 = 0x775df1;
      puStack_7c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_7c < 0) {
        iStack_80 = 0x775dfc;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      puStack_7c = (undefined4 *)0x3af;
      iStack_80 = unaff_EBP + -0x18;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_84 = 0x775e19;
      puVar3 = (undefined4 *)FUN_00679d86();
      uStack_84 = *puVar3;
      puStack_7c = (undefined4 *)0x0;
      iStack_80 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_88 = 0x775e2a;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        puStack_7c = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
        iStack_80 = 0x775e41;
        FUN_00403384();
      }
      puStack_7c = &DAT_00980690;
      iStack_80 = 0x775e50;
      FUN_00403191();
      puStack_7c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_80 = 0x775e5d;
      FUN_00403191();
      piStack_a4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piStack_a4 == (int *)0x0) {
        puStack_7c = (undefined4 *)0x80004003;
        iStack_80 = 0x775e72;
        FUN_00878dfb();
        piStack_a4 = *(int **)(unaff_EBP + -0x10);
      }
      uStack_88 = *(undefined4 *)(unaff_EBP + -0x38);
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x34);
      iVar4 = *piStack_a4;
      iStack_80 = *(undefined4 *)(unaff_EBP + -0x30);
      puStack_7c = *(undefined4 **)(unaff_EBP + -0x2c);
      uStack_98 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x24);
      uStack_9c = 0xf;
      uStack_90 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_a0 = 0x118;
      *(int **)(unaff_EBP + -0x18) = piStack_a4;
      uStack_8c = *(undefined4 *)(unaff_EBP + -0x1c);
      puStack_a8 = (undefined4 *)0x775e9d;
      iVar4 = (**(code **)(iVar4 + 0x2c))();
      if (iVar4 < 0) {
        puStack_a8 = (undefined4 *)&DAT_00963cc8;
        uStack_ac = *(undefined4 *)(unaff_EBP + -0x18);
        uStack_b4 = 0x775eb1;
        iStack_b0 = iVar4;
        FUN_00878e09();
      }
      puStack_a8 = (undefined4 *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_ac = 0x775ebe;
      puStack_a8 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_a8 < 0) {
        uStack_ac = 0x775ec9;
        FUN_00878dfb();
      }
      puStack_a8 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_ac = 0x775ed6;
      puStack_a8 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_a8 < 0) {
        uStack_ac = 0x775ee1;
        FUN_00878dfb();
      }
      puStack_a8 = &DAT_00980690;
      uStack_ac = 0x775eea;
      FUN_00403191();
      puStack_a8 = (undefined4 *)0x3;
      uStack_ac = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_b0 = 0x775efd;
      FUN_004031b7();
      puStack_a8 = (undefined4 *)0x0;
      uStack_ac = 0;
      uStack_b4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x54);
      iStack_b0 = 0xffffffff;
      uStack_b8 = 0;
      uStack_bc = 0;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_c0 = (int *)0x775f16;
      (*DAT_0097b4c8)();
      piStack_c0 = (int *)0x775f23;
      FUN_0087a1b0();
      iVar4 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_bc;
      piStack_c0 = (int *)(unaff_EBP + -0x28);
      iStack_c4 = unaff_EBP + -0x38;
      iStack_c8 = 0x775f3f;
      iStack_c8 = FUN_00449749();
      iStack_cc = -1;
      uVar5 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x18));
      uVar5 = FUN_00456ad5(uVar5);
      *(int **)(unaff_EBP + -0x18) = &iStack_cc;
      FUN_004033a1(uVar5);
      uVar7 = 0;
      uVar5 = *(undefined4 *)(iVar4 + 0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004115d9(uVar5,0);
      FUN_00448e3a(uVar5,uVar7);
      piStack_c0 = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_c4 = 0x775f84;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x775f8f;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_c4 = 0x775f9c;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x775fa7;
        FUN_00878dfb();
      }
      piStack_c0 = &DAT_00980690;
      iStack_c4 = 0x775fb0;
      FUN_00403191();
      piStack_c0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_c4 = 0x775fbd;
      FUN_00403191();
      piStack_c0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_c4 = 0x775fca;
      FUN_00403191();
      piStack_c0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_c4 = 0x775fd7;
      FUN_00403191();
      piStack_c0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_c4 = 0x775fe4;
      FUN_00403191();
      iVar1 = *(int *)(iVar4 + 0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (iVar1 == 0) {
        piStack_c0 = (int *)0x80004003;
        iStack_c4 = 0x775ff8;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)(unaff_EBP + -0x68);
      iStack_c4 = unaff_EBP + -0x58;
      iStack_c8 = unaff_EBP + -0x48;
      iStack_cc = unaff_EBP + -0x28;
      FUN_004250ac(unaff_EBP + -0x78,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x38);
      piStack_c0 = (int *)(unaff_EBP + -0x78);
      iStack_c4 = 0x776024;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x77602f;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_c4 = 0x77603c;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x776047;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_c4 = 0x776054;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x77605f;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_c4 = 0x77606c;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x776077;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_c4 = 0x776084;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x77608f;
        FUN_00878dfb();
      }
      piStack_c0 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_c4 = 0x77609c;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x7760a7;
        FUN_00878dfb();
      }
      piStack_c0 = &DAT_00980690;
      iStack_c4 = 0x7760b0;
      FUN_00403191();
      *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + -1;
      piStack_c0 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_c4 = 0x7760c2;
      iStack_c8 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_c4;
      iStack_cc = 0x7760ce;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_c8 = 0x7760e0;
      FUN_0044974c();
      iStack_c8 = 0x7760e7;
      iVar6 = FUN_00448ebb();
      iVar1 = *(int *)(iVar4 + 0x5c);
      piStack_c0 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_c4 = 0x7760fa;
      piStack_c0 = (int *)FUN_00402bc3();
      if ((int)piStack_c0 < 0) {
        iStack_c4 = 0x776105;
        FUN_00878dfb();
      }
      if (iVar6 + iVar1 < 0) {
        *(undefined4 *)(iVar4 + 0x5c) = 0x113;
      }
      piStack_c0 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_c0 != (int *)0x0) {
        iStack_c4 = 0x776121;
        (**(code **)(*piStack_c0 + 8))();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


