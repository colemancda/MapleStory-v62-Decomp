/* FUN_0045f03e - 0x0045f03e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0045f03e(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  param_1 = (byte *)(uint)bVar2;
  iVar3 = FUN_0087a034(bVar1 ^ 0xbaadf00d,5);
  if (iVar3 + (int)param_1 != param_2) {
    param_1 = (byte *)0x5;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_008f9b80);
  }
  return CONCAT31((int3)((uint)(iVar3 + (int)param_1) >> 8),bVar1 ^ bVar2);
}


