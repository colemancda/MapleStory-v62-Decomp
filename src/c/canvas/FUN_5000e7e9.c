/* FUN_5000e7e9 - 0x5000e7e9 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __thiscall FUN_5000e7e9(void *this,int *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  if (*param_1 != 0) {
    iVar1 = FUN_5000e967(this,param_1);
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_50012c97(iVar1);
    }
  }
  return this;
}


