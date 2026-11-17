/* FUN_005644d8 - 0x005644d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005644d8(int param_1,undefined4 *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(param_1 + 0x1c);
    for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
  }
  if ((*(int *)(param_1 + 0x201c) == 0) || (sVar1 = _strlen((char *)(param_1 + 0x1c)), sVar1 == 0))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


