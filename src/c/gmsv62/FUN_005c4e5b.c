/* FUN_005c4e5b - 0x005c4e5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_005c4e5b(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x40c) == 0) {
    return 0;
  }
  iVar1 = FUN_007d1e08();
  uVar4 = *(uint *)(param_1 + 0x410);
  iVar5 = 1;
  while (uVar4 != 0) {
    iVar2 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    iVar2 = FUN_00413367(uVar4,*(undefined4 *)(uVar4 + 8));
    uVar4 = uVar3;
    if (iVar5 <= iVar2 - iVar1) {
      iVar5 = iVar2 - iVar1;
    }
  }
  return iVar5;
}


