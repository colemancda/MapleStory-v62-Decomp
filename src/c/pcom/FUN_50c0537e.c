/* FUN_50c0537e - 0x50c0537e in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


bool __thiscall FUN_50c0537e(void *this,int param_1)

{
  if (param_1 != 0) {
    FUN_50c101c4(0x80004003);
  }
  return *(int *)this == 0;
}


