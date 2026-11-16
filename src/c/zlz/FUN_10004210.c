/* FUN_10004210 - 0x10004210 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void * __thiscall FUN_10004210(void *this,byte param_1)

{
  FUN_10004230(this);
  if ((param_1 & 1) != 0) {
    FUN_10003f60(&DAT_10016fd0,this);
  }
  return this;
}


