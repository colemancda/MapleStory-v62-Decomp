/* ptr_006b40af - 0x006b40af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006b40af(int param_1,uint param_2)

{
  if (param_2 == 2000) {
    FUN_006b2103();
  }
  else if ((2000 < param_2) && (param_2 < 0x7d4)) {
    *(uint *)(param_1 + 0x56c) = param_2 - 0x7d1;
    FUN_008161f1(0);
  }
  return;
}


