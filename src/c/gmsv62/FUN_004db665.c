/* FUN_004db665 - 0x004db665 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004db665(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack00000004;
  int local_8;
  
  uVar1 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x738) = uVar1;
  iStack00000004 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x188)) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + *(int *)(param_1 + 0x18c)) != 0) {
        if (local_8 != iStack00000004) {
          FUN_004db745(iVar2 + *(int *)(param_1 + 0x18c));
        }
        iStack00000004 = iStack00000004 + 1;
      }
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x14;
    } while (local_8 < *(int *)(param_1 + 0x188));
  }
  iVar2 = *(int *)(param_1 + 0x188) + -1;
  if (iStack00000004 <= iVar2) {
    iVar3 = iVar2 * 0x14;
    iStack00000004 = (iVar2 - iStack00000004) + 1;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x18c) + iVar3) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x18c) + 4 + iVar3) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x18c) + 8 + iVar3) = 0;
      iVar2 = *(int *)(param_1 + 0x18c);
      if (*(int *)(iVar2 + 0x10 + iVar3) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(iVar2 + iVar3 + 0x10) = 0;
      }
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
      iVar3 = iVar3 + -0x14;
      iStack00000004 = iStack00000004 + -1;
    } while (iStack00000004 != 0);
  }
  FUN_0060f8d6();
  FUN_008161f1(0);
  return;
}


