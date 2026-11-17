/* ptr_00878dc8 - 0x00878dc8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00878dc8(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedExchange(&DAT_00980678,3);
  if (LVar1 == 2) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00980660);
  }
  return;
}


