/* ptr_0041dd3b - 0x0041dd3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0041dd3b(undefined4 *param_1)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 **)(unaff_EBP + -0x10) = param_1;
  iVar1 = param_1[5];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_004130e3(0);
    param_1[5] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3)) = &PTR_LAB_008e88f4;
  *param_1 = &PTR_LAB_008e84a0;
  return;
}


