/* FUN_500109f5 - 0x500109f5 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


bool FUN_500109f5(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 extraout_ECX;
  short *psVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int unaff_EBP;
  uint uVar8;
  short *psVar9;
  bool bVar10;
  
  FUN_50012d80();
  uVar6 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (uVar6 < 4) {
    bVar10 = false;
  }
  else {
    psVar4 = *(short **)(unaff_EBP + 8);
    uVar8 = 0;
    psVar2 = psVar4 + 2;
    do {
      if ((((psVar2[-2] == 0x2e) && (psVar2[-1] == 0x69)) && (*psVar2 == 0x6d)) &&
         (psVar2[1] == 0x67)) {
        *(uint *)(unaff_EBP + -0x18) = uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      psVar2 = psVar2 + 1;
    } while (uVar8 <= uVar6 - 4);
    uVar8 = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    psVar2 = psVar4;
    if (uVar6 != 0) {
      do {
        psVar9 = psVar2 + 1;
        if ((*psVar2 == 0x2f) || (*psVar2 == 0x5c)) {
          sVar1 = *psVar9;
          *psVar9 = 0;
          FUN_50011e0d();
          *(undefined4 *)(unaff_EBP + -4) = 0;
          iVar7 = FUN_500116e7(*(void **)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x10),
                               (undefined4 *)0x0);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            FUN_500028a0(*(int **)(unaff_EBP + -0x10));
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          if (iVar7 != 0) goto LAB_50010bcd;
          psVar4 = *(short **)(unaff_EBP + 8);
          uVar6 = *(uint *)(unaff_EBP + 0xc);
          *psVar9 = sVar1;
        }
        else if (uVar8 == *(uint *)(unaff_EBP + -0x18)) {
          psVar4[uVar8 + 4] = 0;
          FUN_50011e0d();
          *(undefined4 *)(unaff_EBP + -4) = 1;
          iVar7 = FUN_500116e7(*(void **)(unaff_EBP + -0x1c),(int *)(unaff_EBP + 0xc),
                               (undefined4 *)0x0);
          piVar5 = *(int **)(unaff_EBP + 0xc);
          goto LAB_50010c32;
        }
        uVar8 = *(int *)(unaff_EBP + -0x14) + 1;
        *(uint *)(unaff_EBP + -0x14) = uVar8;
        psVar2 = psVar9;
      } while (uVar8 < uVar6);
    }
    bVar10 = false;
    if (*(int *)(unaff_EBP + -0x18) == -1) {
      iVar7 = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (uVar6 != 0) {
        *(short **)(unaff_EBP + -0x10) = psVar4;
        *(int *)(unaff_EBP + -0x20) = (unaff_EBP + -0x82c) - (int)psVar4;
        do {
          if ((**(short **)(unaff_EBP + -0x10) == 0x2f) || (**(short **)(unaff_EBP + -0x10) == 0x5c)
             ) {
            wcsncpy((wchar_t *)(unaff_EBP + -0x82c + iVar7 * 2),psVar4 + iVar7,
                    *(int *)(unaff_EBP + -0x14) - iVar7);
            wcsncpy((wchar_t *)(*(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x10)),
                    u__img_50019574,5);
            iVar7 = *(int *)(unaff_EBP + -0x14);
            FUN_50011e0d();
            *(undefined4 *)(unaff_EBP + -4) = 2;
            iVar3 = FUN_500116e7(*(void **)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x18),
                                 (undefined4 *)0x0);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
              FUN_500028a0(*(int **)(unaff_EBP + -0x18));
              *(undefined4 *)(unaff_EBP + -0x18) = 0;
            }
            if (iVar3 != 0) goto LAB_50010bcd;
            psVar4 = *(short **)(unaff_EBP + 8);
            uVar6 = *(uint *)(unaff_EBP + 0xc);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 2;
        } while (*(uint *)(unaff_EBP + -0x14) < uVar6);
      }
      bVar10 = false;
      if (iVar7 != uVar6 - 1) {
        wcsncpy((wchar_t *)(unaff_EBP + -0x82c + iVar7 * 2),psVar4 + iVar7,uVar6 - iVar7);
        wcsncpy((wchar_t *)(unaff_EBP + -0x82c + *(int *)(unaff_EBP + 0xc) * 2),u__img_50019574,5);
        FUN_50011e0d();
        *(undefined4 *)(unaff_EBP + -4) = 3;
        iVar7 = FUN_500116e7(*(void **)(unaff_EBP + -0x1c),(int *)(unaff_EBP + 8),(undefined4 *)0x0)
        ;
        piVar5 = *(int **)(unaff_EBP + 8);
LAB_50010c32:
        bVar10 = iVar7 != 0;
        if (piVar5 != (int *)0x0) {
          FUN_500028a0(piVar5);
        }
      }
    }
  }
LAB_50010c3d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar10;
LAB_50010bcd:
  bVar10 = true;
  goto LAB_50010c3d;
}


