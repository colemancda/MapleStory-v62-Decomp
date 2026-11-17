/* FUN_006d5203 - 0x006d5203 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d5203(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042452b();
  if (cVar1 == '\x03') {
    FUN_006d5477(param_1);
    return;
  }
  if (DAT_0097bd60 != 0) {
    switch(cVar1) {
    case '\0':
      FUN_006d3160(param_1);
      return;
    case '\x01':
      FUN_006d33a3(param_1);
      return;
    case '\x02':
      FUN_006d348e(param_1);
      return;
    case '\x04':
      FUN_006d529a(param_1);
      return;
    case '\x05':
      FUN_006d538a(param_1);
      return;
    case '\x06':
      FUN_006d55d8(param_1);
      return;
    case '\a':
      FUN_006d5950(param_1);
      return;
    case '\b':
      FUN_006d59f3(param_1);
    }
  }
  return;
}


