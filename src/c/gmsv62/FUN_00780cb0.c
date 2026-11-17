/* FUN_00780cb0 - 0x00780cb0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00780cb0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar5;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined *puStack_54;
  wchar_t *pwStack_50;
  int local_4c;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x10) = &local_4c;
  pwStack_50 = (wchar_t *)0xffffffff;
  puStack_54 = &DAT_0097812c;
  local_4c = 0;
  FUN_004184ca();
  pwStack_50 = *(wchar_t **)(unaff_EBP + 8);
  puStack_54 = (undefined *)0x780ce2;
  FUN_0080b9c7();
  local_4c = 0;
  pwStack_50 = (wchar_t *)0x0;
  *(undefined ***)(unaff_EBP + 8) = &puStack_54;
  FUN_004033a1();
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  local_4c = -1;
  pwStack_50 = u_UI_UIWindow_img_UserList_Guild_G_0096bd50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puStack_54 = (undefined *)0x780d19;
  FUN_004184ca();
  local_4c = 0x578;
  pwStack_50 = (wchar_t *)0x780d2a;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    local_4c = 0;
  }
  else {
    local_4c = 0x780d3c;
    local_4c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pwStack_50 = (wchar_t *)0x780d50;
  iVar2 = FUN_00450382();
  local_4c = unaff_EBP + -0x28;
  pwStack_50 = (wchar_t *)0x1;
  puStack_54 = (undefined *)0x16d;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  FUN_004184ca();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382();
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  FUN_004184ca();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382();
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  FUN_004184ca();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382();
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_b0 = 0xff;
  uStack_b4 = 10;
  puStack_bc = (undefined1 *)&uStack_b8;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_b8;
  uStack_c0 = 0x780e8d;
  FUN_004489f5();
  puStack_bc = (undefined1 *)0xa1;
  uStack_c0 = 0x80;
  iStack_c4 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar3 = FUN_004489f5();
  *(int **)(unaff_EBP + -0x18) = &iStack_c4;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0048bccf(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piVar4 = (int *)FUN_0042e3f0(unaff_EBP + 8,u_UI_UIWindow_img_UserList_Guild_G_0096bbb8,0);
  piVar4 = (int *)*piVar4;
  piVar1 = *(int **)(extraout_ECX + 0x634);
  piVar5 = (int *)(extraout_ECX + 0x634);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar1 != piVar4) {
    *piVar5 = (int)piVar4;
    FUN_00424ed4();
    if (piVar1 != (int *)0x0) {
      iStack_b0 = 0x780ef6;
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_b0 = 0x780f07;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_b0 = 0x780f18;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_b0 = 0x780f24;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_b0 = unaff_EBP + -0x48;
  uStack_b4 = 0x780f33;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_b0 = 0x780f3f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_b0 = 0x780f49;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_b0 = unaff_EBP + -0x38;
  uStack_b4 = 0x780f53;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_b0 = 0x780f5f;
    FUN_00878dfb();
  }
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    iStack_b0 = 0x780f72;
    FUN_00878dfb();
  }
  piVar5 = (int *)*piVar5;
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_b0 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_c4 = *(int *)(unaff_EBP + -0x34);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_bc = *(undefined1 **)(unaff_EBP + -0x2c);
  iVar2 = (**(code **)(*piVar5 + 0x110))(piVar5,0x20,*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar5,&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


