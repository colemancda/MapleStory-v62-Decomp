/* ptr_510059f2 - 0x510059f2 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


type_info * __thiscall ptr_510059f2(type_info *param_1,byte param_2)

{
  type_info::~type_info(param_1);
  if ((param_2 & 1) != 0) {
    FUN_510010de((undefined4 *)param_1);
  }
  return param_1;
}


