/* FUN_005d62bf - 0x005d62bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005d62bf(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *local_8;
  
  uVar3 = param_1[10];
  local_8 = param_1;
  while (uVar3 != 0) {
    iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    iVar1 = FUN_005c4e46();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005c9ce2(&local_8);
      uVar4 = -(uint)(*piVar2 != 0) & *piVar2 - 0xcU;
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      if ((uVar4 != 0) && (*(uint *)(uVar4 + 0x240) == (-(uint)(param_2 != 0) & param_2 + 4U))) {
        FUN_005cc3d9(0,0,0);
      }
    }
  }
  return;
}


