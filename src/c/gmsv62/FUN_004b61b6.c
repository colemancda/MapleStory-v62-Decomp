/* FUN_004b61b6 - 0x004b61b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b61b6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_004b5a68(param_2);
  FUN_00424561();
  uVar1 = FUN_004b8d93();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  puVar2 = (undefined4 *)FUN_0045cdbc(&param_2);
  lstrcpyA((LPSTR)(param_1 + 0x40),(LPCSTR)*puVar2);
  FUN_00414ebb();
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  iVar3 = FUN_0045e2eb();
  if ((iVar3 / 10000 == 0xcf) || (iVar3 / 10000 == 0xe9)) {
    FUN_004245d2(param_1 + 0x38,8);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


