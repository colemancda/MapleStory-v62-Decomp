/* FUN_005f0e81 - 0x005f0e81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_005f0e81(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + -8);
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1;
  }
  return uVar1 - 4 >> 1;
}


