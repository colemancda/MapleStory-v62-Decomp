/* FUN_008712a0 - 0x008712a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


BOOL __fastcall FUN_008712a0(DWORD param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  DWORD local_4;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  local_4 = param_1;
  BVar1 = VirtualProtect(*(LPVOID *)(param_1 + 0x1c),*(SIZE_T *)(param_1 + 0xc),4,&local_4);
  if (((BVar1 != 0) && (local_4 != 2)) && (*(int *)(param_1 + 0x14) != 0)) {
    if (DAT_0097fc64 != 0) {
      uVar2 = FUN_00875080(&DAT_0096eef8,BVar1,local_4,*(int *)(param_1 + 0x14),
                           **(undefined4 **)(param_1 + 8),(*(undefined4 **)(param_1 + 8))[1]);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
    }
    BVar1 = 0;
  }
  return BVar1;
}


