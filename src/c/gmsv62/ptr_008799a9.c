/* ptr_008799a9 - 0x008799a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_008799a9(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -4) == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0x28);
  }
  else {
    uVar1 = *(undefined4 *)ExceptionList;
    ExceptionList = *(void **)(unaff_EBP + -0x28);
    *(undefined4 *)ExceptionList = uVar1;
  }
  return *(undefined4 *)(unaff_EBP + -0x34);
}


