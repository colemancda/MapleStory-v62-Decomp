/* FUN_0087defe - 0x0087defe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4
FUN_0087defe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3f78;
  pcStack_10 = ptr_0087b11c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0087e371();
  FUN_0087e371();
  iVar1 = FUN_0087e371();
  *(undefined4 *)(iVar1 + 0x6c) = param_1;
  iVar1 = FUN_0087e371();
  *(undefined4 *)(iVar1 + 0x70) = param_3;
  local_8 = 1;
  uVar2 = FUN_008798a8(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_0087dfcb();
  ExceptionList = local_14;
  return uVar2;
}


