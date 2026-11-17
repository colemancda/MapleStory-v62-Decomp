/* ptr_006e2443 - 0x006e2443 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006e2443(int *param_1,uint param_2)

{
  if ((1999 < param_2) && (param_2 < 0x7d2)) {
    param_1[0x21] = param_2 - 2000;
    (**(code **)(*param_1 + 0x34))(1);
  }
  return;
}


