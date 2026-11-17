/* FUN_0047c629 - 0x0047c629 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0047c629(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 0x94) == 0) || (*(int *)(*(int *)(param_1 + 0x94) + -4) < 5)) {
    puVar1 = (undefined4 *)FUN_0045f1e3(param_3);
    *puVar1 = param_2;
    FUN_0047c23a();
  }
  return;
}


