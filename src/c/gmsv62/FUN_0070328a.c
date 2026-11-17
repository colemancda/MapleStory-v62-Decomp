/* FUN_0070328a - 0x0070328a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0070328a(int param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x578);
    if (iVar1 == 0) {
      return;
    }
    if (*(uint *)(iVar1 + -4) <= uVar2) break;
    if (*(uint *)(iVar1 + uVar2 * 4) == (uint)param_2) {
      FUN_00703324(uVar2);
      return;
    }
    uVar2 = uVar2 + 1;
  }
  return;
}


