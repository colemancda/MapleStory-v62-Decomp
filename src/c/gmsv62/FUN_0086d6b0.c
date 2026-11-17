/* FUN_0086d6b0 - 0x0086d6b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_0086d6b0(char *param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 != '\0') {
    uVar1 = FUN_00874040(0x8b1,0x619,param_2);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


