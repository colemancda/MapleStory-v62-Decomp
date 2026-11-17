/* FUN_007acb52 - 0x007acb52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_007acb52(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = FUN_0044dddc(*(undefined4 *)(param_1 + 0x4a4));
  for (local_c = 0; (iVar4 = *param_3, iVar4 != 0 && (local_c < *(uint *)(iVar4 + -4)));
      local_c = local_c + 1) {
    piVar1 = (int *)(iVar4 + local_c * 4);
    uVar2 = *(undefined4 *)*piVar1;
    for (local_8 = 1; (iVar4 = *piVar1, iVar4 != 0 && (local_8 < *(uint *)(iVar4 + -4)));
        local_8 = local_8 + 1) {
      if (iVar3 == *(int *)(iVar4 + local_8 * 4)) {
        local_10 = 0;
        iVar4 = FUN_00650dae(param_2,uVar2,&local_10);
        if (0 < iVar4) {
          iVar4 = FUN_006509a1(iVar4);
          uVar5 = FUN_00413367(iVar4 + 0xf4,*(undefined4 *)(iVar4 + 0xfc));
          uVar6 = FUN_004133f0();
          if (uVar6 % 0x65 <= uVar5) {
            *(undefined4 *)(param_1 + 0x1e70) = param_4;
            *(undefined4 *)(param_1 + 0x1e74) = uVar2;
            *(int *)(param_1 + 0x1e78) = iVar3;
            iVar3 = FUN_007d1e08();
            *(int *)(param_1 + 0x1e7c) = iVar3 + param_5;
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1e74) = 0;
  return;
}


