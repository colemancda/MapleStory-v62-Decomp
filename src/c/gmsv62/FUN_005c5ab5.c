/* FUN_005c5ab5 - 0x005c5ab5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005c5ab5(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_3 == 0) &&
     (iVar1 = FUN_00413367(param_1 + 0x334,*(undefined4 *)(param_1 + 0x33c)), param_2 == iVar1)) {
    return;
  }
  uVar2 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  uVar3 = FUN_00413367(param_1 + 0x340,*(undefined4 *)(param_1 + 0x348));
  if (0x7fffffff < uVar3) {
    FUN_005c5f49();
  }
  return;
}


