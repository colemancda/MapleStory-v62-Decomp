/* FUN_004cb762 - 0x004cb762 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char FUN_004cb762(int param_1)

{
  char cVar1;
  
  if (param_1 < 0x32) {
    cVar1 = '\0';
  }
  else if (param_1 < 100) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = (999 < param_1) + '\x02';
  }
  return cVar1;
}


