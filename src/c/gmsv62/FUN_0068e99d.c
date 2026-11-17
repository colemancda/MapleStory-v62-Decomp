/* FUN_0068e99d - 0x0068e99d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0068e99d(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar4 = (local_8 % 3) * 0x27;
    iVar1 = (local_8 / 3) * 0x25;
    iVar3 = iVar1 + 0xa3;
    iVar1 = iVar1 + 0x83;
    (*DAT_0097b504)(local_18,iVar4 + 0xac,iVar1,iVar4 + 0xcc,iVar3);
    iVar2 = (*DAT_0097b57c)(local_18,param_1,param_2);
    if (iVar2 != 0) {
      return local_8 + 1;
    }
    (*DAT_0097b504)(local_18,iVar4 + 10,iVar1,iVar4 + 0x2a,iVar3);
    iVar3 = (*DAT_0097b57c)(local_18,param_1,param_2);
    if (iVar3 != 0) break;
    local_8 = local_8 + 1;
    if (8 < local_8) {
      return 0;
    }
  }
  return -1 - local_8;
}


