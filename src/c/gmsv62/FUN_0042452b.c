/* FUN_0042452b - 0x0042452b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0042452b(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 local_8;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar3 = (undefined1 *)(*(int *)(param_1 + 8) + uVar2);
  if (*(ushort *)(param_1 + 0xc) == uVar2) {
    local_8 = 0x26;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_008f9b80);
  }
  uVar1 = *puVar3;
  *(uint *)(param_1 + 0x14) = uVar2 + 1;
  return CONCAT31((int3)((uint)puVar3 >> 8),uVar1);
}


