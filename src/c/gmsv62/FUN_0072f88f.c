/* FUN_0072f88f - 0x0072f88f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072f88f(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_68;
  int iStack_64;
  undefined *puStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffa8;
  iStack_5c = 0xffffffff;
  puStack_60 = &DAT_0097812c;
  iStack_64 = 0x72f8b7;
  FUN_004184ca();
  iStack_5c = *(undefined4 *)(unaff_EBP + 8);
  puStack_60 = (undefined *)0x72f8c1;
  FUN_0078a024();
  iStack_5c = 0x72f8cb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_5c = unaff_EBP + -0x34;
  puStack_60 = (undefined *)0x72f8da;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_5c = 0x72f8e6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_5c = 0x72f8f2;
  FUN_00403191();
  iStack_5c = 0;
  puStack_60 = (undefined *)(unaff_EBP + -0x34);
  iStack_64 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_68,0x78e);
  iVar1 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_60 = (undefined *)0x72f93e;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_5c = 0x72f950;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_5c = 0x72f961;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_5c = 0x72f96e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_5c = 0x72f979;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_5c = 0x72f986;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_5c = 0x72f991;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_5c = 0x72f99e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_5c = 0x72f9a9;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_5c = unaff_EBP + 8;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puStack_60 = (undefined *)0x72f9cc;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_5c = 0x72f9d9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iStack_5c = 0x72f9f7;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_5c = 0x72fa1d;
  iVar1 = FUN_00450382();
  iStack_5c = 1;
  puStack_60 = (undefined *)0x75;
  iStack_64 = 0x99;
  uStack_68 = 2000;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX);
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x7d1,0x99,0x87,1,unaff_EBP + -0x24);
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x7d2,0x99,0xc3,1,unaff_EBP + -0x24);
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x7d3,0x99,0xd5,1,unaff_EBP + -0x24);
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x7d4,0x99,0xe7,1,unaff_EBP + -0x24);
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x7d5,0x99,0xf9,1,unaff_EBP + -0x24);
  uVar2 = FUN_00679d86(unaff_EBP + 8,0x7fd);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x7d6,0x7c,0x113,1,unaff_EBP + -0x24);
  FUN_0073054c();
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x78a);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_007599aa(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  if (*(int *)(extraout_ECX + 0x570) != 0) {
    iVar1 = FUN_004029b9(0x560);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
      iVar1 = iVar1 + 0x60;
      iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
      uVar2 = FUN_0072fd15(iVar4 + 0xaa,iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00732fe5(uVar2);
    *(undefined4 *)(extraout_ECX + 0x5d4) = 1;
    *(undefined4 *)(extraout_ECX + 0x570) = 1;
  }
  if (*(int *)(extraout_ECX + 0x5dc) != 0) {
    FUN_00731453();
  }
  piVar5 = (int *)FUN_006b42c2(0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *piVar5 = extraout_ECX;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


