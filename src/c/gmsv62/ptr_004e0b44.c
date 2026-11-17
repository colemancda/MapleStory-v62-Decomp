/* ptr_004e0b44 - 0x004e0b44 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004e0b44(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_008320df(6);
  FUN_0084bb40(*(short *)(unaff_ESI + 0xe0) == (short)unaff_EDI,*(short *)(unaff_ESI + 0xe0));
  if ((*(int *)(unaff_ESI + 0xbc) != unaff_EBX) || (*(int *)(DAT_00978368 + 0x3234) == unaff_EDI)) {
    FUN_004de7d7(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


