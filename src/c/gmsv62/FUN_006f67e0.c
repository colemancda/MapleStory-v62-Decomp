/* FUN_006f67e0 - 0x006f67e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f67e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *piVar3;
  int unaff_EBP;
  undefined4 uStack_70;
  wchar_t *pwStack_6c;
  int aiStack_68 [2];
  int *piStack_60;
  
  FUN_00879bb8();
  piStack_60 = &DAT_00980690;
  aiStack_68[1] = 0x6f6800;
  FUN_00403191();
  piStack_60 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  aiStack_68[1] = 0x6f680e;
  FUN_00403191();
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  aiStack_68[0] = unaff_EBP + -0x3c;
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x2c);
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(u_UI_UIWindow_img_PartySearch_Part_0096b174);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  aiStack_68[0] = 0x6f6852;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_60 = (int *)(unaff_EBP + -0x14);
    aiStack_68[1] = 0x6f686d;
    piStack_60 = (int *)FUN_00404b30();
    if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
      aiStack_68[1] = 0x6f687b;
      FUN_00878dfb();
    }
  }
  piStack_60 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  aiStack_68[1] = 0x6f6888;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    aiStack_68[1] = 0x6f6893;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  aiStack_68[1] = 0x6f68a0;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    aiStack_68[1] = 0x6f68ab;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f68b8;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f68c3;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party0_0096b164;
  uStack_70 = 0x6f68d5;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f68e5;
  FUN_0040263d();
  uStack_70 = 0x6f68ec;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  aiStack_68[0] = 0x6f68f7;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f6906;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f6914;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f6921;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f692c;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX_00;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party1_0096b154;
  uStack_70 = 0x6f693e;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f694e;
  FUN_0040263d();
  uStack_70 = 0x6f6955;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  aiStack_68[0] = 0x6f6960;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f696f;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f697d;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f698a;
  iVar1 = FUN_00402bc3();
  piVar3 = piStack_60;
  if (iVar1 < 0) {
    aiStack_68[1] = 0x6f6995;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX_01;
  }
  piStack_60 = (int *)0x0;
  aiStack_68[1] = 0;
  *(int **)(unaff_EBP + -0x1c) = aiStack_68;
  pwStack_6c = u_party2_0096b144;
  uStack_70 = 0x6f69a7;
  aiStack_68[0] = (int)piVar3;
  FUN_004033a1();
  pwStack_6c = (wchar_t *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x6f69b7;
  FUN_0040263d();
  uStack_70 = 0x6f69be;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  aiStack_68[0] = 0x6f69c9;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piStack_60 = (int *)(unaff_EBP + -0x18);
  aiStack_68[1] = 0x6f69d8;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    aiStack_68[1] = 0x6f69e6;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_68[1] = 0x6f69f3;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    aiStack_68[1] = 0x6f69fe;
    FUN_00878dfb();
  }
  piStack_60 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_60 != (int *)0x0) {
    aiStack_68[1] = 0x6f6a0f;
    (**(code **)(*piStack_60 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


