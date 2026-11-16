/* FUN_5000a705 - 0x5000a705 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void * __cdecl FUN_5000a705(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x10);
    pvVar1 = param_1;
  }
  return pvVar1;
}


