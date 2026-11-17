/* FUN_008496ef - 0x008496ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_008496ef(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = param_2 / 1000000;
  iVar5 = 1;
  if ((0 < iVar2) && (iVar2 < 6)) {
    iVar1 = *(int *)(param_1 + 0x2098);
    iVar3 = *(int *)(iVar1 + 0x3e3 + iVar2 * 4);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (iVar2 == 1) {
      piVar6 = (int *)(iVar1 + 0x267);
      do {
        if ((piVar6[-0x62] != 0) && (iVar3 = FUN_0045e2eb(), iVar3 == param_2)) {
          return iVar5;
        }
        if ((*piVar6 != 0) && (iVar3 = FUN_0045e2eb(), iVar3 == param_2)) {
          return -iVar5;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 2;
      } while (iVar5 < 0x31);
    }
    iVar5 = 1;
    if (0 < iVar4 + -1) {
      do {
        if ((*(int *)(*(int *)(iVar1 + 0x3e3 + iVar2 * 4) + 4 + iVar5 * 8) != 0) &&
           (iVar3 = FUN_0045e2eb(), iVar3 == param_2)) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar4 + -1);
    }
  }
  return 0;
}


