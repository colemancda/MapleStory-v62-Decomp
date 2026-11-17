/* FUN_0045c14e - 0x0045c14e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0045c14e(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_004030b1();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_00414ebb();
  return;
}


