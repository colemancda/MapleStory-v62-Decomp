/* FUN_00702658 - 0x00702658 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00702658(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar6 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
  iVar2 = FUN_006fcb31(*(undefined4 *)(unaff_EBP + 8));
  if ((*(int *)(iVar2 + 0x50) != 0) && (*(int *)(*(int *)(iVar2 + 0x50) + -4) != 0)) {
    for (uVar7 = 0; (iVar4 = *(int *)(iVar2 + 0x50), iVar4 != 0 && (uVar7 < *(uint *)(iVar4 + -4)));
        uVar7 = uVar7 + 1) {
      FUN_0045a1d8(unaff_EBP + -0x1c,*(undefined4 *)(iVar4 + uVar7 * 8));
      iVar4 = *(int *)(iVar2 + 0x50);
      uVar6 = *(undefined4 *)(iVar4 + uVar7 * 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = *(int *)(iVar4 + uVar7 * 8 + 4);
      iVar3 = FUN_0084c94e(uVar6);
      if (iVar3 < iVar4) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_007027f8;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  if ((*(int *)(iVar2 + 0x54) != 0) && (*(int *)(*(int *)(iVar2 + 0x54) + -4) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 3;
    *(undefined4 *)(unaff_EBP + -0x18) = 8;
    while( true ) {
      if ((*(int *)(iVar2 + 0x54) == 0) ||
         (*(uint *)(*(int *)(iVar2 + 0x54) + -4) <= *(uint *)(unaff_EBP + -0x14)))
      goto LAB_007027df;
      FUN_00455c59(unaff_EBP + -0x30);
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        FUN_0045e7c2(0);
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iVar4 = FUN_004b95d3(unaff_EBP + -0x24,unaff_EBP + -0x10);
      if (iVar4 == 0) break;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x54) + -4 + *(int *)(unaff_EBP + -0x18));
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      iVar1 = *(int *)(unaff_EBP + -0x1c);
      if (iVar1 <= iVar3) {
        puVar5 = (undefined4 *)FUN_0045e053(unaff_EBP + -0x28,iVar1 + -3,iVar1);
        uVar6 = FUN_0087b6ab(*puVar5);
        *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
        FUN_00414ebb();
      }
      if (*(int *)(unaff_EBP + -0x24) < iVar4) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_007027f8:
        FUN_00414ebb();
        uVar6 = 0;
        goto LAB_007027e2;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 3;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
LAB_007027df:
  uVar6 = 1;
LAB_007027e2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


