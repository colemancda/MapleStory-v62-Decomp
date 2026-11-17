/* FUN_006f5833 - 0x006f5833 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006f5833(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  FUN_006f5500(param_2);
  uVar2 = 0x80;
  uVar1 = FUN_006f57ab(local_24,local_14);
  FUN_006f5512(uVar1,uVar2);
  return param_1;
}


