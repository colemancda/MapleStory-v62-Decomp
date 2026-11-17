/* FUN_007afe99 - 0x007afe99 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007afe99(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x1780) != 0 || *(int *)(param_1 + 0x1784) != 0) {
    FUN_007c1070(param_1 + 0x1778);
  }
  iVar1 = DAT_00978368;
  iVar2 = FUN_00455c59(local_20);
  local_10 = *(int *)(iVar2 + 4);
  if (local_1c != 0) {
    FUN_0045e7c2(0);
    local_1c = 0;
  }
  local_18 = 0;
  local_14 = 0;
  local_8 = &DAT_00964178;
  while (((iVar2 = *(int *)(iVar1 + 0x2ea0 + *local_8 * 8), iVar2 == 0 ||
          (local_c = FUN_0045e2eb(), local_c / 100 != 0x2b70)) || (local_c == 0x10f7c0))) {
    local_8 = local_8 + 1;
    iVar2 = local_18;
    if (0x964187 < (int)local_8) {
LAB_007aff57:
      uVar4 = *(uint *)(local_10 + 0x483);
      do {
        uVar3 = uVar4;
        if (uVar3 == 0) {
          *(undefined4 *)(param_1 + 0x1778) = 0;
          *(undefined4 *)(param_1 + 0x177c) = 0;
          *(undefined4 *)(param_1 + 0x1780) = 0;
          *(undefined4 *)(param_1 + 0x1784) = 0;
          return;
        }
        iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
        uVar4 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
      } while ((*(int *)(uVar3 + 0x11) != iVar2) || (*(int *)(uVar3 + 0x15) != local_14));
      *(int *)(param_1 + 0x1778) = iVar2;
      *(int *)(param_1 + 0x177c) = local_14;
      *(undefined4 *)(param_1 + 0x1780) = *(undefined4 *)(uVar3 + 0x19);
      *(undefined4 *)(param_1 + 0x1784) = *(undefined4 *)(uVar3 + 0x1d);
      FUN_007c0f80((int *)(param_1 + 0x1778),param_1,local_c);
      return;
    }
  }
  local_14 = *(int *)(iVar2 + 0x1c);
  iVar2 = *(int *)(iVar2 + 0x18);
  local_c = FUN_0045e2eb();
  goto LAB_007aff57;
}


