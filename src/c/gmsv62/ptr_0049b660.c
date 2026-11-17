/* ptr_0049b660 - 0x0049b660 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_0049b660(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0x202) {
    *(int *)(param_1 + 0x30) = param_5 / 0x10;
    iVar1 = *(int *)(param_1 + 0x34) + -1;
    if (iVar1 < param_5 / 0x10) {
      *(int *)(param_1 + 0x30) = iVar1;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    FUN_00817f6e(-(uint)(*(int *)(param_1 + 0x4c) != 0) & *(int *)(param_1 + 0x4c) + 4U);
    FUN_0049e5ba(*(undefined4 *)(param_1 + 0x30));
  }
  else if ((param_2 == 0x205) && (*(int *)(param_1 + 0x38) != 0)) {
    *(int *)(param_1 + 0x30) = param_5 / 0x10;
    iVar1 = *(int *)(param_1 + 0x34) + -1;
    if (iVar1 < param_5 / 0x10) {
      *(int *)(param_1 + 0x30) = iVar1;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    FUN_00817f6e(-(uint)(*(int *)(param_1 + 0x4c) != 0) & *(int *)(param_1 + 0x4c) + 4U);
    FUN_0049e5ef(*(undefined4 *)(param_1 + 0x30));
  }
  return;
}


