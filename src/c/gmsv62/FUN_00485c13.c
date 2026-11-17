/* FUN_00485c13 - 0x00485c13 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00485c13(int param_1)

{
  if (*(int *)(param_1 + 0x2098) != 0) {
    return *(int *)(param_1 + 0x2098) + 4;
  }
  return 0;
}


