/* FUN_00512705 - 0x00512705 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00512705(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c8;
  undefined4 local_c4 [4];
  undefined4 local_b4;
  undefined4 local_9c;
  
  _memset(&local_c8,0,0xc4);
  puVar2 = local_c4;
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_c8 = *(undefined4 *)(param_1 + 0x95);
  local_9c = *(undefined4 *)(param_1 + 0xc1);
  local_b4 = 0x100db1;
  local_c4[0] = 0xf4c42;
  FUN_0043f6a6(1,&local_c8);
  return;
}


