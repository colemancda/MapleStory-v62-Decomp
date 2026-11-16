/* FUN_51002c1e - 0x51002c1e in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int __fastcall FUN_51002c1e(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  memset((void *)(param_1 + 0xc),0,0x10);
  memset((void *)(param_1 + 0x1c),0,0x10);
  return param_1;
}


