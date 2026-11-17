/* FUN_008121c1 - 0x008121c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_008121c1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  undefined1 local_20 [16];
  int local_10;
  uint local_c;
  int local_8;
  
  local_c = *(uint *)(*(int *)(param_1 + 0x94) + 0x38);
  local_8 = 0x3c;
  do {
    if ((*(int *)(param_1 + 0xa8) == 0) || (*(uint *)(*(int *)(param_1 + 0xa8) + -4) <= local_c))
    break;
    if (*(int *)(param_1 + 0xbc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(param_1 + 0xbc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0040e53d();
    iVar1 = FUN_0040e48b(iVar1 + local_8);
    (*DAT_0097b504)(local_20,7,local_8,iVar1 + 7);
    iVar1 = (*DAT_0097b57c)(local_20,param_2,param_3);
    if (iVar1 != 0) {
      *param_4 = 1;
      *param_5 = local_c;
      return 1;
    }
    local_8 = local_8 + 0x28;
    local_c = local_c + 1;
  } while (local_8 < 0x104);
  local_c = *(uint *)(*(int *)(param_1 + 0x9c) + 0x38);
  local_8 = 100;
  while( true ) {
    if (*(int *)(param_1 + 0xac) == 0) {
      return 0;
    }
    if (*(uint *)(*(int *)(param_1 + 0xac) + -4) <= local_c) break;
    if (*(int *)(param_1 + 0xbc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    local_10 = *(int *)(param_1 + 0xbc);
    if (local_10 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0040e53d();
    iVar1 = FUN_0040e48b(iVar1 + local_8);
    (*DAT_0097b504)(local_20,0xec,local_8,iVar1 + 0xec);
    iVar1 = (*DAT_0097b57c)(local_20,param_2,param_3);
    if (iVar1 != 0) {
      *param_4 = 0;
      *param_5 = local_c;
      return 1;
    }
    local_8 = local_8 + 0x28;
    local_c = local_c + 1;
    if (0x103 < local_8) {
      return 0;
    }
  }
  return 0;
}


