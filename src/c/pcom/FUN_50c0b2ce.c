/* FUN_50c0b2ce - 0x50c0b2ce in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c0b2ce(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = *(int *)(unaff_EBP + 8);
  puVar5 = (undefined4 *)(iVar2 + 0x1c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd8;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar5;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar5;
  FUN_50c026fc();
  uVar6 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar6 == 0xfffffffe) {
    if (*(int *)(iVar2 + 0x24) == 0) {
      FUN_50c04098(*(int *)(iVar2 + 0x2c));
    }
    else {
      FUN_50c040d2(*(int **)(iVar2 + 0x28));
    }
LAB_50c0b318:
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      FUN_50c08269(*(short **)(unaff_EBP + 0x10));
    }
  }
  else {
    if (*(int *)(iVar2 + 0x24) == 0) {
      iVar4 = *(int *)(*(int *)(iVar2 + 0x2c) + 8);
    }
    else if (**(int **)(iVar2 + 0x28) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(**(int **)(iVar2 + 0x28) + -4);
    }
    if ((iVar4 == 0) && ((uVar6 == 0xffffffff || (uVar6 == 0)))) goto LAB_50c0b318;
    if (uVar6 == 0xffffffff) {
      uVar6 = iVar4 - 1;
    }
    if (((int)uVar6 < 0) || (iVar4 <= (int)uVar6)) {
      piVar1 = (int *)(iVar2 + 0x20);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar5 = 0;
      }
      uVar3 = 0x80070057;
      goto LAB_50c0b448;
    }
    iVar4 = *(int *)(iVar2 + 0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      if (uVar6 == 0xffffffff) {
        iVar4 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x10);
      }
      else {
        iVar4 = FUN_50c0ba1d(*(void **)(iVar2 + 0x2c),uVar6);
      }
      *(int *)(unaff_EBP + 8) = iVar4;
      if (*(int *)(unaff_EBP + 0x10) != 0) {
        puVar5 = (undefined4 *)FUN_50c0ab6e(*(int *)(iVar4 + 4));
        *(undefined4 *)(unaff_EBP + -0x28) = *puVar5;
        *(undefined4 *)(unaff_EBP + -0x24) = puVar5[1];
        *(undefined4 *)(unaff_EBP + -0x20) = puVar5[2];
        *(undefined4 *)(unaff_EBP + -0x1c) = puVar5[3];
        *(undefined2 *)puVar5 = 0;
        puVar5 = *(undefined4 **)(unaff_EBP + 0x10);
        *puVar5 = *(undefined4 *)(unaff_EBP + -0x28);
        puVar5[1] = *(undefined4 *)(unaff_EBP + -0x24);
        puVar5[2] = *(undefined4 *)(unaff_EBP + -0x20);
        puVar5[3] = *(undefined4 *)(unaff_EBP + -0x1c);
        puVar5 = *(undefined4 **)(unaff_EBP + -0x14);
      }
      FUN_50c0df3d(*(void **)(iVar2 + 0x2c),*(int *)(unaff_EBP + 8));
    }
    else {
      iVar4 = **(int **)(iVar2 + 0x28);
      if (uVar6 != 0xffffffff) {
        iVar4 = iVar4 + uVar6 * 8;
      }
      *(int *)(unaff_EBP + 8) = iVar4;
      if (*(int *)(unaff_EBP + 0x10) != 0) {
        puVar5 = (undefined4 *)FUN_50c0ab6e(*(int *)(iVar4 + 4));
        *(undefined4 *)(unaff_EBP + -0x28) = *puVar5;
        *(undefined4 *)(unaff_EBP + -0x24) = puVar5[1];
        *(undefined4 *)(unaff_EBP + -0x20) = puVar5[2];
        *(undefined4 *)(unaff_EBP + -0x1c) = puVar5[3];
        *(undefined2 *)puVar5 = 0;
        puVar5 = *(undefined4 **)(unaff_EBP + 0x10);
        *puVar5 = *(undefined4 *)(unaff_EBP + -0x28);
        puVar5[1] = *(undefined4 *)(unaff_EBP + -0x24);
        puVar5[2] = *(undefined4 *)(unaff_EBP + -0x20);
        puVar5[3] = *(undefined4 *)(unaff_EBP + -0x1c);
        puVar5 = *(undefined4 **)(unaff_EBP + -0x14);
      }
      FUN_50c0bb01(*(void **)(iVar2 + 0x28),*(void **)(unaff_EBP + 8));
    }
  }
  piVar1 = puVar5 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar5 = 0;
  }
  uVar3 = 0;
LAB_50c0b448:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


