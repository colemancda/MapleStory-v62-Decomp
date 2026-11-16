/* FUN_1000c270 - 0x1000c270 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall FUN_1000c270(int *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000c820;
  local_10 = ExceptionList;
  uVar1 = param_1[2];
  local_8 = 0;
  if ((uVar1 & 0x14) == 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        ExceptionList = &local_10;
        param_1[2] = uVar1 | 8;
        (**(code **)(*(int *)param_1[1] + 0x10))(1);
        param_1[2] = param_1[2] & 0xfffffffd;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      ExceptionList = &local_10;
      (**(code **)(*param_1 + 0x10))(1);
      param_1[2] = param_1[2] & 0xfffffffc;
    }
  }
  ExceptionList = local_10;
  return;
}


