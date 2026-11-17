/* FUN_005a768c - 0x005a768c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a768c(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  
  FUN_00879bb8();
  piStack_3c = (int *)0x0;
  iStack_40 = 0;
  *(int **)(unaff_EBP + -0x18) = &iStack_44;
  FUN_00679e4e(&iStack_44,0x3b4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = unaff_EBP + -0x28;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_44 = 0x5a76df;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_3c = (int *)(unaff_EBP + -0x14);
    iStack_40 = 0x5a76f5;
    piStack_3c = (int *)FUN_00404b30();
    if (((int)piStack_3c < 0) && (piStack_3c != (int *)0x80004002)) {
      iStack_40 = 0x5a7706;
      FUN_00878dfb();
    }
  }
  piStack_3c = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_40 = 0x5a7713;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_40 = 0x5a771e;
    piStack_3c = (int *)iVar2;
    FUN_00878dfb();
    piStack_3c = (int *)extraout_ECX_00;
  }
  iVar1 = DAT_00978138;
  iVar2 = *(int *)(DAT_00978138 + 0x24);
  *(int **)(unaff_EBP + -0x18) = &iStack_40;
  iStack_44 = 0x5fd;
  iStack_40 = (int)piStack_3c;
  piStack_3c = (int *)(iVar2 + -0x14);
  FUN_00679e4e(&iStack_40);
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_40 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_44 = 0x5a775f;
  iVar2 = FUN_00412550();
  *(int *)(extraout_ECX + 0xd0) = iVar2 + 400;
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_3c = (int *)FUN_00402bc3();
  if ((int)piStack_3c < 0) {
    iStack_40 = 0x5a7784;
    FUN_00878dfb();
  }
  piStack_3c = (int *)(*(int *)(iVar1 + 0x28) + -0x3c);
  *(int **)(unaff_EBP + -0x18) = &iStack_40;
  iStack_44 = 0x5ff;
  FUN_00679e4e(&iStack_40);
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_40 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_44 = 0x5a77bf;
  iVar2 = FUN_00412550();
  *(int *)(extraout_ECX + 0xd4) = iVar2 + 300;
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_3c = (int *)FUN_00402bc3();
  if ((int)piStack_3c < 0) {
    iStack_40 = 0x5a77e4;
    FUN_00878dfb();
  }
  piStack_3c = (int *)(*(int *)(iVar1 + 0x2c) + 0x14);
  *(int **)(unaff_EBP + -0x18) = &iStack_40;
  iStack_44 = 0x5fe;
  FUN_00679e4e(&iStack_40);
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_40 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_44 = 0x5a781f;
  iVar2 = FUN_00412550();
  *(int *)(extraout_ECX + 0xd8) = iVar2 + -400;
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_3c = (int *)FUN_00402bc3();
  if ((int)piStack_3c < 0) {
    iStack_40 = 0x5a7844;
    FUN_00878dfb();
  }
  piStack_3c = (int *)(*(int *)(iVar1 + 0x30) + 100);
  *(int **)(unaff_EBP + -0x18) = &iStack_40;
  iStack_44 = 0x600;
  FUN_00679e4e(&iStack_40);
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_40 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_44 = 0x5a787f;
  iVar2 = FUN_00412550();
  *(int *)(extraout_ECX + 0xdc) = iVar2 + -300;
  iStack_44 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_3c = (int *)FUN_00402bc3();
  if ((int)piStack_3c < 0) {
    iStack_40 = 0x5a78a4;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX + 0xd8);
  iVar1 = *(int *)(extraout_ECX + 0xd0);
  if (iVar2 == iVar1 || iVar2 - iVar1 < 0) {
    iVar2 = (iVar2 + iVar1) / 2;
    *(int *)(extraout_ECX + 0xd0) = iVar2;
    *(int *)(extraout_ECX + 0xd8) = iVar2;
  }
  iVar2 = *(int *)(extraout_ECX + 0xdc);
  iVar1 = *(int *)(extraout_ECX + 0xd4);
  if (iVar2 == iVar1 || iVar2 - iVar1 < 0) {
    iVar2 = (iVar2 + iVar1) / 2;
    *(int *)(extraout_ECX + 0xd4) = iVar2;
    *(int *)(extraout_ECX + 0xdc) = iVar2;
  }
  piStack_3c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_3c != (int *)0x0) {
    iStack_40 = 0x5a7903;
    (**(code **)(*piStack_3c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


