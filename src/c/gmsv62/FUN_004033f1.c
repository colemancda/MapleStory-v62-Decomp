/* FUN_004033f1 - 0x004033f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_004033f1(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = -(uint)(param_2 != 0) & param_2 - 0x10U;
  iVar1 = *(int *)(uVar4 + 8);
  if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
    iVar1 = FUN_00404b90(0,*(undefined4 *)(param_1 + 0xc));
    uVar4 = -(uint)(iVar1 != 0) & iVar1 - 0x10U;
    *(uint *)((-(uint)(*(int *)(param_1 + 0xc) != 0) & *(int *)(param_1 + 0xc) - 0x10U) + 8) = uVar4
    ;
    uVar4 = -(uint)(uVar4 != 0) & uVar4 + 0x10;
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  else {
    iVar2 = FUN_00404b90(-(uint)(iVar1 != 0) & iVar1 + 0x10U,param_2);
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 - 0x10U;
    *(uint *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4) = uVar3;
    uVar3 = -(uint)(uVar3 != 0) & uVar3 + 0x10;
    uVar3 = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    *(uint *)(uVar4 + 8) = uVar3;
    uVar4 = -(uint)(uVar3 != 0) & uVar3 + 0x10;
  }
  return uVar4;
}


