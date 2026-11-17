/* ptr_0087aa27 - 0x0087aa27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0087aa27(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)**(undefined4 **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  FUN_0087fdd3(uVar1,*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


