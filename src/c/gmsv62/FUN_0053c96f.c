/* FUN_0053c96f - 0x0053c96f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053c96f(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_0074d6fb();
  FUN_00455c59();
  if (local_8 != 0) {
    FUN_0045e7c2();
  }
  FUN_0053cb20();
  iVar1 = FUN_00458c4f(&local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_00449913();
  }
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  iVar1 = FUN_0052dfe5();
  if (iVar1 == 0) {
    if (param_2 == 0x201) {
      FUN_0053cfb8();
    }
    else if (param_2 == 0x203) {
      FUN_0052a4ab(0,*(undefined4 *)(param_1 + 0x568));
      *(undefined4 *)(param_1 + 0x56c) = 0xffffffff;
    }
  }
  return;
}


