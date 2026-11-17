/* FUN_0079f60b - 0x0079f60b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0079f60b(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004030b1();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


