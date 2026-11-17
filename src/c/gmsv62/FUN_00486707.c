/* FUN_00486707 - 0x00486707 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00486707(int param_1)

{
  FUN_008164fd(*(undefined4 *)(param_1 + 0x80));
  if (DAT_00978364 != 0) {
    FUN_00817f6e(-(uint)(*(int *)(param_1 + 0x80) != 0) & *(int *)(param_1 + 0x80) + 4U);
  }
  FUN_004a2fef(0);
  return;
}


