/* ptr_00453300 - 0x00453300 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00453300(void)

{
  int unaff_EBP;
  
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045205d();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  **(undefined4 **)(unaff_EBP + 0xc) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x80004001;
}


