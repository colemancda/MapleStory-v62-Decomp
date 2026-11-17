/* ptr_00789fc8 - 0x00789fc8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00789fc8(undefined4 *param_1)

{
  int unaff_EBP;
  
  param_1[-2] = &PTR_FUN_008f17a8;
  param_1[-1] = &PTR_FUN_008f175c;
  *(undefined4 **)(unaff_EBP + -0x10) = param_1;
  *param_1 = &PTR_FUN_008f1758;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


