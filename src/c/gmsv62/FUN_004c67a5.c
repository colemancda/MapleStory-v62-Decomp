/* FUN_004c67a5 - 0x004c67a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c67a5(int param_1)

{
  int iVar1;
  
  if ((param_1 / 1000) % 10 != 0) {
    iVar1 = FUN_004c6676(param_1);
    if ((((iVar1 == 0) && (param_1 != 0x200f0a)) && (param_1 != 0x2195aa)) &&
       (((param_1 != 0x231c49 && (param_1 != 0x3eba9e)) && (param_1 != 0x40413e)))) {
      return 1;
    }
  }
  return 0;
}


