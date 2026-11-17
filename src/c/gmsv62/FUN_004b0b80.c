/* FUN_004b0b80 - 0x004b0b80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004b0b80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar2 = 0x7fffffff;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      iVar1 = FUN_004b0bbe(iVar4);
      iVar1 = FUN_0087a90a(iVar1 - param_2);
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  return iVar3;
}


