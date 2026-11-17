/* FUN_00435255 - 0x00435255 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00435255(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xc) != 1) {
    puVar1 = (uint *)((-(uint)(param_2 != 0) & param_2 - 0x10U) + 4);
    uVar4 = *puVar1;
    uVar2 = *(int *)(param_1 + 0xc) - 1;
    *(uint *)(param_1 + 0xc) = uVar2;
    if (uVar4 < uVar2) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar2 * 4);
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + uVar4 * 4);
      *(uint *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4) = uVar4;
      do {
        uVar4 = FUN_0043ad50(uVar4);
      } while (uVar4 != 0);
      *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 4) = param_2;
      *puVar1 = *(uint *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    FUN_00438aad();
  }
  return;
}


