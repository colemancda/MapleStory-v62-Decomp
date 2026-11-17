/* ptr_004e61aa - 0x004e61aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_004e61aa(int param_1)

{
  FUN_00437198();
  if (*(int *)(param_1 + 400) != 0) {
    FUN_00815de9();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0043405b(*(int *)(param_1 + 0x24),0);
  }
  FUN_0059f43d();
  return;
}


