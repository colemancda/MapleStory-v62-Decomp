/* FUN_00866e3a - 0x00866e3a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00866e3a(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    FUN_00866e79(param_1);
  }
  else if (cVar1 == '\x02') {
    FUN_00866ec3(param_1);
  }
  else if (cVar1 == '\x03') {
    FUN_00866ed6(param_1);
  }
  return;
}


