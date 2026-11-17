/* FUN_00524ce4 - 0x00524ce4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00524ce4(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int extraout_ECX;
  int iVar11;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(extraout_ECX + 0x10);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_00402aba();
  piVar10 = *(int **)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((piVar10 != (int *)0x0) && (piVar10[-1] != 0)) &&
      (piVar10 = *(int **)(extraout_ECX + 8), piVar10 != (int *)0x0)) && (piVar10[-1] != 0)) {
    iVar7 = *(int *)(extraout_ECX + 4);
    if (iVar7 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(iVar7 + -4);
    }
    uVar6 = FUN_00525c49(iVar7,iVar7 + iVar11 * 4,unaff_EBP + 8,0);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
    iVar7 = *(int *)(extraout_ECX + 8);
    if (iVar7 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(iVar7 + -4);
    }
    uVar6 = FUN_00525c49(iVar7,iVar7 + iVar11 * 4,unaff_EBP + 0xc,0);
    piVar4 = *(int **)(extraout_ECX + 4);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
    if (((*(int **)(unaff_EBP + -0x18) != piVar4) ||
        (piVar10 = (int *)**(int **)(unaff_EBP + -0x18), piVar10 == (int *)*(int *)(unaff_EBP + 8)))
       && ((*(undefined4 **)(unaff_EBP + -0x10) != *(undefined4 **)(extraout_ECX + 8) ||
           (piVar10 = (int *)**(undefined4 **)(unaff_EBP + -0x10),
           piVar10 == *(int **)(unaff_EBP + 0xc))))) {
      if (*(int *)(extraout_ECX + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(extraout_ECX + 4) + -4);
      }
      piVar10 = piVar4 + iVar7;
      if (*(int **)(unaff_EBP + -0x18) != piVar10) {
        if (*(int *)(extraout_ECX + 8) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 8) + -4);
        }
        piVar10 = (int *)(*(int *)(extraout_ECX + 8) + iVar7 * 4);
        if (*(int **)(unaff_EBP + -0x10) != piVar10) {
          iVar7 = ((int)*(int **)(unaff_EBP + -0x18) - (int)piVar4 >> 2) + -1;
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          iVar11 = (*(int *)(unaff_EBP + -0x10) - *(int *)(extraout_ECX + 8) >> 2) + -1;
          if (iVar11 < 1) {
            iVar11 = 0;
          }
          iVar5 = **(int **)(unaff_EBP + -0x18);
          *(int *)(unaff_EBP + -0x18) = iVar5;
          if ((iVar5 == *(int *)(unaff_EBP + 8)) &&
             (**(int **)(unaff_EBP + -0x10) == *(int *)(unaff_EBP + 0xc))) {
            pcVar8 = (char *)(*(int *)(*(int *)(extraout_ECX + 0xc) + iVar11 * 4) + iVar7);
            if ((*pcVar8 == '\0') && (pcVar8[1] == '\0')) {
              iVar11 = *(int *)(*(int *)(extraout_ECX + 0xc) + 4 + iVar11 * 4);
LAB_00524e26:
              pcVar8 = (char *)(iVar11 + iVar7);
              if (*pcVar8 == '\0') {
                cVar2 = pcVar8[1];
                goto LAB_00524e6f;
              }
            }
LAB_00524e31:
            uVar9 = CONCAT31((int3)((uint)pcVar8 >> 8),1);
          }
          else {
            if (*(int *)(unaff_EBP + -0x18) == *(int *)(unaff_EBP + 8)) {
              iVar11 = *(int *)(*(int *)(extraout_ECX + 0xc) + iVar11 * 4);
              goto LAB_00524e26;
            }
            if (**(int **)(unaff_EBP + -0x10) != *(int *)(unaff_EBP + 0xc)) {
              iVar11 = *(int *)(*(int *)(extraout_ECX + 0xc) + iVar11 * 4);
              puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
              uVar3 = *(undefined1 *)(iVar11 + iVar7);
              if (puVar1 != (undefined4 *)0x0) {
                piVar10 = puVar1 + 1;
                *piVar10 = *piVar10 + -1;
                if (*piVar10 == 0) {
                  *puVar1 = 0;
                }
              }
              uVar9 = CONCAT31((int3)((uint)iVar11 >> 8),uVar3);
              goto LAB_00524e9d;
            }
            pcVar8 = *(char **)(*(int *)(extraout_ECX + 0xc) + iVar11 * 4);
            if (pcVar8[iVar7] != '\0') goto LAB_00524e31;
            pcVar8 = *(char **)(*(int *)(extraout_ECX + 0xc) + 4 + iVar11 * 4);
            cVar2 = pcVar8[iVar7];
LAB_00524e6f:
            if (cVar2 != '\0') goto LAB_00524e31;
            uVar9 = (uint)pcVar8 & 0xffffff00;
          }
          puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
          if (puVar1 != (undefined4 *)0x0) {
            piVar10 = puVar1 + 1;
            *piVar10 = *piVar10 + -1;
            if (*piVar10 == 0) {
              *puVar1 = 0;
            }
          }
          goto LAB_00524e9d;
        }
      }
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    piVar4 = (int *)(extraout_ECX + 0x14);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      *puVar1 = 0;
    }
  }
  uVar9 = (uint)piVar10 & 0xffffff00;
LAB_00524e9d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar9;
}


