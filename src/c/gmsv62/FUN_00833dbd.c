/* FUN_00833dbd - 0x00833dbd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00833dbd(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0087b2f0(unaff_EBP + -0x3c,8,3,&LAB_004c256e,FUN_004c2558);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00455c59(unaff_EBP + -0x1c);
  iVar2 = *(int *)(iVar2 + 4);
  FUN_0045e4a2();
  *(int *)(unaff_EBP + -0x10) = unaff_EBP + -0x3c;
  puVar5 = (undefined4 *)(iVar2 + 0x1b);
  *(undefined4 *)(unaff_EBP + -0x14) = 3;
  do {
    iVar2 = FUN_00458d57(5,*puVar5,puVar5[1]);
    if (iVar2 == 0) {
      FUN_004c267b();
    }
    else {
      iVar2 = FUN_00458c4f(unaff_EBP + -0x24,5,iVar2);
      uVar3 = *(undefined4 *)(iVar2 + 4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0083d29b(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0046575e();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
    puVar5 = puVar5 + 2;
    piVar1 = (int *)(unaff_EBP + -0x14);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  uVar3 = FUN_00413367(extraout_ECX + 0x26a8,*(undefined4 *)(extraout_ECX + 0x26b0));
  iVar2 = extraout_ECX + 0x2e9c;
  FUN_00662ab1(*(undefined4 *)(extraout_ECX + 0x2098),unaff_EBP + -0x3c,extraout_ECX + 0x2d14,iVar2,
               uVar3,0,0);
  uVar4 = FUN_00413367(extraout_ECX + 0x26a8,*(undefined4 *)(extraout_ECX + 0x26b0));
  uVar3 = *(undefined4 *)(extraout_ECX + 0x238c);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  uVar4 = FUN_00413367(extraout_ECX + 0x2384,uVar3);
  uVar3 = *(undefined4 *)(extraout_ECX + 0x2368);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uVar3 = FUN_00413367(extraout_ECX + 0x2360,uVar3);
  FUN_00663261(*(undefined4 *)(extraout_ECX + 0x2098),extraout_ECX + 0x2a84,extraout_ECX + 0x2d14,
               iVar2,uVar3,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14));
  FUN_0066374f(*(undefined4 *)(extraout_ECX + 0x2098),extraout_ECX + 0x209c,extraout_ECX + 0x2a84,
               extraout_ECX + 0x2d14,iVar2);
  if (DAT_0097be14 != 0) {
    FUN_007305ba();
  }
  if (DAT_00978360 != 0) {
    FUN_008161f1(0);
  }
  if (DAT_009791a0 != 0) {
    FUN_008161f1(0);
  }
  if (DAT_009791a4 != 0) {
    FUN_008161f1(0);
  }
  if (DAT_0097919c != 0) {
    FUN_008161f1(0);
  }
  if (DAT_0097be0c != 0) {
    FUN_0072207c();
  }
  if (DAT_00978358 != 0) {
    FUN_007a4c33();
  }
  if (DAT_00979178 != (int *)0x0) {
    (**(code **)(*DAT_00979178 + 0x38))();
  }
  if (DAT_0097beec != 0) {
    FUN_008161f1(0);
  }
  if (DAT_0097bd20 != 0) {
    FUN_008161f1(0);
  }
  if (DAT_00979198 != 0) {
    FUN_008161f1(0);
  }
  if (DAT_00978358 != 0) {
    iVar2 = FUN_0083432d(1);
    if (iVar2 != 0) {
      FUN_008344dd();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0087a0b8(unaff_EBP + -0x3c,8,3,FUN_004c2558);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


