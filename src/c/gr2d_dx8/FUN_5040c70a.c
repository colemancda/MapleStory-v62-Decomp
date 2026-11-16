/* FUN_5040c70a - 0x5040c70a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined2 * __thiscall FUN_5040c70a(void *this,int *param_1,char param_2)

{
  *(undefined2 *)this = 0xd;
  *(int **)((int)this + 8) = param_1;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


