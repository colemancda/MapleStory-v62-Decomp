/* FUN_005fe227 - 0x005fe227 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fe227(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_24 [20];
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -1;
  local_8 = 0;
  iVar3 = 0x19;
  do {
    local_c = 0;
    iVar2 = 0x20;
    do {
      (*DAT_0097b504)(local_24,iVar3,iVar2,iVar3 + 0xe,iVar2 + 0xe);
      iVar1 = (*DAT_0097b57c)(local_24,param_2,param_3);
      if (iVar1 != 0) {
        *param_1 = local_8;
        local_10 = local_c;
        goto LAB_005fe291;
      }
      local_c = local_c + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar2 < 0x188);
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 0x18;
  } while (iVar3 < 0x181);
  *param_1 = -1;
LAB_005fe291:
  param_1[1] = local_10;
  return;
}


