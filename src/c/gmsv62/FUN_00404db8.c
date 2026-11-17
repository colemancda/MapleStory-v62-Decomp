/* FUN_00404db8 - 0x00404db8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00404db8(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) != -1) {
    uVar1 = (uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 0x10)) >> 7;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}


