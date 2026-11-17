/* ptr_00517951 - 0x00517951 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00517951(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((-1 < param_2) && (param_2 < 2)) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  if (-1 < param_3) {
    *(int *)(param_1 + 0x14) = param_3;
  }
  if (-1 < param_4) {
    *(int *)(param_1 + 0x18) = param_4;
  }
  if (-1 < param_5) {
    *(int *)(param_1 + 0x1c) = param_5;
  }
  return;
}


