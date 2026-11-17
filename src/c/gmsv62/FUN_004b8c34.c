/* FUN_004b8c34 - 0x004b8c34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b8c34(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  byte local_6 [2];
  
  uVar4 = 0;
  local_c = 0xbaadf00d;
  do {
    bVar2 = FUN_004133f0();
    bVar1 = local_6[uVar4];
    local_6[(param_2 - (int)local_6) + (uVar4 - 6) + 6] = bVar2;
    (&stack0xfffffffc)[(param_2 - (int)local_6) + (uVar4 - 6) + 6] = bVar1 ^ bVar2;
    iVar3 = FUN_0087a034(bVar2 ^ local_c,5);
    local_c = iVar3 + (uint)(bVar1 ^ bVar2);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return;
}


