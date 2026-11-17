/* ptr_0040d86b - 0x0040d86b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040d86b(void)

{
  undefined4 *unaff_ESI;
  size_t unaff_retaddr;
  
  *unaff_ESI = &PTR_LAB_008e84a0;
  _memset(unaff_ESI,0,unaff_retaddr);
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[6] = &PTR_FUN_008e8658;
  *unaff_ESI = &PTR_FUN_008e8654;
  return;
}


