/* FUN_0048aa38 - 0x0048aa38 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0048aa38(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((0 < param_2) && (param_2 < 6)) {
    piVar3 = (int *)(param_1 + 0x3e3 + param_2 * 4);
    iVar2 = *piVar3;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + -4);
    }
    iVar2 = 1;
    if (0 < iVar1 + -1) {
      piVar3 = (int *)(*piVar3 + 0xc);
      do {
        if (*piVar3 == 0) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar2 <= iVar1 + -1);
    }
  }
  return 0;
}


