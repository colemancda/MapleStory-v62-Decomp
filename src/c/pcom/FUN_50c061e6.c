/* FUN_50c061e6 - 0x50c061e6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


_com_error * __thiscall FUN_50c061e6(void *this,byte param_1)

{
  _com_error::~_com_error(this);
  if ((param_1 & 1) != 0) {
    FUN_50c02783(&DAT_50c21310,this);
  }
  return this;
}


