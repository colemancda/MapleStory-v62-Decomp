/* FUN_0087aa78 - 0x0087aa78 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087aa78(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3ee8;
  puStack_10 = &LAB_0087b11c;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_0098224c == 3) {
    ExceptionList = &local_14;
    FUN_0087d9ec(9);
    local_8 = 0;
    local_20 = FUN_008802df(param_1);
    if (local_20 != 0) {
      FUN_0088030a(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_0087aae2();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0098224c != 2) goto LAB_0087ab44;
    ExceptionList = &local_14;
    FUN_0087d9ec(9);
    local_8 = 1;
    local_28 = FUN_0088145c(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_008814b3(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_0087ab3a();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_0087ab44:
  HeapFree(DAT_00982248,0,param_1);
  ExceptionList = local_14;
  return;
}


