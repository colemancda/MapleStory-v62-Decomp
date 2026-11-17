/* FUN_0082ffca - 0x0082ffca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0082ffca(int param_1,int param_2)

{
  if (param_2 != 0) {
    _memset((void *)(param_1 + 0x1c),0,0x2000);
    FUN_0087b200((void *)(param_1 + 0x1c),param_2);
    *(undefined4 *)(param_1 + 0x201c) = 1;
    *(undefined4 *)(param_1 + 0x2020) = 1;
  }
  return;
}


