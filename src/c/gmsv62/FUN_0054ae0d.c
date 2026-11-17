/* FUN_0054ae0d - 0x0054ae0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0054ae0d(int param_1)

{
  return ((*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x94)) *
         (*(int *)(*(int *)(param_1 + 0xa8) + 0x1d50) + 100)) / 100 +
         *(int *)(*(int *)(param_1 + 0xa8) + 0x1d54);
}


