/* ptr_500114f7 - 0x500114f7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


size_t __thiscall ptr_500114f7(int param_1,void *param_2,size_t param_3)

{
  memset(param_2,0,param_3);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return param_3;
}


