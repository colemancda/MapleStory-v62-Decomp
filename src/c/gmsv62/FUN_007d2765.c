/* FUN_007d2765 - 0x007d2765 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d2765(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_00403880(**(undefined4 **)(unaff_EBP + 8),0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007d26f9(uVar1);
  _com_error::~_com_error((_com_error *)(unaff_EBP + -0x1c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


