/* FUN_514085b3 - 0x514085b3 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __thiscall FUN_514085b3(void *this,int *param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    FUN_5140ac47(0x80004003);
  }
  piVar1 = FUN_51405cd9(*(int **)((int)this + 8));
  *param_1 = *param_1 +
             (((int)piVar1 - *(int *)((int)this + 0xc)) * *(int *)((int)this + 0x1c)) /
             *(int *)((int)this + 0x14);
  if (*(int *)((int)this + 8) == 0) {
    FUN_5140ac47(0x80004003);
  }
  piVar1 = FUN_51405d00(*(int **)((int)this + 8));
  param_1[1] = param_1[1] +
               (((int)piVar1 - *(int *)((int)this + 0x10)) * *(int *)((int)this + 0x20)) /
               *(int *)((int)this + 0x18);
  return 0;
}


