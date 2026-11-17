/* FUN_0084b9c7 - 0x0084b9c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084b9c7(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_004029b9(0x2c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0062475c(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0084eb13(uVar2);
  FUN_006253a9(*(undefined4 *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0084eefb(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


