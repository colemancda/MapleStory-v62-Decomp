/* ptr_0043b7e8 - 0x0043b7e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall ptr_0043b7e8(undefined4 *param_1)

{
  int unaff_EBP;
  
  *(undefined4 **)(unaff_EBP + -0x10) = param_1;
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  param_1[3] = &PTR_LAB_008e8bfc;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0043bc73();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *param_1 = &PTR_FUN_008e8bf8;
  param_1[3] = &LAB_008e8bf4;
  return param_1;
}


