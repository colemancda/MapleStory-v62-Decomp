/* FUN_500054bd - 0x500054bd in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_500054bd(void)

{
  undefined4 *puVar1;
  int *piVar2;
  ushort *puVar3;
  void *pvVar4;
  int iVar5;
  ushort uVar6;
  int extraout_ECX;
  uint uVar7;
  ushort uVar8;
  int unaff_EBP;
  ushort *puVar9;
  
  FUN_50012d80();
  puVar3 = *(ushort **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if ((puVar3 != (ushort *)0x0) && (*puVar3 != 0)) {
    puVar1 = (undefined4 *)(extraout_ECX + 0x3c);
    *(int *)(unaff_EBP + -0x10) = -*(int *)(unaff_EBP + 0x14);
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
    FUN_500024f7();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    uVar8 = *puVar3;
LAB_50005509:
    puVar9 = puVar3 + 1;
    if (uVar8 == 0) goto LAB_50005698;
    if (uVar8 == 9) {
      pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x18),0x20,(uint *)0x0);
      uVar7 = 1;
      if (1 < (uint)((int)pvVar4 * 4)) {
        uVar7 = (int)pvVar4 * 4;
      }
      *(uint *)(unaff_EBP + -0x10) = (*(uint *)(unaff_EBP + -0x10) / uVar7 + 1) * uVar7;
LAB_50005594:
      if ((*(int *)(unaff_EBP + -0x14) == 0) && (uVar8 == 0x20)) {
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
      }
      if (*(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + 0x14) <= *(int *)(unaff_EBP + 0xc)) {
        uVar8 = *puVar9;
        puVar3 = puVar9;
        goto LAB_50005509;
      }
      if ((*(int *)(unaff_EBP + -0x14) != 0) && (puVar9[-1] != 0x20)) {
        uVar6 = *puVar9;
        if ((uVar6 < 0x20) ||
           ((((uVar8 == 0x20 || (uVar8 == 0x2e)) || (uVar8 == 0x2c)) ||
            ((uVar8 == 0x21 || (uVar8 == 0x3f)))))) {
          iVar5 = *(int *)(unaff_EBP + 8);
          **(undefined4 **)(unaff_EBP + 0x10) = 0;
          iVar5 = (int)puVar9 - iVar5 >> 1;
          goto LAB_50005678;
        }
        goto LAB_50005622;
      }
      iVar5 = ((int)puVar9 - *(int *)(unaff_EBP + 8) >> 1) + -1;
      **(uint **)(unaff_EBP + 0x10) = (uint)(*(int *)(unaff_EBP + -0x14) != 0);
    }
    else {
      if (0x1f < uVar8) {
        pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x18),(uint)uVar8,(uint *)0x0);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + (int)pvVar4;
      }
      if (uVar8 != 0x5c) goto LAB_50005594;
      uVar8 = *puVar9;
      puVar9 = puVar3 + 2;
      if (uVar8 == 0) {
        **(undefined4 **)(unaff_EBP + 0x10) = 1;
      }
      else if ((uVar8 == 0x6e) || (uVar8 == 0x4e)) {
        **(undefined4 **)(unaff_EBP + 0x10) = 2;
      }
      else {
        if ((uVar8 != 0x72) && (uVar8 != 0x52)) {
          if (uVar8 != 0x5c) {
            pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x18),(uint)uVar8,(uint *)0x0);
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + (int)pvVar4;
          }
          goto LAB_50005594;
        }
        **(undefined4 **)(unaff_EBP + 0x10) = 4;
      }
      iVar5 = ((int)puVar9 - *(int *)(unaff_EBP + 8) >> 1) + -2;
    }
LAB_50005678:
    piVar2 = (int *)(extraout_ECX + 0x40);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    goto LAB_500056b0;
  }
  iVar5 = 0;
  goto LAB_500056b0;
LAB_50005698:
  piVar2 = (int *)(extraout_ECX + 0x40);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  **(undefined4 **)(unaff_EBP + 0x10) = 0;
  iVar5 = ((int)puVar9 - *(int *)(unaff_EBP + 8) >> 1) + -1;
  goto LAB_500056b0;
LAB_50005622:
  puVar9 = puVar9 + -1;
  if (uVar6 == 0) goto LAB_5000565a;
  if (((uVar6 == 0x20) || (uVar6 == 0x2e)) ||
     ((uVar6 == 0x2c || ((uVar6 == 0x21 || (uVar6 == 0x3f)))))) {
    iVar5 = *(int *)(unaff_EBP + 8);
    **(undefined4 **)(unaff_EBP + 0x10) = 0;
    iVar5 = ((int)puVar9 - iVar5 >> 1) + 2;
    goto LAB_50005665;
  }
  uVar6 = *puVar9;
  goto LAB_50005622;
LAB_5000565a:
  iVar5 = *(int *)(unaff_EBP + 8);
  **(undefined4 **)(unaff_EBP + 0x10) = 0;
  iVar5 = ((int)puVar9 - iVar5 >> 1) + -1;
LAB_50005665:
  piVar2 = (int *)(extraout_ECX + 0x40);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
LAB_500056b0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


