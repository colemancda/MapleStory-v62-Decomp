/* ptr_007dfa92 - 0x007dfa92 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007dfa92(int *param_1,uint param_2)

{
  if ((1999 < param_2) && (param_2 < 0x7d7)) {
    param_1[0x2c] = param_2 - 2000;
    (**(code **)(*param_1 + 0x34))(1);
  }
  return;
}


