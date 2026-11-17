/* FUN_00498b1f - 0x00498b1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00498b1f(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_004031b7(*(undefined4 *)(unaff_EBP + 0xc),3);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piVar1 = (int *)FUN_004489f5(unaff_EBP + 0xc);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


