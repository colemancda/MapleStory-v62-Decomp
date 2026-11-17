/* FUN_0087d869 - 0x0087d869 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


SIZE_T FUN_0087d869(LPCVOID param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined1 local_30 [4];
  byte *local_2c;
  undefined1 local_28 [4];
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3f50;
  pcStack_10 = ptr_0087b11c;
  local_14 = ExceptionList;
  if (DAT_0098224c == 3) {
    ExceptionList = &local_14;
    FUN_0087d9ec(9);
    local_8 = 0;
    local_20 = (byte *)FUN_008802df(param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)((int)param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_0087d8d3();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0098224c != 2) goto LAB_0087d927;
    ExceptionList = &local_14;
    FUN_0087d9ec(9);
    local_8 = 1;
    local_2c = (byte *)FUN_0088145c(param_1,local_30,local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_0087d94e();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_0087d927:
  SVar2 = HeapSize(DAT_00982248,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}


