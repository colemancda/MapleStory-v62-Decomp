/* ptr_5080e0bc - 0x5080e0bc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


type_info * __thiscall ptr_5080e0bc(type_info *param_1,byte param_2)

{
  type_info::~type_info(param_1);
  if ((param_2 & 1) != 0) {
    FUN_50801000((undefined4 *)param_1);
  }
  return param_1;
}


