/* FUN_00552e70 - 0x00552e70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00552e70(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined *puStack_74;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0xc) / 1000000;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff94;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 1) || (iVar2 = *(int *)(unaff_EBP + 0xc) / 10000, iVar2 < 4)) {
    puStack_74 = (undefined *)(unaff_EBP + -0x2c);
    iStack_78 = 0x55365e;
    iVar1 = FUN_004084c5();
    iVar1 = *(int *)(iVar1 + 4);
    FUN_00412829();
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      iVar1 = unaff_EBP;
    }
    **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(iVar1 + 0xc);
    FUN_004125cc();
    if ((*(byte *)(unaff_EBP + -0x1c) & 1) != 0) {
      FUN_004027eb();
    }
    goto LAB_00553648;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 5) {
    if (iVar2 == 500) {
      puStack_74 = (undefined *)(unaff_EBP + -0x20);
      iStack_78 = 0x552f0a;
      puVar3 = (undefined4 *)FUN_00679d86();
      puStack_74 = (undefined *)*puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_78 = unaff_EBP + -0x14;
      iStack_7c = 0x552f1d;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        puStack_74 = (undefined *)0x552f34;
        FUN_00403384();
      }
      puStack_74 = (undefined *)0x552f43;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_74 = (undefined *)0x552f50;
      FUN_00403191();
      puStack_74 = (undefined *)0x0;
      iStack_78 = unaff_EBP + -0x3c;
      iStack_7c = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_80 = 0x552f68;
      uVar4 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_80;
      uStack_80 = extraout_ECX;
      FUN_004033a1(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00404a02(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_78 = 0x552f9e;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      puStack_74 = (undefined *)0x552fad;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_74 = (undefined *)0x552fbe;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_74 = (undefined *)0x552fcb;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x552fd6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_74 = (undefined *)0x552fe3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x552fee;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_74 = (undefined *)0x552ffb;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x55300a;
        FUN_00878dfb();
      }
    }
    else {
      puStack_74 = (undefined *)(unaff_EBP + -0x24);
      iStack_78 = 0x553024;
      puVar3 = (undefined4 *)FUN_00679d86();
      puStack_74 = (undefined *)*puVar3;
      iStack_78 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_7c = 0x553035;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00402676();
      puStack_74 = (undefined *)0x553052;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_74 = (undefined *)0x55305f;
      FUN_00403191();
      puStack_74 = (undefined *)0x0;
      iStack_78 = unaff_EBP + -0x3c;
      iStack_7c = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uStack_80 = 0x553077;
      uVar4 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_80;
      FUN_004033a1(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00404a02(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_78 = 0x5530ad;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x24) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (iVar1 != 0) {
        puStack_74 = (undefined *)0x5530c3;
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          puStack_74 = (undefined *)0x5530d4;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_74 = (undefined *)0x5530e1;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5530ec;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_74 = (undefined *)0x5530f9;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x553104;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_74 = (undefined *)0x553111;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x55311c;
        FUN_00878dfb();
      }
      puStack_74 = (undefined *)(unaff_EBP + -0x28);
      iStack_78 = 0x55312c;
      puVar3 = (undefined4 *)FUN_00679d86();
      puStack_74 = (undefined *)*puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_78 = unaff_EBP + -0x14;
      iStack_7c = 0x55313f;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00402676();
      puStack_74 = (undefined *)0x0;
      iStack_78 = 0x553158;
      iStack_7c = FUN_00411641();
      *(int **)(unaff_EBP + -0x28) = &iStack_78;
      uStack_80 = 0x553164;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_7c = 0x553170;
      FUN_0040263d();
      iStack_7c = unaff_EBP + -0x6c;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_80 = 0x55317f;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_78 = 0x55318a;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      puStack_74 = (undefined *)0x553199;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_74 = (undefined *)0x5531aa;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_74 = (undefined *)0x5531b7;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5531c2;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_005531c9:
      if (piVar5 != (int *)0x0) {
        puStack_74 = (undefined *)0x5531d7;
        (**(code **)(*piVar5 + 8))();
      }
    }
  }
  else {
    if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
      if ((DAT_009793c0 & 1) == 0) {
        DAT_009793c0 = DAT_009793c0 | 1;
        puStack_74 = &DAT_009793b4;
        iStack_78 = 0x553215;
        FUN_00679d86();
        puStack_74 = &DAT_009793b8;
        iStack_78 = 0x553226;
        FUN_00679d86();
        puStack_74 = &DAT_009793bc;
        iStack_78 = 0x553237;
        FUN_00679d86();
        puStack_74 = (undefined *)0x553241;
        FUN_008796d0();
      }
      puStack_74 = (undefined *)(unaff_EBP + -0x28);
      iStack_78 = 0x553259;
      piVar5 = (int *)FUN_00679d86();
      iStack_78 = *piVar5;
      puStack_74 = *(undefined **)(&DAT_009793ac + iVar1 * 4);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_7c = unaff_EBP + -0x14;
      uStack_80 = 0x553271;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00402676();
      puStack_74 = (undefined *)0x55328c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      puStack_74 = (undefined *)(unaff_EBP + -0x4c);
      iStack_78 = 0x55329b;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5532a7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      puStack_74 = (undefined *)0x5532b1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      puStack_74 = (undefined *)(unaff_EBP + -0x3c);
      iStack_78 = 0x5532bb;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5532c9;
        FUN_00878dfb();
      }
      puStack_74 = (undefined *)0x0;
      iStack_78 = unaff_EBP + -0x4c;
      iStack_7c = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      uStack_80 = 0x5532df;
      uVar4 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_80;
      FUN_004033a1(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00404a02(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_78 = 0x553315;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (iVar1 != 0) {
        puStack_74 = (undefined *)0x55332b;
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          puStack_74 = (undefined *)0x55333c;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_74 = (undefined *)0x553349;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x553354;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_74 = (undefined *)0x553361;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x55336c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_74 = (undefined *)0x553379;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x553384;
        FUN_00878dfb();
      }
      puStack_74 = (undefined *)(unaff_EBP + -0x24);
      iStack_78 = 0x553394;
      puVar3 = (undefined4 *)FUN_00679d86();
      puStack_74 = (undefined *)*puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_78 = unaff_EBP + -0x14;
      iStack_7c = 0x5533a7;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00402676();
      puStack_74 = (undefined *)0x0;
      iStack_78 = 0x5533c0;
      iStack_7c = FUN_00411641();
      *(int **)(unaff_EBP + -0x24) = &iStack_78;
      uStack_80 = 0x5533cc;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_7c = 0x5533d8;
      FUN_0040263d();
      iStack_7c = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      uStack_80 = 0x5533e7;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_78 = 0x5533f2;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      puStack_74 = (undefined *)0x553401;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_74 = (undefined *)0x553412;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_74 = (undefined *)0x55341f;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x55342a;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      goto LAB_005531c9;
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (iVar2 == 0x38e) {
      puStack_74 = (undefined *)(unaff_EBP + -0x28);
      iStack_78 = 0x553458;
      piVar5 = (int *)FUN_00679e4e();
      puVar3 = (undefined4 *)*piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (puVar3 == (undefined4 *)0x0) {
        puStack_74 = (undefined *)0x0;
      }
      else {
        puStack_74 = (undefined *)*puVar3;
      }
      iStack_78 = unaff_EBP + -0x20;
      iStack_7c = 0x553475;
      FUN_0041354c();
      iVar1 = *(int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
LAB_005534cf:
      if (iVar1 != 0) {
        FUN_004030b1();
      }
      puStack_74 = (undefined *)0x5534e4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      puStack_74 = (undefined *)(unaff_EBP + -0x3c);
      iStack_78 = 0x5534f3;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5534ff;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      puStack_74 = (undefined *)0x553509;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      puStack_74 = (undefined *)(unaff_EBP + -0x4c);
      iStack_78 = 0x553513;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x55351f;
        FUN_00878dfb();
      }
      puStack_74 = (undefined *)0x0;
      iStack_78 = unaff_EBP + -0x3c;
      iStack_7c = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      uStack_80 = 0x553537;
      uVar4 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_80;
      uStack_80 = extraout_ECX_00;
      FUN_004033a1(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00404a02(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_78 = 0x55356d;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      puStack_74 = (undefined *)0x55357c;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_74 = (undefined *)0x55358d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      puStack_74 = (undefined *)0x55359a;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5535a5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      puStack_74 = (undefined *)0x5535b2;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5535bd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      puStack_74 = (undefined *)0x5535ca;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x5535d5;
        FUN_00878dfb();
      }
    }
    else if ((iVar2 == 0x38f) || (iVar2 == 0x21f)) {
      puStack_74 = (undefined *)(unaff_EBP + -0x28);
      iStack_78 = 0x5534a8;
      piVar5 = (int *)FUN_00679e4e();
      puVar3 = (undefined4 *)*piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      if (puVar3 == (undefined4 *)0x0) {
        puStack_74 = (undefined *)0x0;
      }
      else {
        puStack_74 = (undefined *)*puVar3;
      }
      iStack_78 = unaff_EBP + -0x20;
      iStack_7c = 0x5534c5;
      FUN_0041354c();
      iVar1 = *(int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      goto LAB_005534cf;
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 4;
    piVar5 = (int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
  }
  else {
    piVar5 = (int *)(unaff_EBP + -0x18);
  }
  piVar5 = (int *)*piVar5;
  **(int **)(unaff_EBP + 8) = (int)piVar5;
  if (piVar5 != (int *)0x0) {
    puStack_74 = (undefined *)0x55360f;
    (**(code **)(*piVar5 + 4))();
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (((*(byte *)(unaff_EBP + -0x1c) & 4) != 0) && (*(int **)(unaff_EBP + 0xc) != (int *)0x0)) {
    puStack_74 = (undefined *)0x55362b;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    puStack_74 = (undefined *)0x553648;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
LAB_00553648:
  FUN_005536a9();
  return;
}


