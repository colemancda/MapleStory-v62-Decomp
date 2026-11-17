/* FUN_007ee0f6 - 0x007ee0f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007ee0f6(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  for (uVar3 = 0; (iVar1 = *(int *)(param_1 + 0x67c), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)))
      ; uVar3 = uVar3 + 1) {
    if (*(int *)(iVar4 + iVar1) == 4) {
      puVar2 = (undefined4 *)FUN_007eeb02(0xffffffff);
      *puVar2 = (int *)(iVar4 + iVar1);
    }
    iVar4 = iVar4 + 0x3c;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_007ee44b(0,0);
  return;
}


