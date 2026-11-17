/* ptr_0044dc60 - 0x0044dc60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044dc60(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x14);
  puVar2 = *(undefined4 **)(unaff_EBP + 0x10);
  *puVar2 = 0x16;
  if (iVar1 != 0) {
    puVar2[1] = 0x21;
    puVar2[2] = 0x29;
  }
  return;
}


