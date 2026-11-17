/* FUN_007a5d75 - 0x007a5d75 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007a5d75(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1ecc) != 0) {
    *(undefined4 *)(param_1 + 0x1ecc) = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x1ed0);
    uVar2 = -(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU;
    *(undefined4 *)(uVar2 + 0x160) = 1;
    *(undefined4 *)(uVar2 + 0x164) = uVar1;
    FUN_004e98b7(0xe);
  }
  return;
}


