/* FUN_00889753 - 0x00889753 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00889753(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_009728fc) {
    uVar1 = FUN_0088329d(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_009726f0[param_1 * 2] & 8;
}


