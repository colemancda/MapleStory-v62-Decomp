/* FUN_00816395 - 0x00816395 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00816395(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x54);
  do {
    if (uVar3 == 0) {
      return 0;
    }
    iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    piVar1 = (int *)(uVar3 + 4);
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
  } while (*(int *)(*piVar1 + 0x14) != param_2);
  return *piVar1;
}


