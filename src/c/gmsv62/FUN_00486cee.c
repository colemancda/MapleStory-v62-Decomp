/* FUN_00486cee - 0x00486cee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00486cee(int param_1)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  
  (**(code **)**(undefined4 **)(param_1 + 0x3d8))();
  FUN_00428e9e();
  (**(code **)*DAT_0097810c)();
  FUN_008162ff();
  if (*(int *)(param_1 + 0x408) != 0) {
    DVar2 = timeGetTime();
    if (4000 < DVar2 - *(int *)(param_1 + 0x404)) {
      FUN_00487b08();
    }
    if (*(int *)(param_1 + 0x40c) != 0) {
      DVar2 = timeGetTime();
      if (5000 < DVar2 - *(int *)(param_1 + 0x404)) {
        FUN_00489336();
      }
      if (*(int *)(param_1 + 0x40c) != 0) {
        return;
      }
    }
    DVar2 = timeGetTime();
    if (7000 < DVar2 - *(int *)(param_1 + 0x404)) {
      *(undefined4 *)(param_1 + 0x408) = 0;
      uVar3 = *(uint *)(param_1 + 0x3fc);
      while (uVar3 != 0) {
        iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
        FUN_0048bbbd(uVar3);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      }
      FUN_007c9119();
    }
  }
  return;
}


