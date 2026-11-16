/* FUN_5080dba9 - 0x5080dba9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint __cdecl FUN_5080dba9(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((-1 < (int)uVar1) && (0 < (int)uVar1)) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}


