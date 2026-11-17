/* FUN_007557b2 - 0x007557b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007557b2(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *puVar9;
  int unaff_EBP;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  bVar1 = DAT_0097be60 & 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar1 == 0) {
    DAT_0097be60 = DAT_0097be60 | 1;
    puStack_44 = &DAT_00978474;
    _DAT_0097be4c = 0;
    puStack_48 = (undefined1 *)0x7557f6;
    FUN_00414edd();
    puStack_44 = &DAT_0097be50;
    puStack_48 = (undefined1 *)0x755804;
    FUN_00679d22();
    puStack_44 = &DAT_0097be54;
    puStack_48 = (undefined1 *)0x755812;
    FUN_00679d22();
    puStack_44 = &DAT_0097be58;
    puStack_48 = (undefined1 *)0x755820;
    FUN_00679d22();
    puStack_44 = &DAT_0097be5c;
    puStack_48 = (undefined1 *)0x75582e;
    FUN_00679d22();
    puStack_44 = (undefined1 *)0x755838;
    FUN_008796d0();
  }
  puStack_44 = (undefined1 *)0x755848;
  iVar3 = FUN_00455c59();
  iVar3 = *(int *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_44 = (undefined1 *)0x755859;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_0045e2eb();
  puStack_44 = (undefined1 *)(iVar3 + 0x39);
  *(int *)(unaff_EBP + -0x1c) = (iVar4 / 1000) % 10;
  puStack_48 = (undefined1 *)0x75588e;
  sVar2 = FUN_0045f084();
  *(int *)(unaff_EBP + -0x2c) = (int)sVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_00973a94;
  FUN_0045e2eb();
  puStack_44 = (undefined1 *)0x7558b2;
  uVar5 = FUN_00552d7f();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_EBP + -0x24) = DAT_00973a94;
  FUN_0045e2eb();
  puStack_44 = (undefined1 *)(unaff_EBP + -0x28);
  puStack_48 = (undefined1 *)0x7558d5;
  FUN_00556acf();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_44 = (undefined1 *)0x7558e2;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  iVar4 = FUN_0045e2eb();
  if (iVar4 / 10000 == 0x21f) {
    puStack_44 = (undefined1 *)(unaff_EBP + -0x28);
    puStack_48 = (undefined1 *)0x755918;
    puVar6 = (undefined4 *)FUN_00679d22();
    puStack_48 = (undefined1 *)*puVar6;
    puStack_44 = *(undefined1 **)(unaff_EBP + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_44 = (undefined1 *)(unaff_EBP + -0x2c);
    puStack_48 = (undefined1 *)0x7559bc;
    puVar6 = (undefined4 *)FUN_00679d22();
    puStack_48 = (undefined1 *)*puVar6;
    puStack_44 = *(undefined1 **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00434e21(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x1c) * 4;
    iVar3 = *(int *)(iVar4 + 0x3e3 + iVar3);
    *(int *)(unaff_EBP + 0x18) = iVar4;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + -4);
    }
    puStack_44 = (undefined1 *)(unaff_EBP + -0x28);
    puStack_48 = (undefined1 *)0x75596d;
    puVar6 = (undefined4 *)FUN_00679d22();
    uVar5 = *puVar6;
    puStack_44 = *(undefined1 **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_48 = (undefined1 *)0x75597e;
    FUN_00458df2();
    puStack_44 = (undefined1 *)(iVar3 + -1);
    puStack_48 = *(undefined1 **)(unaff_EBP + -0x20);
    FUN_00434e21(unaff_EBP + -0x14,uVar5,*(undefined4 *)(&DAT_0097be4c + *(int *)(unaff_EBP + 0x18))
                );
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  FUN_00414ebb();
  puVar9 = *(undefined1 **)(*(int *)(unaff_EBP + 0x14) + 0x20);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 100);
  *(undefined1 **)(unaff_EBP + 0x18) = puVar9;
  *(undefined4 *)(unaff_EBP + -0x20) = 0x122;
  iVar3 = 0xe;
  if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) && (**(char **)(unaff_EBP + -0x18) != '\0')) {
    puStack_44 = (undefined1 *)0x755a18;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    puStack_44 = (undefined1 *)(unaff_EBP + -0x3c);
    puStack_48 = (undefined1 *)0x755a26;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_44 = (undefined1 *)0x755a32;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_44 = (undefined1 *)0x755a42;
    puStack_48 = (undefined1 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_44;
    FUN_00448a17();
    puStack_48 = (undefined1 *)0x1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00756efd(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_48 = (undefined1 *)0x755a6b;
    FUN_0044974c();
    puStack_48 = (undefined1 *)0x755a72;
    iVar3 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      puStack_44 = (undefined1 *)0x755a86;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_44 = (undefined1 *)0x755a93;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_44 = (undefined1 *)0x755a9e;
      FUN_00878dfb();
    }
    if (0x122 < iVar3 + 0x10) {
      *(int *)(unaff_EBP + -0x20) = iVar3 + 0x10;
    }
    puStack_44 = (undefined1 *)(unaff_EBP + -0x2c);
    puStack_48 = (undefined1 *)0x755ab3;
    piVar7 = (int *)FUN_00756efd();
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar3 == 0) {
      puStack_44 = (undefined1 *)0x755ac7;
      FUN_00878dfb();
    }
    iVar3 = FUN_004a2734();
    iVar3 = iVar3 + 0x16;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar9 = extraout_ECX_00;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      puStack_44 = (undefined1 *)0x755ae4;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      puVar9 = extraout_ECX_01;
    }
  }
  if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) || (**(char **)(unaff_EBP + -0x14) == '\0')) {
    iVar4 = -4;
  }
  else {
    puStack_44 = (undefined1 *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_48;
    puStack_48 = puVar9;
    FUN_00756efd(&puStack_48,7);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar5 = FUN_00449713();
    iVar4 = FUN_00757d85(10,0x113,iVar3,uVar5);
  }
  if ((*(int *)(unaff_EBP + -0x1c) == 0) ||
     (*(int *)(unaff_EBP + -0x1c) == *(int *)(unaff_EBP + 0x18))) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0x33;
  }
  puStack_44 = (undefined1 *)(iVar8 + iVar3 + iVar4);
  puStack_48 = *(undefined1 **)(unaff_EBP + -0x20);
  iVar8 = 10;
  FUN_0074d72a(10);
  puStack_44 = (undefined1 *)0x0;
  puStack_48 = (undefined1 *)0x1;
  FUN_0075699b(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  puVar9 = extraout_ECX_02;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    puStack_44 = (undefined1 *)0x755b70;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    puVar9 = extraout_ECX_03;
  }
  if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) && (**(char **)(unaff_EBP + -0x18) != '\0')) {
    puStack_48 = &stack0xffffffc0;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffc0;
    puStack_44 = (undefined1 *)0x1;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_44 = (undefined1 *)0x755b98;
    puStack_44 = (undefined1 *)FUN_00449713();
    puStack_48 = (undefined1 *)0xa;
    FUN_007585ac();
    puStack_44 = (undefined1 *)(unaff_EBP + 0xc);
    puStack_48 = (undefined1 *)0x755bb1;
    piVar7 = (int *)FUN_00756efd();
    iVar8 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (iVar8 == 0) {
      puStack_44 = (undefined1 *)0x755bc5;
      FUN_00878dfb();
    }
    iVar8 = FUN_004a2734();
    iVar8 = iVar8 + 0x12;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar9 = extraout_ECX_04;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      puStack_44 = (undefined1 *)0x755be2;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      puVar9 = extraout_ECX_05;
    }
  }
  if ((*(char **)(unaff_EBP + -0x14) != (char *)0x0) && (**(char **)(unaff_EBP + -0x14) != '\0')) {
    puStack_44 = (undefined1 *)0x1;
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_48;
    puStack_48 = puVar9;
    FUN_00756efd(&puStack_48,7);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar5 = FUN_00449713();
    FUN_00757d85(10,0x113,iVar8,uVar5);
  }
  puVar9 = *(undefined1 **)(unaff_EBP + -0x1c);
  if ((puVar9 != (undefined1 *)0x0) && (puVar9 != *(undefined1 **)(unaff_EBP + 0x18))) {
    puStack_48 = (undefined1 *)(iVar3 + iVar4 + 8);
    puStack_44 = puVar9;
    FUN_00759249();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    puStack_44 = (undefined1 *)0x755c63;
    FUN_0045e794();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


