/* ptr_0046ffab - 0x0046ffab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046ffab(void)

{
  int in_EAX;
  uint uVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  while (uVar1 = -(uint)(in_EAX != 0) & unaff_EDI + 0x10U, uVar1 != 0) {
    in_EAX = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4);
    FUN_0040294d();
    unaff_EDI = in_EAX;
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  return;
}


