/* FUN_004f1a11 - 0x004f1a11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004f1a11(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_14;
  uint local_10;
  
  puVar1 = &stack0x00000004;
  puVar2 = &stack0x00000004;
  local_10 = 0xbaadf00d;
  local_14 = 2;
  do {
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    uVar3 = FUN_004133f0();
    *(uint *)((param_1 - (int)puVar1) + (int)register0x00000010) = uVar3;
    iVar4 = FUN_0087a034(uVar3 ^ *(uint *)register0x00000010,5);
    *(int *)(((param_1 + 8) - (int)puVar2) + (int)register0x00000010) = iVar4;
    iVar5 = FUN_0087a034(uVar3 ^ local_10,5);
    local_10 = iVar5 + iVar4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}


