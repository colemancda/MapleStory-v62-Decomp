/* FUN_0086156f - 0x0086156f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0086156f(void)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar7 = **(int **)(unaff_EBP + 0x10);
  iVar13 = **(int **)(unaff_EBP + 0x14);
  iVar6 = iVar7 - *(int *)(unaff_EBP + 8);
  iVar12 = iVar13 - *(int *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x3c) = iVar6;
  *(int *)(unaff_EBP + -0x40) = iVar12;
  if ((iVar6 == 0) && (iVar12 == 0)) {
    uVar8 = 1;
    goto LAB_00861891;
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined ***)(unaff_EBP + -0x58) = &PTR_FUN_008ea328;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004cd31b(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),iVar7,iVar13,
               unaff_EBP + -0x58);
  iVar7 = *(int *)(unaff_EBP + -0x4c);
  if (iVar7 == 0) {
LAB_00861879:
    uVar8 = 1;
  }
  else {
    do {
      dVar5 = _DAT_008e8a80;
      iVar13 = *(int *)(iVar7 + 4);
      dVar1 = *(double *)(iVar13 + 0x30);
      iVar7 = *(int *)((-(uint)(iVar7 != 0) & iVar7 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x44) = -(uint)(iVar7 != 0) & iVar7 + 0x10U;
      if (((dVar5 < dVar1) || (*(int *)(iVar13 + 0x20) == 0)) ||
         (*(int *)(iVar13 + 0x20) == *(int *)(unaff_EBP + 0x18))) {
        uVar8 = *(undefined4 *)(iVar13 + 0x14);
        iVar7 = *(int *)(iVar13 + 0xc);
        iVar6 = *(int *)(iVar13 + 0x10);
        iVar12 = *(int *)(iVar13 + 0x18);
        *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - iVar7;
        *(undefined4 *)(unaff_EBP + -0x34) = uVar8;
        *(int *)(unaff_EBP + -0x18) = iVar12;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) - iVar6;
        *(int *)(unaff_EBP + -0x28) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x20) = **(undefined4 **)(unaff_EBP + 0x10);
        iVar6 = (*(int *)(unaff_EBP + 0xc) - iVar6) * *(int *)(unaff_EBP + -0x14) -
                (*(int *)(unaff_EBP + 8) - iVar7) * *(int *)(unaff_EBP + -0x18);
        iVar11 = (**(int **)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + -0x28)) *
                 *(int *)(unaff_EBP + -0x14) -
                 (*(int *)(unaff_EBP + -0x20) - iVar7) * *(int *)(unaff_EBP + -0x18);
        *(int *)(unaff_EBP + -0x38) = iVar7;
        if (((iVar6 < 1) && (-1 < iVar11)) && ((iVar6 != 0 || (iVar11 != 0)))) {
          iVar6 = **(int **)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0xc);
          iVar11 = **(int **)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 8);
          iVar7 = (*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + 0xc)) * iVar11 -
                  (*(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + 8)) * iVar6;
          iVar6 = (iVar12 - *(int *)(unaff_EBP + 0xc)) * iVar11 -
                  (*(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + 8)) * iVar6;
          if (((-1 < iVar7) || (-1 < iVar6)) && ((iVar7 < 1 || (iVar6 < 1)))) {
            if (iVar7 == 0) {
              iVar7 = *(int *)(iVar13 + 0x4c);
              if ((iVar7 == 0) ||
                 (iVar6 = FUN_007f393e(iVar7,iVar13,**(undefined4 **)(unaff_EBP + 0x10),
                                       **(undefined4 **)(unaff_EBP + 0x14)), iVar6 == 0))
              goto LAB_00861832;
              *(int *)(unaff_EBP + -0x1c) = iVar13;
              *(int *)(unaff_EBP + -0x20) = iVar7;
            }
            else if (iVar6 == 0) {
              iVar7 = *(int *)(iVar13 + 0x50);
              if ((iVar7 == 0) ||
                 (iVar6 = FUN_007f393e(iVar13,iVar7,**(undefined4 **)(unaff_EBP + 0x10),
                                       **(undefined4 **)(unaff_EBP + 0x14)), iVar6 == 0))
              goto LAB_00861832;
              *(int *)(unaff_EBP + -0x1c) = iVar7;
              *(int *)(unaff_EBP + -0x20) = iVar13;
            }
            else {
              *(int *)(unaff_EBP + -0x20) = iVar13;
              *(int *)(unaff_EBP + -0x1c) = iVar13;
            }
            iVar7 = *(int *)(unaff_EBP + -0x14);
            iVar13 = *(int *)(unaff_EBP + -0x18);
            uVar8 = FUN_0087a90a(iVar13 * *(int *)(unaff_EBP + -0x3c) -
                                 iVar7 * *(int *)(unaff_EBP + -0x40));
            *(undefined4 *)(unaff_EBP + -0x18) = uVar8;
            iVar7 = FUN_0087a90a(((iVar12 * *(int *)(unaff_EBP + -0x38) -
                                  *(int *)(unaff_EBP + -0x34) * *(int *)(unaff_EBP + -0x28)) -
                                 iVar13 * *(int *)(unaff_EBP + 8)) +
                                 iVar7 * *(int *)(unaff_EBP + 0xc));
            lVar4 = (longlong)*(int *)(unaff_EBP + -0x18) * (longlong)*(int *)(unaff_EBP + -0x2c);
            iVar13 = (int)((ulonglong)lVar4 >> 0x20);
            uVar9 = (uint)lVar4;
            uVar10 = iVar7 * *(int *)(unaff_EBP + -0x30);
            uVar2 = (uint)(uVar9 < uVar10);
            uVar3 = iVar13 - ((int)uVar10 >> 0x1f);
            if (((int)(uVar3 - uVar2) < 0) ||
               ((uVar3 == uVar2 || SBORROW4(iVar13,(int)uVar10 >> 0x1f) != SBORROW4(uVar3,uVar2) &&
                (uVar9 == uVar10)))) {
              if (uVar9 == uVar10 && uVar3 == uVar2) {
                iVar7 = *(int *)(unaff_EBP + -0x24);
                if ((*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0xc)) *
                    (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x10) - *(int *)(iVar7 + 0x10)) -
                    (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0xc) - *(int *)(iVar7 + 0xc)) *
                    (*(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 0x10)) < 0) {
                  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x1c);
                }
                iVar7 = *(int *)(unaff_EBP + -0x20);
                iVar13 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x10);
                if ((*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) -
                    *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc)) * (*(int *)(iVar7 + 0x18) - iVar13)
                    - (*(int *)(iVar7 + 0x14) - *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc)) *
                      (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x18) - iVar13) < 0) {
                  *(int *)(unaff_EBP + -0x10) = iVar7;
                }
              }
            }
            else {
              *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x1c);
              *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x18);
              *(int *)(unaff_EBP + -0x2c) = iVar7;
              *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x20);
            }
          }
        }
      }
LAB_00861832:
      iVar7 = *(int *)(unaff_EBP + -0x44);
    } while (iVar7 != 0);
    if ((*(int *)(unaff_EBP + -0x24) == 0) || (*(int *)(unaff_EBP + -0x10) == 0)) goto LAB_00861879;
    uVar8 = __ftol();
    **(undefined4 **)(unaff_EBP + 0x10) = uVar8;
    uVar8 = __ftol();
    **(undefined4 **)(unaff_EBP + 0x14) = uVar8;
    uVar8 = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x58) = &PTR_FUN_008ea328;
  FUN_004cdcea();
LAB_00861891:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


