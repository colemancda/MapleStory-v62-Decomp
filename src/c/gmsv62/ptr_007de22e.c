/* ptr_007de22e - 0x007de22e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007de22e(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 < 0) {
      return;
    }
    if (iVar1 == *(int *)(param_1 + 0x78)) {
      return;
    }
    FUN_00429303(iVar1);
    FUN_004ea461(iVar1);
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(int *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00815de9();
    }
  }
  return;
}


