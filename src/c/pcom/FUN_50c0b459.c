/* FUN_50c0b459 - 0x50c0b459 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c0b459(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *this;
  uint uVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  *(undefined4 **)(unaff_EBP + -0x1c) = (undefined4 *)(iVar2 + 0x1c);
  FUN_50c026fc();
  uVar10 = 0;
  iVar9 = *(int *)(iVar2 + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar9 == 0) {
    this = FUN_50c025fb();
    *(uint **)(unaff_EBP + -0x20) = this;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (this == (uint *)0x0) {
      this = (uint *)0x0;
    }
    else {
      uVar6 = *(uint *)(*(int *)(iVar2 + 0x2c) + 8);
      if (uVar6 < *(uint *)(unaff_EBP + 0xc)) {
        uVar6 = *(uint *)(unaff_EBP + 0xc);
      }
      *this = 0;
      FUN_50c0bb50(this,uVar6);
    }
    iVar9 = *(int *)(iVar2 + 0x2c);
    *(uint **)(unaff_EBP + -0x14) = this;
    uVar6 = *(uint *)(iVar9 + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while (uVar6 != 0) {
      iVar3 = *(int *)(uVar6 - 0xc);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(uVar6 + 4);
      iVar9 = **(int **)(unaff_EBP + -0x14) + uVar10 * 8;
      FUN_50c0b747(iVar9);
      iVar9 = *(int *)(iVar9 + 4);
      iVar7 = FUN_50c0ab6e(*(int *)(unaff_EBP + -0x20));
      *(int *)(unaff_EBP + -0x20) = iVar7;
      psVar8 = (short *)FUN_50c0ab6e(iVar9);
      iVar9 = FUN_50c09a25(psVar8,*(short **)(unaff_EBP + -0x20));
      if (iVar9 < 0) {
        FUN_50c101c4(iVar9);
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      uVar10 = *(uint *)(unaff_EBP + -0x18);
      uVar6 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    for (; uVar10 < *(uint *)(unaff_EBP + 0xc); uVar10 = uVar10 + 1) {
      FUN_50c0b747(**(int **)(unaff_EBP + -0x14) + uVar10 * 8);
    }
    if (*(undefined4 **)(iVar2 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0x2c))(1);
    }
    uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x28) = uVar4;
    puVar5 = *(undefined4 **)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar2 + 0x24) = 1;
    piVar1 = puVar5 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar5 = 0;
    }
  }
  else {
    FUN_50c0bba1(*(void **)(iVar2 + 0x28),*(uint *)(unaff_EBP + 0xc),0);
    piVar1 = (int *)(iVar2 + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


