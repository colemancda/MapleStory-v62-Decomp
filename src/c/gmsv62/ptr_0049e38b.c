/* ptr_0049e38b - 0x0049e38b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0049e38b(int param_1,int param_2)

{
  FUN_004b3b3e(param_2);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x58) == 3) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x58) != 3) {
    *(undefined4 *)(param_1 + 0x58) = 3;
  }
  FUN_004b3daf();
  return;
}


