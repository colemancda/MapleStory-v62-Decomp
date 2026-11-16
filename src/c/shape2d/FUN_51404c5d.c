/* FUN_51404c5d - 0x51404c5d in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __thiscall FUN_51404c5d(void *this,int *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  if (*param_1 != 0) {
    iVar1 = FUN_514054a8(this,param_1);
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_5140ac47(iVar1);
    }
  }
  return this;
}


