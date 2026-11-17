/* ptr_007afb39 - 0x007afb39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007afb39(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_008326be();
    if (*(int *)(param_1 + 0x2470) != 0) {
      FUN_007d4061(*(int *)(param_1 + 0x2470));
      *(undefined4 *)(param_1 + 0x2470) = 0;
    }
  }
  FUN_0078d126(param_2);
  return;
}


