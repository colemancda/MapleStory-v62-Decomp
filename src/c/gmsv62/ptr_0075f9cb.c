/* ptr_0075f9cb - 0x0075f9cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_0075f9cb(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0075fd4a(param_2,param_3);
  if (*(int *)(param_1 + 0x90) != iVar1) {
    *(int *)(param_1 + 0x90) = iVar1;
    FUN_008161f1(0);
  }
  return 0;
}


