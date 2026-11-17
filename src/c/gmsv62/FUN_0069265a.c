/* FUN_0069265a - 0x0069265a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_0069265a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  undefined1 local_20 [16];
  int local_10;
  uint local_c;
  int local_8;
  
  local_c = *(uint *)(*(int *)(param_1 + 0xb4) + 0x38);
  local_8 = 0x57;
  do {
    if ((*(int *)(param_1 + 0xcc) == 0) || (*(uint *)(*(int *)(param_1 + 0xcc) + -4) <= local_c))
    break;
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
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
  } while (local_8 < 0x11f);
  local_c = *(uint *)(*(int *)(param_1 + 0xbc) + 0x38);
  local_8 = 0x7f;
  while( true ) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      return 0;
    }
    if (*(uint *)(*(int *)(param_1 + 0xd0) + -4) <= local_c) break;
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    local_10 = *(int *)(param_1 + 0xe0);
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
    if (0x11e < local_8) {
      return 0;
    }
  }
  return 0;
}


