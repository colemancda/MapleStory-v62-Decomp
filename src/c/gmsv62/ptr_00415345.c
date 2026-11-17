/* ptr_00415345 - 0x00415345 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall ptr_00415345(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x14)) goto LAB_00415371;
    iVar3 = *(int *)(param_1 + 8) * 2 + 1;
  }
  if (iVar3 != 0) {
    FUN_00419cb7(iVar3,0);
  }
LAB_00415371:
  uVar4 = FUN_0087a024(**(undefined4 **)(unaff_EBP + 8),5);
  uVar4 = uVar4 % *(uint *)(param_1 + 8);
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar4 * 4);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4);
  if (puVar5 != (undefined4 *)0x0) {
    do {
      if (puVar5[2] == **(int **)(unaff_EBP + 8)) {
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          return puVar5;
        }
        FUN_00412a3a(*(undefined4 *)(unaff_EBP + 0xc));
        return puVar5;
      }
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar5 = (undefined4 *)FUN_0041a818();
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = *puVar1;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar5 = &PTR_LAB_008e86c0;
    puVar5[2] = *puVar2;
    puVar5[4] = 0;
    *puVar5 = &PTR_FUN_008e86bc;
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00412a3a(*(undefined4 *)(unaff_EBP + 0xc));
  }
  *puVar1 = puVar5;
  return puVar5;
}


