/* ptr_0068d008 - 0x0068d008 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0068d008(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == *(int *)(param_1 + 0xc0)) {
    *param_3 = 5;
    *param_4 = 0xe3;
  }
  else {
    *param_4 = 0x42;
  }
  param_4[1] = 0x65;
  return;
}


