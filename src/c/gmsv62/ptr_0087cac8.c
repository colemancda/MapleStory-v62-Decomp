/* ptr_0087cac8 - 0x0087cac8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0087cac8(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)**(undefined4 **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x68) = uVar1;
  FUN_0087fdd3(uVar1,*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


