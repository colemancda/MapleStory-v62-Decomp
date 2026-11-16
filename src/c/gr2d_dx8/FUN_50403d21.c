/* FUN_50403d21 - 0x50403d21 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50403d21(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_60 [17];
  int local_1c;
  int local_18;
  int local_14;
  
  uVar2 = (*DAT_50438c78)(*(undefined4 *)(param_1 + 0x98),0xfffffff0);
  if ((uVar2 & 0x40000000) == 0) {
    *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + 1;
    if (2 < *(int *)(param_1 + 0x388)) {
      *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      bVar1 = FUN_50402e0e();
      if ((((CONCAT31(extraout_var,bVar1) != 0) &&
           ((local_1c != 0 || (*(int *)(param_1 + 100) == 0)))) &&
          ((local_18 != 0 || (*(int *)(param_1 + 0x68) == 0)))) &&
         ((local_14 != 0 || (*(int *)(param_1 + 0x6c) == 0)))) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x78);
        puVar4 = local_60;
        puVar5 = (undefined4 *)(param_1 + 0x20);
        for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(param_1 + 0x94) = 0x88760869;
        return;
      }
    }
    (*DAT_50438cdc)(0);
  }
  return;
}


