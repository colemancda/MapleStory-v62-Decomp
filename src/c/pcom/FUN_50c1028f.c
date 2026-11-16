/* FUN_50c1028f - 0x50c1028f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


type_info * __thiscall FUN_50c1028f(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_50c022c7(this);
  }
  return this;
}


