/* FUN_0043fc89 - 0x0043fc89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0043fc9b) */

void __thiscall FUN_0043fc89(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xcc4) != 0) {
    piVar1 = *(int **)(param_1 + 0xcc4);
    iVar2 = (**(code **)(*piVar1 + 0xb4))(piVar1,param_2);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
    }
  }
  return;
}


