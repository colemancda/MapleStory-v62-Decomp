/* ptr_004da7e1 - 0x004da7e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004da7e1(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc0) == 0) {
    if (param_2 == 0x3f2) {
      FUN_004db8be();
      return;
    }
    if (param_2 == 0x3f6) {
      FUN_004db91b();
      return;
    }
    if (param_2 == 0x3f7) {
      FUN_004db996();
      return;
    }
  }
  FUN_0060d18b(param_2);
  return;
}


