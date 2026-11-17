/* ptr_00889e89 - 0x00889e89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00889e89(void)

{
  int iVar1;
  code *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  (*unaff_EBX)(8);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_ESI + 0x54) = *(undefined4 *)(unaff_EBP + -8);
  if (iVar1 == 8) {
    *(undefined4 *)(unaff_ESI + 0x58) = *(undefined4 *)(unaff_EBP + -0xc);
  }
  return 0;
}


