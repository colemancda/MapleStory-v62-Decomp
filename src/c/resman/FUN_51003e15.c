/* FUN_51003e15 - 0x51003e15 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


bool __thiscall FUN_51003e15(void *this,int param_1)

{
  if (param_1 != 0) {
    FUN_5100581a(0x80004003);
  }
  return *(int *)this == 0;
}


