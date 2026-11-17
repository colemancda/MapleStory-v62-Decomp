/* FUN_007cf189 - 0x007cf189 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007cf189(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int unaff_EBP;
  int iVar6;
  int iStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  
  FUN_00879bb8();
  piStack_30 = (int *)0x1;
  extraout_ECX[0x149] = 0;
  iStack_34 = 0x7cf1ad;
  FUN_0043f1a0();
  iVar6 = 0;
  do {
    if (*(int *)(iVar6 + 4 + extraout_ECX[0x5d1]) == 0) break;
    piStack_30 = (int *)(unaff_EBP + -0x10);
    iStack_34 = 0x7cf1c6;
    piVar1 = (int *)FUN_00486ada();
    uVar2 = -(uint)(*piVar1 != 0) & *piVar1 - 0xcU;
    piStack_30 = *(int **)(uVar2 + 0x124);
    iStack_34 = uVar2 + 0x11c;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_38 = (int *)0x7cf1e5;
    iVar3 = FUN_0048bb31();
    piStack_30 = (int *)(uint)(iVar3 == 0);
    iStack_34 = 0x7cf1fe;
    FUN_005c9c3b();
    piStack_30 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_30 != (int *)0x0) {
      iStack_34 = 0x7cf20f;
      (**(code **)(*piStack_30 + 8))();
    }
    iVar6 = iVar6 + 8;
  } while (iVar6 < 0x18);
  piStack_30 = (int *)0x7cf21e;
  FUN_007987ed();
  piStack_30 = (int *)extraout_ECX[0x9f2];
  iStack_34 = 0x7cf22b;
  FUN_0079864f();
  piStack_30 = (int *)extraout_ECX[0x77b];
  iStack_34 = 0x7cf238;
  FUN_0079757b();
  piStack_30 = (int *)extraout_ECX[0x77c];
  iStack_34 = 0x7cf245;
  FUN_0079601e();
  piStack_30 = (int *)0x7cf24c;
  (**(code **)(*extraout_ECX + 4))();
  piStack_30 = (int *)0x7cf257;
  puVar4 = (undefined4 *)FUN_004c2648();
  piStack_30 = (int *)*puVar4;
  iStack_34 = 0x7cf261;
  FUN_00445548();
  iStack_34 = extraout_ECX_00;
  if (extraout_ECX[0x5c0] != 0) {
    piStack_30 = (int *)0x3;
    iStack_34 = 0;
    piStack_38 = (int *)0x7cf278;
    FUN_004031b7();
    piStack_30 = (int *)extraout_ECX[0x5c7];
    piStack_48 = extraout_ECX + 0x35d;
    iStack_34 = extraout_ECX[0x5c6];
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piStack_38 = (int *)extraout_ECX[0x5c5];
    piStack_3c = (int *)extraout_ECX[0x5c4];
    iStack_40 = extraout_ECX[0x5c3];
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_44;
    iStack_4c = 0x7cf2af;
    uStack_44 = extraout_ECX_01;
    FUN_00433bdf();
    piStack_48 = (int *)(unaff_EBP + -0x2c);
    iStack_4c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00424e27();
    FUN_00425067();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_48 = (int *)0x7cf2d8;
    FUN_004115d9();
    piStack_48 = (int *)0x7cf2df;
    piStack_48 = (int *)FUN_0040eed0();
    iStack_4c = 0x7cf2eb;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_4c;
    FUN_00448a17(uVar5);
    iVar6 = extraout_ECX[0x5c0];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0046cd86(iVar6);
    piStack_30 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piStack_30 != (int *)0x0) {
      iStack_34 = 0x7cf31a;
      (**(code **)(*piStack_30 + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_30 = (int *)(unaff_EBP + -0x2c);
    iStack_34 = 0x7cf327;
    iVar6 = FUN_00402bc3();
    iStack_34 = (int)piStack_30;
    if (iVar6 < 0) {
      iStack_34 = 0x7cf332;
      piStack_30 = (int *)iVar6;
      FUN_00878dfb();
      iStack_34 = extraout_ECX_02;
    }
  }
  if (extraout_ECX[0x9f8] != 0) {
    piStack_30 = (int *)0x0;
    piStack_38 = extraout_ECX + 0x34b;
    *(int **)(unaff_EBP + -0x18) = &iStack_34;
    piStack_3c = (int *)0x7cf34d;
    FUN_00433bdf();
    piStack_3c = extraout_ECX + 0x34f;
    *(int ***)(unaff_EBP + -0x10) = &piStack_38;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_40 = 0x7cf366;
    piStack_38 = extraout_ECX_03;
    FUN_0041160e();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_3c = (int *)0x7cf375;
    iStack_40 = FUN_00449713();
    *(int ***)(unaff_EBP + -0x1c) = &piStack_3c;
    uStack_44 = 0x7cf381;
    piStack_3c = extraout_ECX_04;
    FUN_00448a17();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_40 = 0x7cf38d;
    FUN_0046f440();
  }
  piStack_30 = (int *)extraout_ECX[0x35e];
  iStack_34 = 0x7cf39e;
  iVar6 = FUN_0085c725();
  if (iVar6 != 0) {
    piStack_30 = (int *)0x1;
    iStack_34 = 0x7cf3ab;
    FUN_0079cab8();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


