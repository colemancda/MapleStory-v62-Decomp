/* ptr_00883216 - 0x00883216 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x00883228) */
/* WARNING: Removing unreachable block (ram,0x00883240) */
/* WARNING: Removing unreachable block (ram,0x0088324b) */
/* WARNING: Removing unreachable block (ram,0x00883247) */
/* WARNING: Removing unreachable block (ram,0x00883251) */
/* WARNING: Removing unreachable block (ram,0x0088326b) */

undefined4 ptr_00883216(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}


