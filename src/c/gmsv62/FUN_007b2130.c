/* FUN_007b2130 - 0x007b2130 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x007b215a) */

void FUN_007b2130(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  (*DAT_0097b508)(*(undefined4 *)(unaff_EBP + 8));
  if (*(int *)(extraout_ECX + 0x2494) != 0) {
    FUN_004308ad(unaff_EBP + -0x20);
    iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)(extraout_ECX + 0x2494) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x10);
    iVar2 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00404a94();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    **(undefined4 **)(unaff_EBP + 8) = uVar4;
    FUN_004125d9();
    if (*(int *)(extraout_ECX + 0x2494) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x10);
    iVar2 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00404abb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 4) = uVar4;
    FUN_004125d9();
    if (*(int *)(extraout_ECX + 0x2494) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042bc90(unaff_EBP + -0x10);
    iVar2 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00404a94();
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 8) = uVar4;
    FUN_004125d9();
    if (*(int *)(extraout_ECX + 0x2494) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042bc90(unaff_EBP + 8);
    iVar1 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00404abb();
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    FUN_004125d9();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


