/* ptr_0058e1b9 - 0x0058e1b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0058e1b9(uint param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0058e780(0xffffffff);
  }
  else {
    FUN_0058e780(*(undefined4 *)(param_1 + 0x7c));
    *(uint *)(*(int *)(param_1 + 0x74) + 0x158) = -(uint)(param_1 != 4) & param_1;
  }
  FUN_00816091(param_2);
  return;
}


