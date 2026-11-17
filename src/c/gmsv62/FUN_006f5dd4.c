/* FUN_006f5dd4 - 0x006f5dd4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006f5dd4(undefined4 param_1)

{
  int iVar1;
  undefined1 local_14 [12];
  uint uStack_8;
  
  FUN_006f54f2();
  iVar1 = 0;
  do {
    *(uint *)((int)&uStack_8 + iVar1) = ~*(uint *)(&stack0x00000014 + iVar1);
    iVar1 = iVar1 + -4;
  } while (-0xd < iVar1);
  FUN_006f5512(local_14,0x80);
  return param_1;
}


