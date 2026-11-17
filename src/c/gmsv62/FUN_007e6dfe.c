/* FUN_007e6dfe - 0x007e6dfe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007e6dfe(int param_1)

{
  undefined4 uStack_4;
  
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
    uStack_4 = 8;
    break;
  case 2:
  case 3:
  case 7:
  case 8:
    uStack_4 = 2;
    break;
  default:
    return 0;
  }
  return uStack_4;
}


