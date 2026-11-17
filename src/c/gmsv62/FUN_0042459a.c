/* FUN_0042459a - 0x0042459a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0042459a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((uint)*(ushort *)(param_1 + 0xc) - iVar1 < 4) {
    local_8 = 0x26;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_008f9b80);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + iVar1);
  *(int *)(param_1 + 0x14) = iVar1 + 4;
  return uVar2;
}


