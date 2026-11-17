/* FUN_008756d0 - 0x008756d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008756d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_00879f55(local_80,&DAT_0096eed8,param_3);
  FUN_00875740(param_1,param_2,local_80,local_40,0x40,param_4);
  local_84 = 0;
  FUN_0087c9ab(local_40,&DAT_0096eed8,&local_84);
  return local_84;
}


