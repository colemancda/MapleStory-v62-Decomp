/* FUN_006f6a1e - 0x006f6a1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f6a1e(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int *piVar3;
  int unaff_EBP;
  undefined4 uStack_70;
  wchar_t *pwStack_6c;
  int aiStack_68 [2];
  int *piStack_60;
  
  FUN_00879bb8();
  piStack_60 = &DAT_00980690;
  aiStack_68[1] = 0x6f6a3e;
  FUN_00403191();
  piStack_60 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  aiStack_68[1] = 0x6f6a4c;
  FUN_00403191();
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  aiStack_68[0] = unaff_EBP + -0x3c;
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x2c);
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(u_UI_UIWindow_img_PartySearch_Part_0096b1d8);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  aiStack_68[0] = 0x6f6a90;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_60 = (int *)(unaff_EBP + -0x14);
    aiStack_68[1] = 0x6f6aab;
    piStack_60 = (int *)FUN_00404b30();
    if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
      aiStack_68[1] = 0x6f6ab9;
      FUN_00878dfb();
    }
  }
  piStack_60 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  aiStack_68[1] = 0x6f6ac6;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    aiStack_68[1] = 0x6f6ad1;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  aiStack_68[1] = 0x6f6ade;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    aiStack_68[1] = 0x6f6ae9;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f6af6;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f6b01;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party0_0096b164;
  uStack_70 = 0x6f6b13;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f6b23;
  FUN_0040263d();
  uStack_70 = 0x6f6b2a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  aiStack_68[0] = 0x6f6b35;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f6b44;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f6b52;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f6b5f;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f6b6a;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX_00;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party1_0096b154;
  uStack_70 = 0x6f6b7c;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f6b8c;
  FUN_0040263d();
  uStack_70 = 0x6f6b93;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  aiStack_68[0] = 0x6f6b9e;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f6bad;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f6bbb;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f6bc8;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f6bd3;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX_01;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party2_0096b144;
  uStack_70 = 0x6f6be5;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f6bf5;
  FUN_0040263d();
  uStack_70 = 0x6f6bfc;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  aiStack_68[0] = 0x6f6c07;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f6c16;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f6c24;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f6c31;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f6c3c;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX_02;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party3_0096b1c8;
  uStack_70 = 0x6f6c4e;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f6c5e;
  FUN_0040263d();
  uStack_70 = 0x6f6c65;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  aiStack_68[0] = 0x6f6c70;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f6c7f;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f6c8d;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f6c9a;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f6ca5;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX_03;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party4_0096b1b8;
  uStack_70 = 0x6f6cb7;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f6cc7;
  FUN_0040263d();
  uStack_70 = 0x6f6cce;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  aiStack_68[0] = 0x6f6cd9;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f6ce8;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f6cf6;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f6d03;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    aiStack_68[1] = 0x6f6d0e;
    FUN_00878dfb();
  }
  piStack_60 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_60 != (int *)0x0) {
    aiStack_68[1] = 0x6f6d1f;
    (**(code **)(*piStack_60 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


