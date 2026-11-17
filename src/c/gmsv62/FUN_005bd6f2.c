/* FUN_005bd6f2 - 0x005bd6f2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005bd6f2(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00879bb8();
  if (*(uint *)(extraout_ECX + 0x28) != 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    uVar6 = *(uint *)(extraout_ECX + 0x28);
    do {
      iVar4 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
      uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar6 + 4);
      FUN_005be4b7();
      iVar4 = *(int *)(unaff_EBP + -0x10);
      uVar2 = puVar1[1];
      uVar3 = *puVar1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(iVar4 + 0x24) + -0x1e;
      *(int *)(unaff_EBP + -0x20) = *(int *)(iVar4 + 0x28) + -0x28;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(iVar4 + 0x24) + 0x1e;
      *(int *)(unaff_EBP + -0x18) = *(int *)(iVar4 + 0x28) + 0x28;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x24,uVar3,uVar2);
      if (iVar4 != 0) {
        iVar4 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (iVar4 != 0) {
          FUN_005be4ea(0);
        }
        goto LAB_005bd799;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_005be4ea(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      uVar6 = uVar5;
    } while (uVar5 != 0);
  }
  iVar4 = 0;
LAB_005bd799:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


