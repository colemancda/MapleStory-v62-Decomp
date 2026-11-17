/* FUN_004034e3 - 0x004034e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004034e3(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = -(uint)(param_2 != 0) & param_2 - 0x10U;
  iVar1 = *(int *)(uVar5 + 8);
  if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
    iVar1 = *(int *)(uVar5 + 4);
    if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      *(uint *)(param_1 + 0xc) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      uVar3 = -(uint)(*(int *)(uVar5 + 4) != 0) & *(int *)(uVar5 + 4) + 0x10U;
      *(undefined4 *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 8) = 0;
    }
  }
  else {
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 + 0x10U & -(uint)(iVar2 != 0)) == 0) {
      *(uint *)(param_1 + 0x10) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      uVar3 = -(uint)(*(int *)(uVar5 + 8) != 0) & *(int *)(uVar5 + 8) + 0x10U;
      *(undefined4 *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4) = 0;
    }
    else {
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(uint *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
      uVar3 = -(uint)(*(int *)(uVar5 + 8) != 0) & *(int *)(uVar5 + 8) + 0x10U;
      uVar4 = -(uint)(*(int *)(uVar5 + 4) != 0) & *(int *)(uVar5 + 4) + 0x10U;
      *(uint *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 8) = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  FUN_0040294d(uVar5);
  return;
}


