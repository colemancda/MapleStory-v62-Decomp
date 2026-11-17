/* FUN_0086d590 - 0x0086d590 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_0086d590(char *param_1,undefined4 param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 != '\0') {
    uVar1 = FUN_00875080(&DAT_0096e0dc,param_2);
    FUN_0086cff0(param_1 + 0x24,uVar1);
    uVar2 = FUN_00874040(0x8b1,0x616,param_2);
    return uVar2;
  }
  return in_EAX & 0xffffff00;
}


