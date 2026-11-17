/* FUN_007179e0 - 0x007179e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007179e0(int param_1)

{
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00815de9();
    FUN_0071b9fa();
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00815de9();
    FUN_0071ba10();
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_00815de9();
    FUN_0071ba26();
  }
  return;
}


