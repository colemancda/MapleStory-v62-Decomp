/* FUN_005d5d4b - 0x005d5d4b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005d5d4b(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_14 [16];
  
  uVar3 = *(uint *)(param_1 + 0x28);
  do {
    do {
      if (uVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(uVar3 + 4);
      iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      iVar2 = FUN_004cd670(iVar1 + 0xf8,*(undefined4 *)(iVar1 + 0x100));
    } while ((iVar2 == 0) ||
            (iVar2 = FUN_004cd670(iVar1 + 0x3d0,*(undefined4 *)(iVar1 + 0x3d8)), iVar2 != 0));
    FUN_005c5b12(local_14,1);
    iVar2 = (*DAT_0097b5a4)(local_14);
  } while ((iVar2 != 0) || (iVar2 = (*DAT_0097b57c)(local_14,param_2,param_3), iVar2 == 0));
  return iVar1;
}


