/* ptr_0045beee - 0x0045beee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0045beee(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00815de9();
    }
  }
  return;
}


