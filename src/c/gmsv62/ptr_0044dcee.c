/* ptr_0044dcee - 0x0044dcee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044dcee(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x14);
  puVar2 = *(undefined4 **)(unaff_EBP + 0x10);
  *puVar2 = 0x1c;
  if (iVar1 != 0) {
    puVar2[1] = 0x25;
    puVar2[2] = 0x2d;
  }
  return;
}


