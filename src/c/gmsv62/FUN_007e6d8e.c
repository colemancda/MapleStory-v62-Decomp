/* FUN_007e6d8e - 0x007e6d8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007e6d8e(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 0:
  case 1:
  case 4:
    return 0xf0;
  case 2:
  case 3:
  case 7:
  case 8:
    return 0x7fffffff;
  case 5:
  case 6:
    return 100;
  default:
    return 0;
  }
}


