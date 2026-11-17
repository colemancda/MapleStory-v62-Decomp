/* FUN_00862118 - 0x00862118 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00862118(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  int iVar6;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 0x1c);
  iVar1 = *(int *)(iVar6 + 4);
  if (iVar1 != *(int *)(unaff_EBP + 0xc)) {
    do {
      if (iVar1 == 1) {
        piVar5 = (int *)(iVar6 + 8);
        iVar6 = *(int *)(iVar6 + 0x94);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(int **)(unaff_EBP + -0x24) = piVar5;
        *(int **)(unaff_EBP + -0x18) = piVar5 + iVar6 * 7;
        if (piVar5 < piVar5 + iVar6 * 7) {
          do {
            iVar6 = 0;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            FUN_00862aa0(*(undefined4 *)(unaff_EBP + 8),piVar5);
            piVar3 = *(int **)(unaff_EBP + -0x24);
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            for (; piVar3 < *(int **)(unaff_EBP + -0x18); piVar3 = piVar3 + 7) {
              if (piVar5 != piVar3) {
                *(undefined1 *)(unaff_EBP + -4) = 1;
                iVar1 = FUN_00862ae8(piVar5,piVar3);
                if (iVar1 != 0) {
                  *(int *)(unaff_EBP + -0x10) =
                       *(int *)(unaff_EBP + -0x10) +
                       (*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30)) *
                       (*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34));
                }
                iVar1 = FUN_00862ae8(unaff_EBP + -0x44,piVar3);
                if (iVar1 != 0) {
                  iVar6 = iVar6 + (*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30)) *
                                  (*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34));
                }
              }
            }
            iVar6 = iVar6 - *(int *)(unaff_EBP + -0x10);
            iVar1 = (*(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + -0x40)) *
                    (*(int *)(unaff_EBP + -0x3c) - *(int *)(unaff_EBP + -0x44)) -
                    (piVar5[3] - piVar5[1]) * (piVar5[2] - *piVar5);
            if (((*(int *)(unaff_EBP + -0x1c) == 0) || (iVar6 < *(int *)(unaff_EBP + -0x14))) ||
               ((iVar6 == *(int *)(unaff_EBP + -0x14) && (*(int *)(unaff_EBP + -0x20) < iVar1)))) {
              *(int *)(unaff_EBP + -0x1c) = piVar5[6];
              *(int *)(unaff_EBP + -0x14) = iVar6;
              *(int *)(unaff_EBP + -0x20) = iVar1;
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            piVar5 = piVar5 + 7;
          } while (piVar5 < *(int **)(unaff_EBP + -0x18));
        }
        iVar6 = *(int *)(unaff_EBP + -0x1c);
      }
      else {
        piVar5 = (int *)(iVar6 + 8);
        iVar1 = *(int *)(iVar6 + 0x94);
        iVar4 = 0;
        iVar6 = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(int **)(unaff_EBP + -0x24) = piVar5 + iVar1 * 7;
        if (piVar5 < piVar5 + iVar1 * 7) {
          do {
            *(undefined4 *)(unaff_EBP + -4) = 2;
            FUN_00862aa0(*(undefined4 *)(unaff_EBP + 8),piVar5);
            iVar1 = (*(int *)(unaff_EBP + -0x48) - *(int *)(unaff_EBP + -0x50)) *
                    (*(int *)(unaff_EBP + -0x4c) - *(int *)(unaff_EBP + -0x54));
            iVar2 = iVar1 - (piVar5[3] - piVar5[1]) * (piVar5[2] - *piVar5);
            if (((iVar6 == 0) || (iVar2 < iVar4)) ||
               ((iVar2 == iVar4 && (iVar1 < *(int *)(unaff_EBP + -0x20))))) {
              iVar6 = piVar5[6];
              *(int *)(unaff_EBP + -0x20) = iVar1;
              iVar4 = iVar2;
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            piVar5 = piVar5 + 7;
          } while (piVar5 < *(int **)(unaff_EBP + -0x24));
        }
      }
      iVar1 = *(int *)(iVar6 + 4);
    } while (iVar1 != *(int *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


