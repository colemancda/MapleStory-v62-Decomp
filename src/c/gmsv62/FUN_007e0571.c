/* FUN_007e0571 - 0x007e0571 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e0571(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar4;
  int unaff_EBP;
  undefined4 uStack_19c;
  int *piStack_198;
  int iStack_194;
  undefined1 *puStack_190;
  undefined1 auStack_188 [4];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  int iStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  int iStack_124;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 1;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  iStack_124 = 0x4ed;
  iStack_128 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_12c = 0x7e05b0;
  iStack_124 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_128 = 0x7e05bd;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_124 = 0x7e05c8;
  FUN_00402676();
  iStack_124 = 0x578;
  iStack_128 = 0x7e05d7;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_124 = 0;
  }
  else {
    iStack_124 = 0x7e05e9;
    iStack_124 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_128 = 0x7e05fc;
  FUN_00450382();
  iStack_124 = unaff_EBP + -0x3c;
  iStack_128 = 0;
  uStack_12c = 0x84;
  uStack_130 = 0x6b;
  uStack_134 = 1000;
  iStack_13c = 0x7e0619;
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))();
  iStack_13c = 0x4ee;
  iStack_140 = unaff_EBP + -0x10;
  uStack_144 = 0x7e0629;
  iStack_13c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_140 = 0x7e0636;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_13c = 0x7e0641;
  FUN_00402676();
  iStack_13c = 0x578;
  iStack_140 = 0x7e0650;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    iStack_13c = 0;
  }
  else {
    iStack_13c = 0x7e0662;
    iStack_13c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_140 = 0x7e0675;
  FUN_00450382();
  iStack_13c = unaff_EBP + -0x3c;
  iStack_140 = 0;
  uStack_144 = 0x84;
  uStack_148 = 0x9c;
  uStack_14c = 0x3e9;
  iStack_154 = 0x7e0695;
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))();
  iStack_154 = 0x9f7;
  iStack_158 = unaff_EBP + -0x10;
  uStack_15c = 0x7e06a5;
  iStack_154 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_158 = 0x7e06b2;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_154 = 0x7e06bd;
  FUN_00402676();
  iStack_154 = 0x578;
  iStack_158 = 0x7e06cc;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    iStack_154 = 0;
  }
  else {
    iStack_154 = 0x7e06de;
    iStack_154 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_158 = 0x7e06f1;
  FUN_00450382();
  iStack_154 = unaff_EBP + -0x3c;
  iStack_158 = 0;
  uStack_15c = 6;
  uStack_160 = 0xbe;
  uStack_164 = 0x3ea;
  iStack_16c = 0x7e070e;
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))();
  iStack_16c = 0x7e0719;
  FUN_0048f37f();
  iStack_16c = 0xf4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0xe0) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0xdc) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0xd8) = 0xff999999;
  *(undefined4 *)(unaff_EBP + -0xc4) = 0x26;
  *(undefined4 *)(unaff_EBP + -0xc0) = 0x26;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0x26;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0x26;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0xfffffffe;
  uStack_170 = 0x7e076f;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    iStack_16c = 0;
  }
  else {
    iStack_16c = 0x7e0781;
    iStack_16c = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_170 = 0x7e0795;
  FUN_00495bdd();
  iStack_16c = unaff_EBP + -0xe0;
  uStack_170 = 0x11;
  uStack_174 = 100;
  uStack_178 = 0x44;
  uStack_17c = 0x67;
  uStack_180 = 0;
  uStack_184 = 0x3eb;
  (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0x20))();
  puStack_190 = (undefined1 *)0x7e07c6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_190 = (undefined1 *)0x7e07da;
  FUN_00403191();
  puStack_190 = (undefined1 *)0x0;
  iStack_194 = unaff_EBP + -0xa0;
  piStack_198 = (int *)(unaff_EBP + -0xf0);
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_19c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_19c = extraout_ECX_00;
  FUN_00679e4e(&uStack_19c,0xacc);
  iVar1 = unaff_EBP + -0x110;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_194 = 0x7e082a;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    puStack_190 = (undefined1 *)0x7e0840;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      puStack_190 = (undefined1 *)0x7e0851;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_190 = (undefined1 *)0x7e0861;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_190 = (undefined1 *)0x7e086c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_190 = (undefined1 *)0x7e087c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_190 = (undefined1 *)0x7e0887;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_190 = (undefined1 *)0x7e0897;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_190 = (undefined1 *)0x7e08a2;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_190 = (undefined1 *)0x7e08b2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_190 = (undefined1 *)0x7e08c5;
    FUN_00878dfb();
  }
  puStack_190 = (undefined1 *)0x7e08d1;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_190 = (undefined1 *)0x7e08de;
  FUN_004035f5();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    puStack_190 = (undefined1 *)0x7e08ef;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x2c) == 0) {
      puStack_190 = (undefined1 *)0x7e0901;
      FUN_00878dfb();
    }
    piStack_198 = *(int **)(unaff_EBP + -0x2c);
    puStack_190 = (undefined1 *)(unaff_EBP + -0x90);
    iStack_194 = 1;
    uStack_19c = 0x7e0917;
    iVar1 = (**(code **)(*piStack_198 + 0xc))();
    if (iVar1 != 0) goto LAB_007e0a76;
    puStack_190 = (undefined1 *)(unaff_EBP + -0x20);
    iStack_194 = 0x7e092f;
    iVar1 = unaff_EBP + -0x90;
    FUN_00405a23();
    iStack_194 = iVar1;
    puStack_190 = (undefined1 *)0x0;
    piStack_198 = (int *)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x24) = &iStack_194;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_19c = 0x7e0946;
    FUN_004059fd();
    piStack_198 = (int *)(unaff_EBP + -0x100);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_19c = 0x7e0959;
    FUN_0040263d();
    uStack_19c = 0x7e0960;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_194 = 0x7e096b;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar1 != 0) {
      puStack_190 = (undefined1 *)0x7e0981;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_190 = (undefined1 *)0x7e0992;
        FUN_00878dfb();
      }
    }
    puVar4 = (undefined1 *)(unaff_EBP + -0x100);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_190 = (undefined1 *)0x7e09a2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_190 = (undefined1 *)0x7e09ad;
      FUN_00878dfb();
      puVar4 = extraout_ECX_01;
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) break;
    piStack_198 = (int *)&puStack_190;
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_190;
    iStack_194 = 0x5ed;
    uStack_19c = 0x7e09ce;
    puStack_190 = puVar4;
    FUN_00679e4e();
    iStack_194 = unaff_EBP + -0x120;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_198 = (int *)0x7e09e1;
    FUN_0040263d();
    piStack_198 = (int *)0x7e09e8;
    puStack_190 = (undefined1 *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_194 = 0x7e09f2;
    puStack_190 = (undefined1 *)FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    iStack_194 = 0x7e0a02;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    puStack_190 = (undefined1 *)0x7e0a12;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_190 = (undefined1 *)0x7e0a1d;
      FUN_00878dfb();
    }
    puStack_190 = *(undefined1 **)(unaff_EBP + -0x28);
    iStack_194 = 0x7e0a2e;
    FUN_0049e176();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      puStack_190 = (undefined1 *)0x7e0a4b;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_004030b1();
  }
LAB_007e0a76:
  puStack_190 = (undefined1 *)0x7e0a87;
  FUN_0049e5ba();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x7c) = 2;
  *(undefined4 *)(unaff_EBP + -0x74) = 2;
  puStack_190 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x70) = 2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0xff000000;
  iStack_194 = 0x7e0abb;
  uVar2 = FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x6c) = **(undefined4 **)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 4;
  FUN_0087a1b0();
  iStack_194 = *(int *)(extraout_ECX + 0x7c);
  piStack_198 = (int *)0x7e0afe;
  puStack_190 = auStack_188;
  puStack_190 = (undefined1 *)FUN_0087b818();
  iStack_194 = 0x7e0b0c;
  FUN_00414edd();
  puStack_190 = (undefined1 *)0x7e0b1b;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar1 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_190 = (undefined1 *)0x7e0b41;
  FUN_0045e196();
  puStack_190 = (undefined1 *)0xe;
  iStack_194 = 0x5f;
  piStack_198 = (int *)0x33;
  uStack_19c = 0x69;
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 8))(extraout_ECX,0x3ed);
  *(undefined4 *)(unaff_EBP + -0x50) = 0x1e;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x10,0xc);
  if (*piVar3 != 0) {
    InterlockedIncrement((LONG *)(*piVar3 + 8));
  }
  FUN_00402fa6();
  *(int *)(unaff_EBP + -0x6c) = *piVar3;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  iVar1 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xac) + 8))
            (extraout_ECX,0x3ee,10,0x69,0xbe,0xe,unaff_EBP + -0x80);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0xac));
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0045c14e();
  piVar3 = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x90);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  if (*(int *)(unaff_EBP + -0xa8) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


