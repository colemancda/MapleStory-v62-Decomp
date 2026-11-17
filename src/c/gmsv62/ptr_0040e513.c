/* ptr_0040e513 - 0x0040e513 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0040e513(undefined4 *param_1)

{
  int *piVar1;
  int unaff_EBP;
  
  *(undefined4 **)(unaff_EBP + -0x10) = param_1;
  piVar1 = (int *)param_1[3];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *param_1 = &PTR_LAB_008e84a0;
  return;
}


