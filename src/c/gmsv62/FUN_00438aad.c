/* FUN_00438aad - 0x00438aad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00438aad(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0xc) - 1;
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar2 = uVar2 - 1 >> 1;
    iVar1 = FUN_0043ad50(uVar2);
  } while (iVar1 != 0);
  return;
}


