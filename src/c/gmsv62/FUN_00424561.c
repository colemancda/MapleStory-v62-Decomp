/* FUN_00424561 - 0x00424561 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00424561(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_1 + 0x14);
  puVar3 = (undefined2 *)(*(int *)(param_1 + 8) + iVar2);
  if ((uint)*(ushort *)(param_1 + 0xc) - iVar2 < 2) {
    local_8 = 0x26;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_008f9b80);
  }
  uVar1 = *puVar3;
  *(int *)(param_1 + 0x14) = iVar2 + 2;
  return CONCAT22((short)((uint)puVar3 >> 0x10),uVar1);
}


