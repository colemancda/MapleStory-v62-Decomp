/* ptr_00789f89 - 0x00789f89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00789f89(int param_1)

{
  int in_EAX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(int *)(unaff_ESI + 0x55c) = in_EAX + -0x14;
  *(undefined4 *)(unaff_ESI + 0x560) = 8;
  *(int *)(unaff_ESI + 0x564) = unaff_EDI;
  if (param_1 != unaff_EDI) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


