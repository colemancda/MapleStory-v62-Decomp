/* FUN_004c10d7 - 0x004c10d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004c10d7(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  if ((param_2 < 1) || (5 < param_2)) {
    iVar2 = 0;
  }
  else {
    piVar3 = (int *)(param_1 + 0x3e3 + param_2 * 4);
    iVar1 = *piVar3;
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + -4);
    }
    iVar4 = iVar4 + -1;
    if (0 < iVar4) {
      piVar3 = (int *)(*piVar3 + 0xc);
      do {
        if (*piVar3 == 0) {
          iVar2 = iVar2 + 1;
        }
        piVar3 = piVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return iVar2;
}


