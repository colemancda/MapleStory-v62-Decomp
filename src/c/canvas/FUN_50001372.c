/* FUN_50001372 - 0x50001372 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_50001372(void *param_1,void *param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (param_2 != (void *)0x0) {
    iVar1 = 4;
    do {
      memcpy(param_1,param_2,4);
      param_1 = (void *)((int)param_1 + 4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  memcpy(param_1,&DAT_500140d8,0x10);
  return;
}


