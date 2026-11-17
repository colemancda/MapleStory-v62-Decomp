/* ptr_008796e2 - 0x008796e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_008796e2(void)

{
  DAT_00982260 = _malloc(0x80);
  if (DAT_00982260 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_00982260 = 0;
  DAT_0098225c = DAT_00982260;
  return;
}


