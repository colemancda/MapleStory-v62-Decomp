/* FUN_006b0ec7 - 0x006b0ec7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006b0ec7(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x3328);
    if (iVar1 == 0) {
      return;
    }
    if (*(uint *)(iVar1 + -4) <= uVar2) break;
    if (*(int *)(iVar1 + uVar2 * 4) == param_2) {
      FUN_006b4332(*(int *)(param_1 + 0x3328) + uVar2 * 4);
      return;
    }
    uVar2 = uVar2 + 1;
  }
  return;
}


