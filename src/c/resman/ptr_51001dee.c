/* ptr_51001dee - 0x51001dee in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_51001dee(void)

{
  FUN_51001e19();
  FUN_51001e79();
  FUN_51001eb8();
  if ((DAT_51009880 & 1) == 0) {
    DAT_51009880 = DAT_51009880 | 1;
    _DAT_51009888 = 0;
  }
  FUN_51001ef7();
  return;
}


