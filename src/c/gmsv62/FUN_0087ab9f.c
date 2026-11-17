/* FUN_0087ab9f - 0x0087ab9f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087ab9f(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3f00;
  puStack_10 = &LAB_0087b11c;
  local_14 = ExceptionList;
  if (DAT_0098224c == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_00982244) {
      ExceptionList = &local_14;
      FUN_0087d9ec(9);
      local_8 = 0;
      iVar1 = FUN_00880633(param_1);
      local_8 = 0xffffffff;
      FUN_0087ac06();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0098224c == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_00972454) {
        ExceptionList = &local_14;
        FUN_0087d9ec(9);
        local_8 = 1;
        iVar1 = FUN_008814f8(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_0087ac65();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_0087ac7e;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_0087ac7e:
  HeapAlloc(DAT_00982248,0,dwBytes);
  ExceptionList = local_14;
  return;
}


