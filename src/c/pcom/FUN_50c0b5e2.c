/* FUN_50c0b5e2 - 0x50c0b5e2 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c0b5e2(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe0;
  *(undefined4 **)(unaff_EBP + -0x1c) = (undefined4 *)(iVar2 + 0x1c);
  FUN_50c026fc();
  iVar8 = *(int *)(iVar2 + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar8 == 0) {
    piVar1 = (int *)(iVar2 + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  else {
    puVar4 = FUN_50c025fb();
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *puVar4 = (uint)&PTR_FUN_50c13334;
    }
    *(uint **)(unaff_EBP + -0x14) = puVar4;
    if (**(int **)(iVar2 + 0x28) == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(**(int **)(iVar2 + 0x28) + -4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    while (*(uint *)(unaff_EBP + 8) < *(uint *)(unaff_EBP + -0x18)) {
      iVar8 = *(int *)(**(int **)(iVar2 + 0x28) + 4 + *(uint *)(unaff_EBP + 8) * 8);
      iVar5 = FUN_50c0b92b(*(void **)(unaff_EBP + -0x14));
      FUN_50c0b747(iVar5);
      iVar5 = *(int *)(iVar5 + 4);
      psVar6 = (short *)FUN_50c0ab6e(iVar8);
      psVar7 = (short *)FUN_50c0ab6e(iVar5);
      iVar8 = FUN_50c09a25(psVar7,psVar6);
      if (iVar8 < 0) {
        FUN_50c101c4(iVar8);
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    }
    piVar1 = *(int **)(iVar2 + 0x28);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar1 != (int *)0x0) {
      FUN_50c040d2(piVar1);
      FUN_50c02783(&DAT_50c21310,piVar1);
    }
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(unaff_EBP + -0x14);
    puVar3 = *(undefined4 **)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar3 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


