/* ptr_00570049 - 0x00570049 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00570049(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  iVar1 = FUN_00432a57();
  if (iVar1 == 0) {
    FUN_004dec2d();
    *(undefined4 *)(unaff_EBX + 0xd4) = unaff_EDI;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


