/* FUN_006f2b17 - 0x006f2b17 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f2b17(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006ef793(param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xaf8) = iVar1;
    FUN_006f2894(0);
    FUN_006f2a7a();
  }
  return;
}


