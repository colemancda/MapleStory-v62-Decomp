/* FUN_0048ad2a - 0x0048ad2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall
FUN_0048ad2a(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_0074d6fb();
  FUN_00486745();
  iVar2 = FUN_00455c59(&local_c);
  if (local_8 != 0) {
    iVar2 = FUN_0045e7c2(0);
  }
  if (param_2 == 0x201) {
    uVar3 = FUN_0048af2b(param_4,param_5);
    iVar2 = FUN_00458c4f(&local_c,*(undefined4 *)(param_1 + 0x588),uVar3);
    iVar1 = *(int *)(iVar2 + 4);
    if (local_8 != 0) {
      iVar2 = FUN_00449913(0);
      local_8 = 0;
    }
    if ((iVar1 != 0) &&
       (iVar2 = iVar1 + 0x18, *(int *)(iVar1 + 0x18) != 0 || *(int *)(iVar1 + 0x1c) != 0)) {
      iVar2 = FUN_0048b3d1(uVar3);
    }
  }
  else if (param_2 == 0x203) {
    uVar3 = FUN_0048af2b(param_4,param_5);
    iVar2 = FUN_00458c4f(&local_c,*(undefined4 *)(param_1 + 0x588),uVar3);
    iVar1 = *(int *)(iVar2 + 4);
    if (local_8 != 0) {
      iVar2 = FUN_00449913(0);
      local_8 = 0;
    }
    if ((iVar1 != 0) && (iVar2 = 0, *(int *)(iVar1 + 0x18) != 0 || *(int *)(iVar1 + 0x1c) != 0)) {
      iVar2 = FUN_0045d268(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x588));
      *(undefined4 *)(param_1 + 0x58c) = 0xffffffff;
    }
  }
  return iVar2;
}


