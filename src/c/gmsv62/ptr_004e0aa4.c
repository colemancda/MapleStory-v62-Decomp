/* ptr_004e0aa4 - 0x004e0aa4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004e0aa4(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_006d1f73(*(undefined4 *)(unaff_ESI + 0xc4));
  if ((*(int *)(unaff_ESI + 0xbc) != unaff_EBX) || (*(int *)(DAT_00978368 + 0x3234) == unaff_EDI)) {
    FUN_004de7d7(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


