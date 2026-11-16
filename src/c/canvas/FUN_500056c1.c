/* FUN_500056c1 - 0x500056c1 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_500056c1(void)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint uVar6;
  uint uVar7;
  int unaff_EBP;
  ushort *puVar8;
  ushort *puVar9;
  
  FUN_50012d80();
  puVar8 = *(ushort **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if ((puVar8 == (ushort *)0x0) || (*puVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar7 = -*(int *)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + 8) = 1;
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x3c;
    *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x3c;
    FUN_500024f7();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uVar3 = *puVar8;
    while( true ) {
      puVar9 = puVar8 + 1;
      if (uVar3 == 0) break;
      if (uVar3 == 9) {
        pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x14),0x20,(uint *)0x0);
        uVar6 = 1;
        if (1 < (uint)((int)pvVar4 * 4)) {
          uVar6 = (int)pvVar4 * 4;
        }
        uVar7 = (uVar7 / uVar6 + 1) * uVar6;
LAB_500057a3:
        if ((*(int *)(unaff_EBP + -0x10) == 0) && (uVar3 == 0x20)) {
          *(undefined4 *)(unaff_EBP + -0x10) = 1;
        }
      }
      else {
        if (0x1f < uVar3) {
          pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x14),(uint)uVar3,(uint *)0x0);
          uVar7 = uVar7 + (int)pvVar4;
        }
        if (uVar3 != 0x5c) goto LAB_500057a3;
        uVar3 = *puVar9;
        puVar9 = puVar8 + 2;
        if (uVar3 == 0) {
          uVar7 = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        if (uVar3 == 0x6e) {
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        }
        else {
          if (uVar3 != 0x72) {
            if (uVar3 != 0x5c) {
              pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x14),(uint)uVar3,(uint *)0x0);
              uVar7 = uVar7 + (int)pvVar4;
            }
            goto LAB_500057a3;
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          puVar9 = puVar8 + 4;
        }
        uVar7 = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      if (*(int *)(unaff_EBP + 0xc) < (int)(*(int *)(unaff_EBP + 0x10) + uVar7)) {
        if ((*(int *)(unaff_EBP + -0x10) == 0) || (puVar9[-1] == 0x20)) {
          uVar7 = 0;
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        else {
          uVar3 = *puVar9;
          if (((0x1f < uVar3) && (uVar3 != 0x2c)) && (puVar8 = puVar9, uVar3 != 0x2e)) {
            while (puVar9 = puVar8 + -1, uVar3 != 0) {
              if (uVar3 == 0x20) {
                uVar7 = 0;
                *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                puVar9 = puVar8 + 1;
                break;
              }
              puVar8 = puVar9;
              uVar3 = *puVar9;
            }
          }
        }
      }
      uVar3 = *puVar9;
      puVar8 = puVar9;
    }
    puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar2 = 0;
    }
    uVar5 = *(undefined4 *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


