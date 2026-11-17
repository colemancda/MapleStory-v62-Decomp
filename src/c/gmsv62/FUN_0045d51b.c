/* FUN_0045d51b - 0x0045d51b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0045d51b(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (((iVar1 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + -4) != 0)) {
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4);
    }
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      piVar2 = (int *)(iVar1 + iVar3 * 8);
      do {
        if (*piVar2 == param_2) {
          if (param_3 == 0x95) {
            *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 2;
            return 1;
          }
          if (param_3 != 0x96) {
            return 0;
          }
          *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 1;
          return 1;
        }
        iVar3 = iVar3 + -1;
        piVar2 = piVar2 + -2;
      } while (-1 < iVar3);
    }
  }
  return 0;
}


