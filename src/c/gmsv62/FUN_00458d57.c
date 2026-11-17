/* FUN_00458d57 - 0x00458d57 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00458d57(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (((0 < param_2) && (param_2 < 6)) && (param_3 != 0 || param_4 != 0)) {
    piVar4 = (int *)(param_1 + 0x3e3 + param_2 * 4);
    iVar3 = *piVar4;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + -4);
    }
    iVar3 = 1;
    if (0 < iVar2 + -1) {
      piVar4 = (int *)(*piVar4 + 0xc);
      do {
        iVar1 = *piVar4;
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == param_3)) &&
           (*(int *)(iVar1 + 0x1c) == param_4)) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar3 <= iVar2 + -1);
    }
    iVar3 = 1;
    if (param_2 == 1) {
      piVar4 = (int *)(param_1 + 0x267);
      do {
        iVar2 = *piVar4;
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == param_3)) &&
           (*(int *)(iVar2 + 0x1c) == param_4)) {
          return -100 - iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar3 < 0x31);
    }
  }
  return 0;
}


