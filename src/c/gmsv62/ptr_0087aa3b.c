/* ptr_0087aa3b - 0x0087aa3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void ptr_0087aa3b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  *(code **)(iVar1 + -8) = FUN_0087aa46;
  __exit(*(int *)(iVar1 + -4));
}


