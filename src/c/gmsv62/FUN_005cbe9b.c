/* FUN_005cbe9b - 0x005cbe9b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4
FUN_005cbe9b(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_24 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_2;
  iVar2 = param_1 - param_2;
  do {
    if (param_2 <= param_3) {
      bVar1 = iVar4 < param_3;
    }
    else {
      bVar1 = param_3 < iVar4;
    }
    if (!bVar1) {
      return 0;
    }
    if (param_2 <= param_3) {
      iVar5 = iVar4 + 0x14;
      iVar6 = iVar2 + -0x14;
      iVar2 = iVar4 - param_1;
      local_14 = iVar4;
      local_c = iVar5;
      if (param_3 <= iVar5) {
        local_c = param_3;
      }
    }
    else {
      iVar5 = iVar4 + -0x14;
      iVar6 = iVar2 + 0x14;
      local_14 = iVar5;
      local_c = iVar4;
      if (iVar5 <= param_3) {
        local_14 = param_3;
      }
    }
    local_10 = param_4 - iVar2 / param_5;
    local_8 = iVar2 / param_5 + 1 + param_4;
    iVar3 = (*DAT_0097b5a0)(local_24,&local_14,param_6);
    iVar4 = iVar5;
    iVar2 = iVar6;
  } while (iVar3 == 0);
  return 1;
}


