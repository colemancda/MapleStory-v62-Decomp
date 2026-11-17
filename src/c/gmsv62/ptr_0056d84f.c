/* ptr_0056d84f - 0x0056d84f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0056d84f(uint param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0056d891(0xffffffff);
  }
  else {
    FUN_0056d891(*(undefined4 *)(param_1 + 0x68));
    *(uint *)(*(int *)(param_1 + 100) + 0x158) = -(uint)(param_1 != 4) & param_1;
  }
  FUN_00816091(param_2);
  return;
}


