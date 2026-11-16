/* FUN_5080a3d7 - 0x5080a3d7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __fastcall FUN_5080a3d7(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  memset((void *)(param_1 + 0xc),0,0x10);
  memset((void *)(param_1 + 0x1c),0,0x10);
  return param_1;
}


