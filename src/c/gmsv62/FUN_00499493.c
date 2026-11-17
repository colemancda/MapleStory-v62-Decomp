/* FUN_00499493 - 0x00499493 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00499493(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  undefined1 auStack_6c [4];
  int iStack_68;
  undefined1 *puStack_64;
  undefined *puStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  piStack_5c = &DAT_00980690;
  puStack_60 = (undefined *)0x4994b3;
  FUN_00403191();
  piStack_5c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_60 = (undefined *)0x4994c1;
  FUN_00403191();
  piStack_5c = (int *)0x0;
  puStack_60 = (undefined *)0x0;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x38);
  iStack_68 = unaff_EBP + -0x28;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_64 = (undefined1 *)0x499503;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_5c = (int *)(unaff_EBP + -0x14);
    puStack_60 = (undefined *)0x499519;
    piStack_5c = (int *)FUN_00404b30();
    if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
      puStack_60 = (undefined *)0x49952a;
      FUN_00878dfb();
    }
  }
  piStack_5c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_60 = (undefined *)0x499537;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    puStack_60 = (undefined *)0x499542;
    FUN_00878dfb();
  }
  piStack_5c = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_60 = (undefined *)0x49954f;
  piStack_5c = (int *)FUN_00402bc3();
  if ((int)piStack_5c < 0) {
    puStack_60 = (undefined *)0x49955a;
    FUN_00878dfb();
  }
  piStack_5c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_60 = (undefined *)0x499567;
  piVar3 = (int *)FUN_00402bc3();
  if ((int)piVar3 < 0) {
    puStack_60 = (undefined *)0x499572;
    piStack_5c = piVar3;
    FUN_00878dfb();
    piStack_5c = extraout_ECX_00;
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_64 = (undefined1 *)&piStack_5c;
    *(int ***)(unaff_EBP + 8) = &piStack_5c;
    puStack_60 = (undefined *)0x5a9;
    iStack_68 = 0x499593;
    FUN_00679e4e();
    puStack_60 = (undefined *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_64 = (undefined1 *)0x4995a3;
    FUN_0040263d();
    puStack_64 = (undefined1 *)0x4995aa;
    psVar4 = (short *)FUN_004048a4();
    sVar1 = *psVar4;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (sVar1 == 8) {
      puStack_60 = *(undefined **)(psVar4 + 4);
    }
    else {
      puStack_60 = &DAT_0097812c;
    }
    piStack_5c = (int *)0xffffffff;
    puStack_64 = (undefined1 *)0x4995ce;
    FUN_00454081();
    piStack_5c = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_60 = (undefined *)0x4995db;
    piVar3 = (int *)FUN_00402bc3();
    if ((int)piVar3 < 0) {
      puStack_60 = (undefined *)0x4995e6;
      piStack_5c = piVar3;
      FUN_00878dfb();
      piStack_5c = extraout_ECX_01;
    }
    puStack_64 = (undefined1 *)&piStack_5c;
    *(int ***)(unaff_EBP + 8) = &piStack_5c;
    puStack_60 = (undefined *)0x5ab;
    iStack_68 = 0x4995f9;
    FUN_00679e4e();
    puStack_60 = (undefined *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_64 = (undefined1 *)0x499609;
    FUN_0040263d();
    puStack_64 = (undefined1 *)0x499610;
    psVar4 = (short *)FUN_004048a4();
    sVar1 = *psVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (sVar1 == 8) {
      puStack_60 = *(undefined **)(psVar4 + 4);
    }
    else {
      puStack_60 = &DAT_0097812c;
    }
    piStack_5c = (int *)0xffffffff;
    puStack_64 = (undefined1 *)0x49962f;
    FUN_00454081();
    piStack_5c = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_60 = (undefined *)0x49963c;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      puStack_60 = (undefined *)0x499647;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(extraout_ECX + 0x84) = *(undefined4 *)(unaff_EBP + 0x10);
    piStack_5c = *(int **)(unaff_EBP + -0x10);
    if (piStack_5c != (int *)0x0) {
      puStack_60 = (undefined *)0x49966a;
      (**(code **)(*piStack_5c + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


