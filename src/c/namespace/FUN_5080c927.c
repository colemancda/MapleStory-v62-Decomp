/* FUN_5080c927 - 0x5080c927 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080c927(int *param_1)

{
  int extraout_EDX;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0x3c))();
  if (extraout_EDX != 0) {
    local_8 = (int *)0x1;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5081ae30);
  }
  return;
}


