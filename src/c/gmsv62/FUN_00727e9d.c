/* FUN_00727e9d - 0x00727e9d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00727e9d(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)
             (*(int *)(param_1 + 0x74) + *(int *)(*(int *)(param_1 + 0x7c) + 0x3c) * 4);
    local_c = param_1;
    local_8 = param_1;
    iVar3 = FUN_00455c59(&local_c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
    if (local_8 != 0) {
      FUN_0045e7c2(0);
    }
    FUN_0064d66a(uVar1,uVar2,param_1 + 0xb0);
  }
  return param_1 + 0xb0;
}


