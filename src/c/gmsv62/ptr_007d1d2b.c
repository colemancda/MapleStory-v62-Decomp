/* ptr_007d1d2b - 0x007d1d2b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007d1d2b(void)

{
  if (DAT_0097c1ac != (int *)0x0) {
    (**(code **)(*DAT_0097c1ac + 8))(DAT_0097c1ac);
  }
  return;
}


