/* ptr_00660045 - 0x00660045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00660045(void)

{
  int *unaff_EBX;
  int unaff_EBP;
  
  if (DAT_00979734 != unaff_EBX) {
    (**(code **)(*DAT_00979734 + 0x24))(1);
  }
  (*DAT_0097b514)();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


