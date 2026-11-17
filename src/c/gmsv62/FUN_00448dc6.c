/* FUN_00448dc6 - 0x00448dc6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00448dc6(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_004031b7(0,3);
  iVar1 = *(int *)(extraout_ECX + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


