/* FUN_5041499c - 0x5041499c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int * __thiscall FUN_5041499c(void *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    FUN_504018c9(*(undefined4 **)this);
    piVar1 = this;
    if ((param_1 & 1) != 0) {
      FUN_504018c9(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    FUN_5042a4d2(this,0xc,*piVar1,&LAB_504146d6);
    if ((param_1 & 1) != 0) {
      FUN_504018c9(piVar1);
    }
  }
  return piVar1;
}


