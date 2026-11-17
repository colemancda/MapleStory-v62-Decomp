/* ptr_0044956f - 0x0044956f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044956f(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piVar1 = (int *)FUN_004489f5(unaff_EBP + -0x20);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0042a378();
  FUN_004031b7(iVar2 + *(int *)(unaff_EBP + -0x1c),3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piVar1 = (int *)FUN_004489f5(unaff_EBP + -0x14);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,800,0,*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x60),
                     *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                     *(undefined4 *)(unaff_EBP + -0x54));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963de8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


