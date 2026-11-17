/* FUN_007c00e8 - 0x007c00e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007c00e8(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(*(int *)(param_1 + 8) + 0xd78) != param_2)) {
    FUN_007c0104(param_2);
  }
  return;
}


