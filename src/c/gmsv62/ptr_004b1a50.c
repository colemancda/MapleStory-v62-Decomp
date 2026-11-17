/* ptr_004b1a50 - 0x004b1a50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004b1a50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 0x201) && (3 < *(int *)(unaff_EBP + 0x14))) {
    uVar6 = *(uint *)(extraout_ECX + 0x48);
    do {
      uVar4 = uVar6;
      if (uVar4 == 0) goto LAB_004b1b1f;
      uVar6 = *(uint *)(extraout_ECX + 0x48);
      iVar5 = 0;
      if (uVar6 == 0) {
LAB_004b1ab3:
        iVar5 = -1;
      }
      else {
        do {
          if (uVar6 == uVar4) break;
          iVar5 = iVar5 + 1;
          iVar1 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
          uVar6 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        } while (uVar6 != 0);
        if (uVar6 == 0) goto LAB_004b1ab3;
      }
      iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      uVar6 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
    } while (((*(int *)(unaff_EBP + 0x10) < *(int *)(uVar4 + 4) + -2) ||
             (*(int *)(uVar4 + 8) + 2 < *(int *)(unaff_EBP + 0x10))) ||
            (*(int *)(uVar4 + 0x1c) == 0));
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x10,0x4d3);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    FUN_004b2699(iVar5);
  }
LAB_004b1b1f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


