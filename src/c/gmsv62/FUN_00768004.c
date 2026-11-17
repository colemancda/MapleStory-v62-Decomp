/* FUN_00768004 - 0x00768004 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00768004(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00402b41(*(int *)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    FUN_00402b41(param_1);
  }
  return param_1;
}


