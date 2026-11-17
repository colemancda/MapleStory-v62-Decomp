/* ptr_004e0adb - 0x004e0adb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004e0adb(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_004e20c9(0x1d6,0x5c);
  if ((*(int *)(unaff_ESI + 0xbc) != unaff_EBX) || (*(int *)(DAT_00978368 + 0x3234) == unaff_EDI)) {
    FUN_004de7d7(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


