/* ptr_0054d3ec - 0x0054d3ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0054d3ec(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((param_2 < 0) || ((1 < param_2 && ((param_2 < 0x22 || (0x23 < param_2)))))) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
    }
  }
  return;
}


