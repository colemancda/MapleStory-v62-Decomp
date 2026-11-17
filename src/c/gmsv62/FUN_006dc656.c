/* FUN_006dc656 - 0x006dc656 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006dc656(int param_1)

{
  if (*(int *)(param_1 + 0x638) != 0) {
    *(int *)(param_1 + 0x570) = (*(int *)(param_1 + 0x570) + 2) % 3;
    FUN_006dc63c();
  }
  return;
}


