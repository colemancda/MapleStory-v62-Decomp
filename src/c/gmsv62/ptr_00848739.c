/* ptr_00848739 - 0x00848739 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00848739(void)

{
  int unaff_EBX;
  int unaff_EBP;
  
  FUN_00471102();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x14) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != unaff_EBX) {
    FUN_00434e38();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_0046575e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


