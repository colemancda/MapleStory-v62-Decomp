/* FUN_0050c46b - 0x0050c46b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0050c46b(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar2 = *(int *)(&DAT_00964f98 + *(int *)(param_1 + 0x14) * 4);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((-1 < iVar3) - 1 & 0xfffffffe) + 1;
  }
  if (iVar2 == 0) {
    if (((iVar4 == 0) || (iVar2 = *(int *)(param_1 + 0xc) + iVar4, iVar2 < DAT_00979278)) ||
       (DAT_0097927c < iVar2)) {
LAB_0050c55c:
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x1e;
    if (*(int *)(param_1 + 0x18) < DAT_00964fb4) {
      return;
    }
    *(int *)(param_1 + 0xc) = iVar2;
    iVar3 = iVar3 + iVar4 * -3;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - DAT_00964fb4;
    local_8 = iVar4;
  }
  else {
    local_8 = 1;
    if (iVar2 < 0) {
      local_8 = -1;
      iVar2 = -iVar2;
    }
    iVar1 = *(int *)(param_1 + 0xc) + local_8;
    if ((iVar1 < DAT_00979278) || (DAT_0097927c < iVar1)) goto LAB_0050c55c;
    iVar2 = ((3 - local_8 * iVar4) * iVar2) / 3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x1e;
    if (*(int *)(param_1 + 0x18) < iVar2) {
      return;
    }
    iVar3 = iVar3 - iVar4;
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar2;
  }
  FUN_0050c19a(local_8);
  return;
}


