/* FUN_0087b2f0 - 0x0087b2f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087b2f0(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  int local_20;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008f3f18;
  pcStack_10 = ptr_0087b11c;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)();
  }
  local_8 = 0xffffffff;
  FUN_0087b35a();
  ExceptionList = local_14;
  return;
}


