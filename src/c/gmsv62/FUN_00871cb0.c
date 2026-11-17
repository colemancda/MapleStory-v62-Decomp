/* FUN_00871cb0 - 0x00871cb0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00871cb0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7b96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0097fc9c == 0) {
    ExceptionList = &local_c;
    param_1 = FUN_00402605(0x18,param_1);
    local_4 = 0;
    if (param_1 == 0) {
      DAT_0097fc9c = 0;
    }
    else {
      DAT_0097fc9c = FUN_00871610(param_1);
    }
    if (DAT_0097fc9c == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00402605(0x34,param_1);
  local_4 = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_008711d0(iVar1);
  }
  local_4 = 0xffffffff;
  if (iVar1 == 0) {
    if (DAT_0097fc64 != 0) {
      uVar2 = FUN_00875080(&DAT_0096ef6c);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
    }
    ExceptionList = local_c;
    return 0;
  }
  FUN_00871900(param_2,iVar1);
  ExceptionList = local_c;
  return 1;
}


