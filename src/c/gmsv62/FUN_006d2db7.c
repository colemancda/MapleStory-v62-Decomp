/* FUN_006d2db7 - 0x006d2db7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006d2db7(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 100)) {
    *(int *)(param_1 + 100) = param_2;
    FUN_006d43be();
    FUN_006d4737();
    FUN_008161f1(0);
  }
  return;
}


