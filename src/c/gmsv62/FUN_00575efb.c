/* FUN_00575efb - 0x00575efb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00575efb(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 100) + 0x104)) {
    puVar1 = (undefined4 *)(param_1 + 0x80);
    do {
      FUN_00575f30(iVar2,*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 100) + 0x104));
  }
  return;
}


