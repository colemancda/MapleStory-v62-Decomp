/* ptr_005648cf - 0x005648cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_005648cf(int param_1,int param_2)

{
  if (param_2 == 0x201) {
    if (*(int *)(param_1 + 0x138) == 1) {
      FUN_00569933();
    }
    else if ((*(int *)(param_1 + 0x138) == 2) && (DAT_00978364 != 0)) {
      FUN_00817f6e(*(undefined4 *)(param_1 + 0x154));
    }
  }
  return;
}


