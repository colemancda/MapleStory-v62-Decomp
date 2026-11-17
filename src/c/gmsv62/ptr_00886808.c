/* ptr_00886808 - 0x00886808 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00886808(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar3;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  
  uVar3 = unaff_ESI << (0x1fU - (char)*(undefined4 *)(unaff_EDI + 0xc) & 0x1f) |
          -(uint)(*(int *)(unaff_EBP + 8) != 0) & 0x80000000 | *(uint *)(unaff_EBP + -0xc);
  if (*(int *)(unaff_EDI + 0x10) == 0x40) {
    puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
    uVar2 = *(undefined4 *)(unaff_EBP + -8);
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  else if (*(int *)(unaff_EDI + 0x10) == 0x20) {
    **(uint **)(unaff_EBP + 0xc) = uVar3;
  }
  return unaff_retaddr;
}


