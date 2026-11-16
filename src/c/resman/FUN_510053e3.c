/* FUN_510053e3 - 0x510053e3 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined2 * __thiscall FUN_510053e3(void *this,int *param_1,char param_2)

{
  *(undefined2 *)this = 0xd;
  *(int **)((int)this + 8) = param_1;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


