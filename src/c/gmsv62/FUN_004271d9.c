/* FUN_004271d9 - 0x004271d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004271d9(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int unaff_EBP;
  undefined4 *puStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  
  FUN_00879bb8();
  DAT_0097810c = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *extraout_ECX = &PTR_LAB_008e8a60;
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0x1f;
  extraout_ECX[4] = 0;
  extraout_ECX[1] = &PTR_FUN_008e8a5c;
  iStack_68 = 0x427226;
  FUN_0043590e();
  extraout_ECX[9] = 0;
  extraout_ECX[10] = 0;
  extraout_ECX[0xb] = 0;
  extraout_ECX[7] = &PTR_FUN_008e8a58;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0xc] = &PTR_FUN_008e8a54;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x11] = &PTR_FUN_008e8a50;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x16] = &PTR_FUN_008e8a4c;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x1b] = &PTR_FUN_008e8a48;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x20] = &PTR_FUN_008e8a44;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x25] = &PTR_FUN_008e8a40;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x2a] = &PTR_FUN_008e8a3c;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x2f] = &PTR_FUN_008e8a38;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x34] = &PTR_FUN_008e8a34;
  extraout_ECX[0x3b] = 0;
  extraout_ECX[0x3c] = 0;
  extraout_ECX[0x3d] = 0;
  extraout_ECX[0x39] = &PTR_FUN_008e8a30;
  extraout_ECX[0x40] = 0;
  extraout_ECX[0x41] = 0;
  extraout_ECX[0x42] = 0;
  extraout_ECX[0x3e] = &PTR_FUN_008e8a2c;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00434814();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00434872();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004348d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0043492e();
  extraout_ECX[0x57] = 0;
  extraout_ECX[0x58] = 0;
  extraout_ECX[0x59] = 0;
  extraout_ECX[0x5a] = 0;
  extraout_ECX[0x5b] = 0;
  extraout_ECX[0x5c] = 0;
  extraout_ECX[0x5d] = 0;
  extraout_ECX[0x5e] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  *extraout_ECX = &PTR_FUN_008e8a24;
  iStack_68 = 0x42738b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x427399;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x4273a5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_68 = 0x4273af;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_68 = unaff_EBP + -0x30;
  puStack_74 = &DAT_00980690;
  iStack_6c = 0x4273bd;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x4273c9;
    FUN_00878dfb();
    puStack_74 = extraout_ECX_00;
  }
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x40;
  iStack_70 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00679e4e(&puStack_74,0x3c1);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_6c = 0x427415;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_68 = 0x42742b;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_68 = 0x42743c;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_68 = 0x427449;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x427454;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_68 = 0x427461;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x42746c;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x427479;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x427484;
    FUN_00878dfb();
    iVar1 = extraout_ECX_01;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c2;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x4274a9;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x4274b0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_6c = 0x4274bb;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x4274cd;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x4274de;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x4274eb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x4274f6;
    FUN_00878dfb();
    iVar1 = extraout_ECX_02;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c3;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x42751b;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x427522;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_6c = 0x42752d;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x42753f;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x427550;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x42755d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x427568;
    FUN_00878dfb();
    iVar1 = extraout_ECX_03;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c4;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x42758d;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x427594;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_6c = 0x42759f;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x4275b1;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x4275c2;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x4275cf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x4275da;
    FUN_00878dfb();
    iVar1 = extraout_ECX_04;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c5;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x4275ff;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x427606;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_6c = 0x427611;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x427623;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x427634;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x427641;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x42764c;
    FUN_00878dfb();
    iVar1 = extraout_ECX_05;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c6;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x427671;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x427678;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_6c = 0x427683;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x427695;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x4276a6;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x4276b3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x4276be;
    FUN_00878dfb();
    iVar1 = extraout_ECX_06;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c7;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x4276e3;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x4276ea;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_6c = 0x4276f5;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x427707;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x427718;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x427725;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x427730;
    FUN_00878dfb();
    iVar1 = extraout_ECX_07;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c8;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x427755;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x42775c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_6c = 0x427767;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x427779;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x42778a;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x427797;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x4277a2;
    FUN_00878dfb();
    iVar1 = extraout_ECX_08;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x3c9;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_74 = (undefined4 *)0x4277c7;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x4277ce;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_6c = 0x4277d9;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x4277eb;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x4277fc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x427809;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x427814;
    FUN_00878dfb();
  }
  DAT_00978128 = FUN_007d1e08();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_68 = 0x42782f;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


