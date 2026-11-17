/* FUN_00884fe3 - 0x00884fe3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00884fe3(uint param_1)

{
  uint uVar1;
  
  if (DAT_009728fc < 2) {
    uVar1 = (byte)PTR_DAT_009726f0[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_0088329d(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


