/* FUN_00766673 - 0x00766673 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00766673(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_c;
  
  iVar1 = DAT_00978358;
  if (*(int *)(DAT_00978358 + 0xd78) == *(int *)(param_1 + 0x61c)) {
    local_c = 3;
    do {
      FUN_0051548c(0);
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)(iVar1 + 0x1744) + 4 + iVar7 * 8) == 0) break;
      iVar4 = FUN_0061411c();
      uVar5 = FUN_0045e2eb();
      iVar6 = FUN_0061aa2e(uVar5);
      if (iVar6 == 0) break;
      *(int *)(param_1 + 0x640 + iVar7 * 4) = iVar6;
      FUN_00414edd(iVar4 + 0x28,0xffffffff);
      uVar2 = FUN_0045f03e(iVar4 + 0x35,*(undefined4 *)(iVar4 + 0x37));
      *(undefined1 *)(iVar7 + 0x658 + param_1) = uVar2;
      uVar3 = FUN_0045f084(iVar4 + 0x3b,*(undefined4 *)(iVar4 + 0x3f));
      *(undefined2 *)(param_1 + 0x65c + iVar7 * 2) = uVar3;
      uVar2 = FUN_0045f03e(iVar4 + 0x43,*(undefined4 *)(iVar4 + 0x45));
      *(undefined1 *)(iVar7 + 0x662 + param_1) = uVar2;
      if (iVar7 == 0) {
        uVar5 = *(undefined4 *)(iVar1 + 0xcd);
      }
      else if (iVar7 == 1) {
        uVar5 = *(undefined4 *)(iVar1 + 0x10d);
      }
      else if (iVar7 == 2) {
        uVar5 = *(undefined4 *)(iVar1 + 0x12d);
      }
      else {
        uVar5 = 0;
      }
      *(undefined4 *)(param_1 + 0x668 + iVar7 * 4) = uVar5;
      FUN_00766048(iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    FUN_008161f1(0);
  }
  return;
}


