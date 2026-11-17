/* FUN_0076a1c6 - 0x0076a1c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0076a1c6(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < param_2) {
    piVar1 = *(int **)(param_1 + 0x2c74);
    FUN_0085cd50();
    iVar2 = 0;
    if (*piVar1 != 0) {
      iVar2 = *(int *)(*piVar1 + -4);
    }
    if ((param_2 < iVar2) && (*(int *)(*(int *)(*(int *)(param_1 + 0x2c74) + 4) + param_2 * 4) != 0)
       ) {
      return 1;
    }
  }
  return 0;
}


