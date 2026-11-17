/* ptr_0046f30f - 0x0046f30f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046f30f(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  *(int **)(unaff_EBP + -4) = unaff_EBX;
  FUN_004031b7(unaff_EBX,3);
  piVar2 = *(int **)(unaff_ESI + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_00425067(unaff_EBP + -0x18,unaff_EBP + -0x38);
  piVar2 = (int *)*piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(unaff_ESI + 4);
  *(int *)(unaff_EBP + -0x10) = *piVar1;
  if (piVar2 == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_00425067(unaff_EBP + -0x14,unaff_EBP + -0x28);
  piVar2 = (int *)*piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar2 == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0040e53d();
  FUN_0040e48b(uVar3);
  (*DAT_0097b504)(*(undefined4 *)(unaff_EBP + 8));
  FUN_004125e6();
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != unaff_EBX) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb(iVar4);
  }
  if (*(int **)(unaff_ESI + 4) == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int **)(unaff_ESI + 4) == unaff_EBX) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_00404abb();
  uVar3 = FUN_00404a94(uVar3);
  (*DAT_0097b54c)(*(undefined4 *)(unaff_EBP + 8),uVar3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


