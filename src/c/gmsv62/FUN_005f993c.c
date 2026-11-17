/* FUN_005f993c - 0x005f993c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005f993c(int param_1)

{
  if (*(int *)(param_1 + 0xc0) == 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x194) + 4) + 0x1c))(0);
  }
  *(undefined4 *)(param_1 + 0xaa8) = 0;
  FUN_005fcb28();
  return;
}


