/* ptr_0047c6e8 - 0x0047c6e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0047c6e8(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_0047ca3f(*(undefined4 *)(unaff_EBP + 8));
  *(uint *)(unaff_EBP + 8) = (uint)(*(int *)(unaff_EBP + 0x10) != 0);
  (*DAT_0097b6bc)(uVar1,*(undefined4 *)(unaff_EBP + 0xc),0,4,unaff_EBP + 8,4);
  return;
}


