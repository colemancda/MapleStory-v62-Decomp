/* FUN_005e497b - 0x005e497b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e497b(char param_1,byte param_2,byte param_3,byte param_4)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_005e50d9(0xffffffff);
  *pbVar1 = ((param_1 << 1 | param_2) << 1 | param_3) << 1 | param_4;
  return;
}


