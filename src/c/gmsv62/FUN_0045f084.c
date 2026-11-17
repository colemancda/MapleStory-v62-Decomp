/* FUN_0045f084 - 0x0045f084 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0045f084(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int local_c;
  
  pbVar7 = (byte *)(param_1 + 2);
  iVar1 = param_1 - (int)pbVar7;
  uVar6 = 0xbaadf00d;
  iVar4 = 2 - (int)pbVar7;
  local_c = 2;
  do {
    bVar2 = pbVar7[iVar1];
    bVar3 = *pbVar7;
    pbVar7[(int)&param_1 + iVar4] = bVar2 ^ bVar3;
    iVar5 = FUN_0087a034(bVar2 ^ uVar6,5);
    uVar6 = iVar5 + (uint)bVar3;
    pbVar7 = pbVar7 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (uVar6 != param_2) {
    param_1 = 5;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_008f9b80);
  }
  return CONCAT22((short)(uVar6 >> 0x10),param_1._2_2_);
}


