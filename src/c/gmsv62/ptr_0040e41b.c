/* ptr_0040e41b - 0x0040e41b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040e41b(size_t param_1)

{
  undefined4 *unaff_ESI;
  int unaff_retaddr;
  
  *unaff_ESI = &PTR_LAB_008e84a0;
  _memset(unaff_ESI,unaff_retaddr,param_1);
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[7] = &PTR_FUN_008e8668;
  *unaff_ESI = &PTR_FUN_008e8664;
  return;
}


