/* FUN_0053c82a - 0x0053c82a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053c82a(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  if (param_2 == 0x3ea) {
    param_2 = 0;
  }
  else {
    if (param_2 != 0x3eb) {
      return;
    }
    param_2 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x570)) {
    local_c = param_1;
    local_8 = param_1;
    FUN_00455c59(&local_c);
    if (local_8 != 0) {
      FUN_0045e7c2(0);
    }
    iVar2 = FUN_00458c4f(&local_c,*(undefined4 *)(param_1 + 0x56c),*(undefined4 *)(param_1 + 0x570))
    ;
    uVar1 = *(undefined4 *)(iVar2 + 4);
    if (local_8 != 0) {
      FUN_00449913(0);
    }
    FUN_0052a4ab(param_2,*(undefined4 *)(param_1 + 0x56c),*(undefined4 *)(param_1 + 0x570),uVar1);
  }
  return;
}


