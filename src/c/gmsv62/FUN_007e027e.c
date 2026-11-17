/* FUN_007e027e - 0x007e027e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007e027e(int param_1,int param_2,uint param_3)

{
  if ((param_3 & 0x80000000) != 0) {
    FUN_004bc822(param_2,param_3);
  }
  if (param_2 == 0xd) {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x60);
  }
  FUN_004bc822(param_2,param_3);
  return;
}


