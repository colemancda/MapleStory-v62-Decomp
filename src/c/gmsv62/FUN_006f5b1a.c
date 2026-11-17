/* FUN_006f5b1a - 0x006f5b1a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006f5b1a(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint local_14 [4];
  
  FUN_006f54f2();
  puVar1 = (uint *)(param_1 + 0xc);
  iVar2 = 4;
  do {
    *(uint *)(((int)local_14 - param_1) + (int)puVar1) =
         *(uint *)((param_3 - param_1) + (int)puVar1) & *puVar1;
    puVar1 = puVar1 + -1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_006f5512(local_14,0x80);
  return param_2;
}


