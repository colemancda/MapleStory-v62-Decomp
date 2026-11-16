/* FUN_1000b950 - 0x1000b950 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void * __thiscall FUN_1000b950(void *this,byte param_1)

{
  FUN_1000b980(this);
  if ((param_1 & 1) != 0) {
    FUN_1000bb00(DAT_10017010,this);
  }
  return this;
}


