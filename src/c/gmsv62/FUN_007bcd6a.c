/* FUN_007bcd6a - 0x007bcd6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007bcd6a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [4];
  int local_8;
  
  iVar2 = FUN_007d1e08();
  iVar3 = FUN_00455c59(local_c);
  uVar1 = *(undefined4 *)(iVar3 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
  }
  if (*(int *)(param_1 + 0x1e74) == 0) {
    return;
  }
  if (iVar2 - *(int *)(param_1 + 0x1e7c) < 0) {
    return;
  }
  iVar2 = FUN_0044dddc(*(undefined4 *)(param_1 + 0x4a4));
  if (iVar2 == *(int *)(param_1 + 0x1e78)) {
    local_8 = 0;
    iVar2 = FUN_00650dae(uVar1,*(undefined4 *)(param_1 + 0x1e74),&local_8);
    if ((0 < iVar2) && (iVar3 = *(int *)(param_1 + 0x1e78), 0x1d < iVar3)) {
      if (0x21 < iVar3) {
        if (iVar3 < 0x28) goto LAB_007bce2e;
        if (0x2c < iVar3) {
          if ((iVar3 < 0x30) || (iVar3 == 0x31)) {
            FUN_007a93ea(local_8,iVar2,0x41,0,0,0);
          }
          goto LAB_007bce2e;
        }
      }
      FUN_007a71f1(local_8,iVar2,0,0,0,0,0);
    }
  }
LAB_007bce2e:
  *(undefined4 *)(param_1 + 0x1e74) = 0;
  return;
}


