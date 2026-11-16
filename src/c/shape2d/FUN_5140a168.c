/* FUN_5140a168 - 0x5140a168 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined2 * __thiscall FUN_5140a168(void *this,int *param_1,char param_2)

{
  *(undefined2 *)this = 0xd;
  *(int **)((int)this + 8) = param_1;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


