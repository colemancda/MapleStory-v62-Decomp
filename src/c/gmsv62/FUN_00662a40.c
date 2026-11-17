/* FUN_00662a40 - 0x00662a40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00662a40(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_8;
  
  local_8 = param_1;
  iVar2 = FUN_00413367(param_1 + 0xfc,*(undefined4 *)(param_1 + 0x104));
  cVar1 = (**(code **)(**(int **)(param_1 + 0x958) + 4))();
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00650dae(param_2,0x4df8f1,&local_8);
    if (local_8 != 0) {
      iVar4 = FUN_006509a1(uVar3);
      iVar4 = FUN_00413367(iVar4 + 0x58,*(undefined4 *)(iVar4 + 0x60));
      if (iVar2 < iVar4) {
        iVar2 = iVar4;
      }
    }
  }
  return iVar2;
}


