/* FUN_006545ca - 0x006545ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_006545ca(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 % 100 == 0) {
    bVar1 = param_2 / 100 == param_1 / 100;
  }
  else if ((param_2 / 10 == param_1 / 10) && (param_2 % 10 <= param_1 % 10)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


