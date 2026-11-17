/* FUN_0048b3d1 - 0x0048b3d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0048b3d1(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00455c59(&local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  *(undefined4 *)(param_1 + 0x590) = 0xffffffff;
  if (-1 < param_2) {
    iVar1 = *(int *)(iVar1 + 0x3e3 + *(int *)(param_1 + 0x58c) * 4);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4);
    }
    if (param_2 < iVar3 + -1) {
      iVar1 = FUN_00458c4f(&local_c,*(int *)(param_1 + 0x58c),param_2);
      iVar1 = *(int *)(iVar1 + 4);
      if (local_8 != 0) {
        FUN_00449913(0);
      }
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x590) = param_2;
      }
    }
  }
  if (*(int *)(param_1 + 0x590) != -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 0x38);
    iVar2 = (*(int *)(param_1 + 0x590) + -1) / 4;
    iVar3 = iVar2;
    if ((iVar1 <= iVar2) && (iVar3 = iVar1, iVar1 + 3 <= iVar2)) {
      iVar3 = iVar2 + -2;
    }
    if (iVar3 != *(int *)(&DAT_009790f8 + *(int *)(param_1 + 0x58c) * 4)) {
      *(int *)(&DAT_009790f8 + *(int *)(param_1 + 0x58c) * 4) = iVar3;
      FUN_004acfe9(iVar3);
      *(int *)(param_1 + 0x588) = iVar3 * 4 + 1;
    }
  }
  FUN_008161f1(0);
  return;
}


