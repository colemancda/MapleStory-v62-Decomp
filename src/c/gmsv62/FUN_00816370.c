/* FUN_00816370 - 0x00816370 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00816370(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  uVar1 = FUN_004b3c06(param_2);
  FUN_008166da(uVar1);
  return;
}


