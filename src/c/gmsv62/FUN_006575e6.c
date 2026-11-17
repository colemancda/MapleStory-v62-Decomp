/* FUN_006575e6 - 0x006575e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006575e6(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004d7d1e();
  if (extraout_ECX[0x6a] != 0) {
    FUN_004030b1();
    extraout_ECX[0x6a] = 0;
  }
  if (*extraout_ECX != 0) {
    FUN_004030b1();
    *extraout_ECX = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


