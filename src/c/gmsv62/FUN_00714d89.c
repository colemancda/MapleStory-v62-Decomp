/* FUN_00714d89 - 0x00714d89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00714d89(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  uVar1 = param_2;
  param_2 = 0;
  iVar3 = 0x3f;
  local_8 = param_1;
  while( true ) {
    iVar2 = *(int *)(local_8 + 0xac);
    if (9 < iVar2) {
      iVar2 = 10;
    }
    if (iVar2 <= param_2) break;
    local_14 = iVar3 + -0x14;
    local_18 = 0x14;
    local_10 = 0xff;
    local_c = iVar3;
    iVar2 = (*DAT_0097b57c)(&local_18,uVar1,param_3);
    if (iVar2 != 0) {
      return param_2;
    }
    param_2 = param_2 + 1;
    iVar3 = iVar3 + 0x14;
  }
  return -1;
}


