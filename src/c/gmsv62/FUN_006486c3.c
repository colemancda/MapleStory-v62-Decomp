/* FUN_006486c3 - 0x006486c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_006486c3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 local_20 [16];
  int local_10;
  uint local_c;
  int local_8;
  
  local_c = *(uint *)(*(int *)(param_1 + 0xa8) + 0x38);
  local_8 = 0x7f;
  do {
    piVar1 = (int *)FUN_00646ff3();
    if ((*piVar1 == 0) || (*(uint *)(*piVar1 + -4) <= local_c)) break;
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0040e53d();
    iVar2 = FUN_0040e48b(iVar2 + local_8);
    (*DAT_0097b504)(local_20,6,local_8,iVar2 + 6);
    iVar2 = (*DAT_0097b57c)(local_20,param_2,param_3);
    if (iVar2 != 0) {
      *param_4 = 1;
      *param_5 = local_c;
      return 1;
    }
    local_8 = local_8 + 0x28;
    local_c = local_c + 1;
  } while (local_8 < 0x147);
  local_c = *(uint *)(*(int *)(param_1 + 0xb0) + 0x38);
  local_8 = 0x7f;
  while( true ) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      return 0;
    }
    if (*(uint *)(*(int *)(param_1 + 0xcc) + -4) <= local_c) break;
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    local_10 = *(int *)(param_1 + 0xdc);
    if (local_10 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0040e53d();
    iVar2 = FUN_0040e48b(iVar2 + local_8);
    (*DAT_0097b504)(local_20,0xec,local_8,iVar2 + 0xec);
    iVar2 = (*DAT_0097b57c)(local_20,param_2,param_3);
    if (iVar2 != 0) {
      *param_4 = 0;
      *param_5 = local_c;
      return 1;
    }
    local_8 = local_8 + 0x28;
    local_c = local_c + 1;
    if (0x146 < local_8) {
      return 0;
    }
  }
  return 0;
}


