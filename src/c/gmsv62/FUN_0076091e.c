/* FUN_0076091e - 0x0076091e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076091e(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  int iVar4;
  uint uVar5;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  int iStack_94;
  int iStack_90;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  iStack_90 = 0x76093b;
  FUN_0081622a();
  iStack_90 = 0x760946;
  FUN_00448dc6();
  iVar2 = DAT_0097951c;
  uVar1 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  uVar5 = *(uint *)(*(int *)(extraout_ECX + 0x70) + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(uint *)(unaff_EBP + -0x10) = uVar5;
  if ((int)uVar5 < (int)(uVar5 + 3)) {
    *(uint *)(unaff_EBP + -0x1c) = uVar5 * 0xc;
    iVar4 = extraout_ECX;
    while ((*(int *)(iVar2 + 0x6b0) != 0 && (uVar5 < *(uint *)(*(int *)(iVar2 + 0x6b0) + -4)))) {
      FUN_0045e2eb();
      iStack_90 = unaff_EBP + -0x48;
      iStack_94 = 0x7609b5;
      FUN_0084a5e4();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if ((*(int *)(unaff_EBP + -0x44) == 0) || (iVar2 = FUN_0045e2eb(), iVar2 == 0)) {
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0045e46f();
      }
      else {
        iVar2 = FUN_0045e2eb();
        iStack_90 = 0;
        if (iVar2 / 100000 == 0x5b) {
          iStack_94 = 0x7609fc;
          FUN_005afea1();
          iStack_94 = 0x760a03;
          iVar2 = FUN_005af3ee();
          iStack_94 = (uVar5 - iVar2) * 0x28 + 0x40;
          puStack_98 = (undefined1 *)0x11;
          iStack_9c = 0x760a1c;
          FUN_00469862();
          iStack_9c = 0x760a26;
          iStack_9c = thunk_FUN_0045e2eb();
          iStack_a4 = unaff_EBP + -0x14;
          *(undefined4 **)(unaff_EBP + -0x38) = &uStack_a0;
          uStack_a8 = 0x760a36;
          uStack_a0 = extraout_ECX_00;
          FUN_0046fc23();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_a4 = 0x760a3f;
          FUN_0048b97b();
          iStack_a4 = 0x760a46;
          FUN_00556c6a();
          FUN_0045e2eb();
          iStack_90 = unaff_EBP + -0x2c;
          iStack_94 = 0x760a63;
          FUN_00556acf();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_90 = 0x760a70;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 2;
        }
        else {
          iStack_94 = 0;
          puStack_98 = (undefined1 *)0x0;
          iStack_9c = 0;
          uStack_a0 = 0;
          iStack_a4 = 0x760a8a;
          FUN_005afea1();
          iStack_a4 = 0x760a91;
          iVar2 = FUN_005af3ee();
          iStack_a4 = (uVar5 - iVar2) * 0x28 + 0x40;
          uStack_a8 = 0x11;
          uStack_ac = 0x760aaa;
          FUN_00469862();
          uStack_ac = 0x760ab4;
          uStack_ac = thunk_FUN_0045e2eb();
          *(undefined1 **)(unaff_EBP + -0x38) = auStack_b0;
          FUN_0046fc23(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_0048b97b();
          FUN_005558b0();
          FUN_0045e2eb();
          iStack_90 = unaff_EBP + -0x30;
          iStack_94 = 0x760af1;
          FUN_0045a1d8();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_90 = 0x760afe;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 2;
        }
        FUN_00414ebb();
        puStack_98 = (undefined1 *)&iStack_90;
        *(int **)(unaff_EBP + -0x38) = &iStack_90;
        iStack_94 = 1;
        iStack_9c = 0x760b1d;
        FUN_007d4a9a();
        iStack_94 = unaff_EBP + 8;
        puStack_98 = (undefined1 *)0x760b28;
        FUN_007d3a22();
        iStack_90 = 0x760b37;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
        iStack_90 = unaff_EBP + -0x68;
        iStack_94 = 0x760b45;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          iStack_90 = 0x760b51;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_90 = 0x760b5b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        iStack_90 = unaff_EBP + -0x58;
        iStack_94 = 0x760b69;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          iStack_90 = 0x760b75;
          FUN_00878dfb();
        }
        iStack_90 = unaff_EBP + -0x58;
        puStack_98 = (undefined1 *)(unaff_EBP + -0x34);
        iStack_94 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_9c = 0x760b8c;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_94 = 0x760b99;
        iStack_94 = FUN_00449749();
        puStack_98 = (undefined1 *)0x760ba2;
        iStack_9c = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_98;
        uStack_a0 = 0x760bae;
        puStack_98 = extraout_ECX_01;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_9c = 0x760bb9;
        FUN_005afea1();
        iStack_9c = 0x760bc0;
        iVar2 = FUN_005af3ee();
        iStack_9c = (*(int *)(unaff_EBP + -0x10) - iVar2) * 0x28 + 0x20;
        uStack_a0 = 0x39;
        iStack_a4 = 0x760bda;
        FUN_004115d9();
        iStack_a4 = 0x760be1;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
          iStack_90 = 0x760bf2;
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_90 = 0x760bff;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_90 = 0x760c0a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_90 = 0x760c17;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_90 = 0x760c22;
          FUN_00878dfb();
        }
        if (1 < *(int *)(*(int *)(unaff_EBP + -0x44) + 0x1c)) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x44);
          iStack_90 = unaff_EBP + -0x3c;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_94 = 0x760c48;
          piVar3 = (int *)FUN_00679d22();
          iStack_90 = *piVar3;
          iStack_94 = unaff_EBP + -0x18;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          puStack_98 = (undefined1 *)0x760c5e;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00414ebb();
          iStack_90 = *(int *)(unaff_EBP + -0x18);
          iStack_94 = 0x760c85;
          FUN_0045efbb();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_00414ebb();
        }
        iStack_90 = 0x760c9a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
        iStack_90 = unaff_EBP + -0x88;
        iStack_94 = 0x760cab;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          iStack_90 = 0x760cb7;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_90 = 0x760cc1;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
        iStack_90 = unaff_EBP + -0x78;
        iStack_94 = 0x760ccf;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          iStack_90 = 0x760cdb;
          FUN_00878dfb();
        }
        iStack_90 = unaff_EBP + -0x78;
        puStack_98 = (undefined1 *)(unaff_EBP + -0x40);
        iStack_94 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_9c = 0x760cf5;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_94 = 0x760d02;
        iStack_94 = FUN_00449749();
        puStack_98 = (undefined1 *)0x760d0b;
        iStack_9c = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_98;
        uStack_a0 = 0x760d17;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_9c = 0x760d22;
        FUN_005afea1();
        iStack_9c = 0x760d29;
        iVar2 = FUN_005af3ee();
        iStack_9c = (*(int *)(unaff_EBP + -0x10) - iVar2) * 0x28 + 0x20;
        uStack_a0 = 0x39;
        iStack_a4 = 0x760d43;
        FUN_004115d9();
        iStack_a4 = 0x760d4a;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
          iStack_90 = 0x760d5b;
          (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_90 = 0x760d68;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_90 = 0x760d73;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_90 = 0x760d83;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_90 = 0x760d8e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x44) != 0) {
          iStack_90 = 0x760da0;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x44) = 0;
        }
        uVar5 = *(uint *)(unaff_EBP + -0x10);
        iVar4 = *(int *)(unaff_EBP + -0x20);
      }
      iVar2 = *(int *)(*(int *)(iVar4 + 0x70) + 0x38);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0xc;
      uVar5 = uVar5 + 1;
      *(uint *)(unaff_EBP + -0x10) = uVar5;
      if (iVar2 + 3 <= (int)uVar5) break;
      iVar2 = *(int *)(unaff_EBP + -0x24);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_90 = 0x760dde;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


