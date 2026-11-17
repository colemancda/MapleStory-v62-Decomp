/* FUN_0040287d - 0x0040287d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0040287d(int param_1,int param_2)

{
  FUN_004028df();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0040298a(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}


