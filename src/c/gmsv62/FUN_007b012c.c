/* FUN_007b012c - 0x007b012c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007b012c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x1794) != 0) {
    FUN_007c1325(*(undefined4 *)(param_1 + 0xd78));
  }
  iVar1 = DAT_00978368;
  iVar2 = FUN_00455c59(local_10);
  local_8 = *(int *)(iVar2 + 4);
  if (local_c != 0) {
    FUN_0045e7c2(0);
    local_c = 0;
  }
  piVar4 = &DAT_00964178;
  while ((*(int *)(iVar1 + 0x2d18 + *piVar4 * 8) == 0 ||
         ((((iVar2 = FUN_0045e2eb(), iVar2 != 0x10fae3 && (iVar2 != 0x10fae6)) &&
           (iVar2 != 0x10fae7)) && (iVar2 != 0x10fae9))))) {
    piVar4 = piVar4 + 1;
    if (0x964187 < (int)piVar4) {
LAB_007b020a:
      *(undefined4 *)(param_1 + 0x1790) = 0;
      *(undefined4 *)(param_1 + 0x1794) = 0;
      return;
    }
  }
  iVar2 = *(int *)(local_8 + 0x4ab);
  if (iVar2 != 0) {
    if (*(int *)(iVar1 + 0x202c) == 0) {
      *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(iVar2 + 4);
      uVar3 = *(undefined4 *)(iVar2 + 8);
    }
    else {
      *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(iVar2 + 8);
      uVar3 = *(undefined4 *)(iVar2 + 4);
    }
    *(undefined4 *)(param_1 + 0x1794) = uVar3;
    FUN_007c1276(*(undefined4 *)(param_1 + 0x1790),param_1,*(undefined4 *)(iVar2 + 0xe));
    return;
  }
  goto LAB_007b020a;
}


