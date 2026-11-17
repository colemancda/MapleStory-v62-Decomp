/* FUN_004b4039 - 0x004b4039 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_004b4039(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = -(uint)(param_2 != 0) & param_2 - 0x10U;
  iVar1 = *(int *)(uVar4 + 4);
  if ((iVar1 + 0x10U & -(uint)(iVar1 != 0)) == 0) {
    iVar1 = FUN_004b48d4(*(undefined4 *)(param_1 + 0x10),0);
    uVar4 = -(uint)(iVar1 != 0) & iVar1 - 0x10U;
    *(uint *)((-(uint)(*(int *)(param_1 + 0x10) != 0) & *(int *)(param_1 + 0x10) - 0x10U) + 4) =
         uVar4;
    uVar4 = -(uint)(uVar4 != 0) & uVar4 + 0x10;
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  else {
    iVar2 = FUN_004b48d4(param_2,-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 - 0x10U;
    *(uint *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 8) = uVar3;
    uVar3 = -(uint)(uVar3 != 0) & uVar3 + 0x10;
    uVar3 = -(uint)(uVar3 != 0) & uVar3 - 0x10;
    *(uint *)(uVar4 + 4) = uVar3;
    uVar4 = -(uint)(uVar3 != 0) & uVar3 + 0x10;
  }
  return uVar4;
}


