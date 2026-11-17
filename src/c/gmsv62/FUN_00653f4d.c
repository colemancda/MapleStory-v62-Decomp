/* FUN_00653f4d - 0x00653f4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00653f4d(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006509a1(param_2);
  iVar1 = FUN_00413367(iVar1 + 0x160,*(undefined4 *)(iVar1 + 0x168));
  if ((iVar1 < 0) &&
     ((*(int *)(param_1 + 0x18) == 0 || (*(int *)(*(int *)(param_1 + 0x18) + -4) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


