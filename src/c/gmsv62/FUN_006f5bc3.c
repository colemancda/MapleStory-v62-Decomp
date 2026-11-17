/* FUN_006f5bc3 - 0x006f5bc3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006f5bc3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_14 [16];
  
  uVar3 = 0x80;
  puVar2 = local_14;
  FUN_006f5500(param_2);
  uVar1 = FUN_006f57ab(puVar2,param_3);
  FUN_006f5512(uVar1,uVar3);
  return param_1;
}


