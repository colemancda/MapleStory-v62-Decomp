/* FUN_508042dc - 0x508042dc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined2 * __thiscall FUN_508042dc(void *this,int *param_1,char param_2)

{
  *(undefined2 *)this = 0xd;
  *(int **)((int)this + 8) = param_1;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


