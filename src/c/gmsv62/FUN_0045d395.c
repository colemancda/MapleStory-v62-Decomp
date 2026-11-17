/* FUN_0045d395 - 0x0045d395 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_0045d395(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    iVar2 = 0;
    for (uVar3 = 0;
        (iVar1 = *(int *)(param_1 + 0x488), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
        uVar3 = uVar3 + 1) {
      if (*(int *)(iVar1 + 0x10 + iVar2) == param_2) {
        return true;
      }
      iVar2 = iVar2 + 0x37;
    }
  }
  iVar2 = FUN_008496ef(param_2);
  return iVar2 != 0;
}


