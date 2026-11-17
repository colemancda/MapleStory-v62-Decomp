/* FUN_005d0ab2 - 0x005d0ab2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d0ab2(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  int iVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x14);
  FUN_0056a92f(*(undefined4 *)(unaff_EBP + 0x14),unaff_EBP + -0xd);
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_008e8ab0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  do {
    uVar1 = *(uint *)(unaff_EBP + 0x10);
    *(uint *)(unaff_EBP + 0x14) = *(uint *)(unaff_EBP + -0x14);
    if (uVar1 < *(uint *)(unaff_EBP + -0x14)) {
      *(uint *)(unaff_EBP + 0x14) = uVar1;
    }
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        piVar2 = (int *)FUN_00518b2e();
        iVar4 = *(int *)(unaff_EBP + 0xc) + uVar5;
        uVar5 = uVar5 + 1;
        *piVar2 = iVar4;
      } while (uVar5 < uVar1);
    }
    for (iVar4 = *(int *)(unaff_EBP + 0x14); iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar1 = *(uint *)(unaff_EBP + -0x20);
      if (uVar1 == 0) {
        uVar5 = FUN_004133f0();
      }
      else {
        uVar5 = FUN_004133f0();
        uVar5 = uVar5 % uVar1;
      }
      puVar3 = (undefined4 *)FUN_005d1241(uVar5);
      *(undefined4 *)(**(int **)(unaff_EBP + 8) + iVar6 * 4) = *puVar3;
      iVar6 = iVar6 + 1;
      FUN_005d112f(puVar3);
    }
    piVar2 = (int *)(unaff_EBP + -0x14);
    *piVar2 = *piVar2 - *(int *)(unaff_EBP + 0x14);
  } while (*piVar2 != 0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


