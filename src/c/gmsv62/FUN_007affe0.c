/* FUN_007affe0 - 0x007affe0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007affe0(int param_1)

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
  
  if (*(int *)(param_1 + 0x17e8) != 0 || *(int *)(param_1 + 0x17ec) != 0) {
    FUN_007c11eb(param_1 + 0x17e0);
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
          (local_c = FUN_0045e2eb(), local_c / 100 != 0x2b78)) || (2 < local_c % 10))) {
    local_8 = local_8 + 1;
    iVar2 = local_18;
    if (0x964187 < (int)local_8) {
LAB_007b00a3:
      uVar4 = *(uint *)(local_10 + 0x497);
      do {
        uVar3 = uVar4;
        if (uVar3 == 0) {
          *(undefined4 *)(param_1 + 0x17e0) = 0;
          *(undefined4 *)(param_1 + 0x17e4) = 0;
          *(undefined4 *)(param_1 + 0x17e8) = 0;
          *(undefined4 *)(param_1 + 0x17ec) = 0;
          return;
        }
        iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
        uVar4 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
      } while ((*(int *)(uVar3 + 0x11) != iVar2) || (*(int *)(uVar3 + 0x15) != local_14));
      *(int *)(param_1 + 0x17e0) = iVar2;
      *(int *)(param_1 + 0x17e4) = local_14;
      *(undefined4 *)(param_1 + 0x17e8) = *(undefined4 *)(uVar3 + 0x19);
      *(undefined4 *)(param_1 + 0x17ec) = *(undefined4 *)(uVar3 + 0x1d);
      FUN_007c10fb((int *)(param_1 + 0x17e0),param_1,local_c);
      return;
    }
  }
  local_14 = *(int *)(iVar2 + 0x1c);
  iVar2 = *(int *)(iVar2 + 0x18);
  local_c = FUN_0045e2eb();
  goto LAB_007b00a3;
}


