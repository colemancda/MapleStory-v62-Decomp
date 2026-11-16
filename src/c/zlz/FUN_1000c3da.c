/* FUN_1000c3da - 0x1000c3da in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void * __thiscall FUN_1000c3da(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_10002980(this);
  }
  return this;
}


