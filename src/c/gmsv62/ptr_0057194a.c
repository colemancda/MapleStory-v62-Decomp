/* ptr_0057194a - 0x0057194a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0057194a(uint param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(*(int *)(param_1 + 0x60) + 0x158) = -(uint)(param_1 != 4) & param_1;
  }
  FUN_00816091(param_2);
  return;
}


