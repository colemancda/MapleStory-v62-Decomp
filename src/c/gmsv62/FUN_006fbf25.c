/* FUN_006fbf25 - 0x006fbf25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006fbf25(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_1 + 0x588) == 0) {
    iVar1 = FUN_0070610a(&param_2,0);
    if (iVar1 == 0) {
      puVar2 = (undefined2 *)FUN_00706092();
      *puVar2 = param_2;
    }
  }
  return;
}


