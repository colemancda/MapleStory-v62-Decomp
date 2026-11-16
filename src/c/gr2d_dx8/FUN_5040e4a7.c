/* FUN_5040e4a7 - 0x5040e4a7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_5040e4a7(void *param_1,void *param_2)

{
  undefined1 local_8 [4];
  
  memcpy(local_8,param_1,4);
  memcpy(param_1,param_2,4);
  memcpy(param_2,local_8,4);
  return;
}


