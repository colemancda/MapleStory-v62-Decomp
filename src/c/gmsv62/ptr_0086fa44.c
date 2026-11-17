/* ptr_0086fa44 - 0x0086fa44 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0086fa44(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)**(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0xe8) = *puVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = puVar1[3];
  return;
}


