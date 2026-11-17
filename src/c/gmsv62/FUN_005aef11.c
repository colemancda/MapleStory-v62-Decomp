/* FUN_005aef11 - 0x005aef11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005aef11(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_84;
  int iStack_80;
  int *piStack_7c;
  undefined *puStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *pcStack_50;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  pcStack_50 = (char *)0x5aef2e;
  FUN_0081622a();
  pcStack_50 = (char *)0x5aef39;
  FUN_00448dc6();
  iVar3 = *(int *)(extraout_ECX + 0xb4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar3 + -4);
  }
  pcStack_50 = (char *)0x5aef61;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a1b0();
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_58 = 0x5aef7c;
  pcStack_50 = &stack0xffffffb8;
  uStack_54 = FUN_00412335();
  *(char ***)(unaff_EBP + -0x28) = &pcStack_50;
  uStack_58 = 0x5aef88;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_54 = 0x5aef97;
  FUN_0044974c();
  uStack_54 = 0x5aef9e;
  uVar2 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
  pcStack_50 = (char *)0x5aefae;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_50 = (char *)0x5aefb9;
    FUN_00878dfb();
  }
  pcStack_50 = s_YOU_HAVE_RECEIVED_00965a64;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uStack_54 = 0x5aefcb;
  FUN_00414edd();
  pcStack_50 = s_NOTE_S___00965a58;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  uStack_54 = 0x5aefe1;
  FUN_00414edd();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_50 = (char *)0x5aefee;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pcStack_50 = (char *)0x5aeffe;
  uStack_54 = FUN_00449713();
  *(char ***)(unaff_EBP + -0x24) = &pcStack_50;
  uStack_58 = 0x5af00a;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_54 = 0x5af01b;
  FUN_0044974c();
  uStack_54 = 0x5af022;
  iVar3 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_50 = (char *)0x5af031;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pcStack_50 = (char *)0x5af03c;
    FUN_00878dfb();
  }
  pcStack_50 = (char *)0x5af045;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  pcStack_50 = (char *)0x5af052;
  FUN_00403191();
  pcStack_50 = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_54 = 0x5af065;
  uStack_54 = FUN_00449749();
  uStack_58 = 0x5af06e;
  uStack_5c = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
  iStack_60 = 0x5af07a;
  FUN_00448a17();
  uStack_5c = 0x20;
  iStack_60 = 100;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_64 = 0x5af08a;
  FUN_004115d9();
  uStack_64 = 0x5af091;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  pcStack_50 = (char *)0x5af09e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pcStack_50 = (char *)0x5af0a9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_50 = (char *)0x5af0b6;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pcStack_50 = (char *)0x5af0c1;
    FUN_00878dfb();
  }
  pcStack_50 = (char *)0x5af0ca;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  pcStack_50 = (char *)0x5af0d7;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffb8;
  pcStack_50 = (char *)(unaff_EBP + -0x48);
  uStack_54 = 0x5af0fc;
  uStack_54 = FUN_00449749();
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_60 = 0x5af108;
  uStack_5c = FUN_0048b981();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
  iStack_60 = 0x5af114;
  FUN_00448a17();
  uStack_5c = 0x20;
  iStack_60 = iVar3 + 100;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_64 = 0x5af126;
  FUN_004115d9();
  uStack_64 = 0x5af12d;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  pcStack_50 = (char *)0x5af13a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pcStack_50 = (char *)0x5af145;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_50 = (char *)0x5af152;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pcStack_50 = (char *)0x5af15d;
    FUN_00878dfb();
  }
  pcStack_50 = (char *)0x5af166;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  pcStack_50 = (char *)0x5af173;
  FUN_00403191();
  pcStack_50 = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_54 = 0x5af186;
  uStack_54 = FUN_00449749();
  uStack_58 = 0x5af18f;
  uStack_5c = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
  iStack_60 = 0x5af19b;
  FUN_00448a17();
  uStack_5c = 0x20;
  iStack_60 = iVar3 + 100 + *(int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_64 = 0x5af1b1;
  FUN_004115d9();
  uStack_64 = 0x5af1b8;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  pcStack_50 = (char *)0x5af1c5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_50 = (char *)0x5af1d2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_50 = (char *)0x5af1df;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_50 = (char *)0x5af1ea;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  pcStack_50 = (char *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_54 = 0x5af204;
  puVar5 = (undefined4 *)FUN_00679d86();
  uStack_54 = *puVar5;
  pcStack_50 = (char *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_58 = 0x5af215;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00402676();
  pcStack_50 = (char *)0x5af230;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  pcStack_50 = (char *)(unaff_EBP + -0x48);
  uStack_54 = 0x5af23a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    pcStack_50 = (char *)0x5af246;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pcStack_50 = (char *)0x5af250;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  pcStack_50 = (char *)(unaff_EBP + -0x38);
  uStack_54 = 0x5af25a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    pcStack_50 = (char *)0x5af266;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (*(int *)(unaff_EBP + 8) == 0) {
    pcStack_50 = (char *)0x5af279;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
  pcStack_50 = *(char **)(unaff_EBP + -0x40);
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_6c = 0x8a;
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_70 = 0x104;
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_78 = (undefined *)0x5af2a4;
  piStack_74 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x2c))();
  if (iVar3 < 0) {
    puStack_78 = &DAT_00963cc8;
    uStack_84 = 0x5af2b4;
    iStack_80 = iVar3;
    piStack_7c = piVar1;
    FUN_00878e09();
  }
  puStack_78 = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_7c = (int *)0x5af2c1;
  puStack_78 = (undefined *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    piStack_7c = (int *)0x5af2cc;
    FUN_00878dfb();
  }
  puStack_78 = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_7c = (int *)0x5af2d9;
  puStack_78 = (undefined *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    piStack_7c = (int *)0x5af2e4;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      puStack_78 = (undefined *)(uint)(iVar4 == iVar3 + -1);
      piStack_7c = (int *)0x5af303;
      FUN_005afea1();
      piStack_7c = (int *)0x5af30a;
      iVar6 = FUN_005af3ee();
      piStack_7c = (int *)(iVar6 * -10);
      uStack_84 = 0x5af31a;
      iStack_80 = iVar4;
      iStack_80 = FUN_005affa6();
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_84;
      uStack_84 = extraout_ECX_00;
      FUN_0046fc23(unaff_EBP + 8);
      FUN_005af3f2();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  puStack_78 = (undefined *)0x3;
  piStack_7c = (int *)0xff;
  iStack_80 = 0x5af345;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_78 = (undefined *)0x80004003;
    piStack_7c = (int *)0x5af359;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x44);
  piStack_7c = *(int **)(unaff_EBP + -0x40);
  puStack_78 = *(undefined **)(unaff_EBP + -0x3c);
  iVar3 = (**(code **)(*piVar1 + 0x80))(piVar1,8,0x42,*(undefined4 *)(unaff_EBP + 8));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


