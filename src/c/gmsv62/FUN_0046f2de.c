/* FUN_0046f2de - 0x0046f2de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046f2de(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 4) == 0) {
    (*DAT_0097b508)(*(undefined4 *)(unaff_EBP + 8));
  }
  else {
    FUN_004031b7(0,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004031b7(0,3);
    iVar3 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_00425067(unaff_EBP + -0x18,unaff_EBP + -0x38);
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = *(int *)(extraout_ECX + 4);
    *(int *)(unaff_EBP + -0x10) = *piVar1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_00425067(unaff_EBP + -0x14,unaff_EBP + -0x28);
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar2 = FUN_0040e53d();
    uVar2 = FUN_0040e48b(uVar2);
    (*DAT_0097b504)(*(undefined4 *)(unaff_EBP + 8),0,0,uVar2);
    FUN_004125e6();
    piVar1 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    if (*(int *)(extraout_ECX + 4) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(extraout_ECX + 4) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar2 = FUN_00404abb();
    uVar2 = FUN_00404a94(uVar2);
    (*DAT_0097b54c)(*(undefined4 *)(unaff_EBP + 8),uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


