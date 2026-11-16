/* FUN_50417aba - 0x50417aba in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50417aba(void)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  void *pvVar6;
  int *extraout_ECX;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float *pfVar10;
  int unaff_EBP;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  
  FUN_5042a430();
  iVar7 = extraout_ECX[1];
  iVar1 = *(int *)(iVar7 + 0x1060);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if ((iVar1 != 1) || (*(int *)(*extraout_ECX + 0x1060) != 1)) {
    uVar12 = 0x80004005;
    goto LAB_50417e4d;
  }
  uVar2 = extraout_ECX[2];
  piVar4 = FUN_504146df(*(uint *)(*extraout_ECX + 0x1058),*(int *)(iVar7 + 0x1058),
                        ~(uVar2 >> 0x10) & 1);
  *(int **)(unaff_EBP + -0x38) = piVar4;
  if (piVar4 == (int *)0x0) {
LAB_50417e0f:
    uVar12 = 0x80004005;
  }
  else {
    piVar5 = FUN_504146df(*(uint *)(*extraout_ECX + 0x105c),*(int *)(extraout_ECX[1] + 0x105c),
                          ~(uVar2 >> 0x11) & 1);
    *(int **)(unaff_EBP + -0x20) = piVar5;
    if (piVar5 == (int *)0x0) goto LAB_50417e0f;
    *(int *)(unaff_EBP + -0x2c) = *piVar4 + (int)piVar4;
    piVar5 = (int *)(**(int **)(unaff_EBP + -0x20) + (int)*(int **)(unaff_EBP + -0x20));
    iVar7 = *(int *)(extraout_ECX[1] + 0x105c);
    *(int **)(unaff_EBP + -0x44) = piVar5;
    piVar4 = (int *)FUN_504018ba();
    *(int **)(unaff_EBP + -0x40) = piVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar7 = *(int *)(unaff_EBP + -0x14);
    }
    else {
      *piVar4 = iVar7;
      *(int **)(unaff_EBP + -0x34) = piVar4 + 1;
      FUN_5042a8e2(piVar4 + 1,0xc,iVar7,&LAB_504146c9);
      iVar7 = *(int *)(unaff_EBP + -0x34);
      *(int *)(unaff_EBP + -0x14) = iVar7;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x34) = iVar7;
    if (iVar7 == 0) {
LAB_50417e08:
      uVar12 = 0x8007000e;
    }
    else {
      iVar7 = *(int *)(*extraout_ECX + 0x1058);
      pvVar6 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + -0x3c) = pvVar6;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (pvVar6 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        iVar7 = *(int *)(unaff_EBP + -0x24);
      }
      else {
        _vector_constructor_iterator_(pvVar6,0x10,iVar7,ptr_50410e40);
        iVar7 = *(int *)(unaff_EBP + -0x3c);
        *(int *)(unaff_EBP + -0x24) = iVar7;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x3c) = iVar7;
      if (iVar7 == 0) goto LAB_50417e08;
      piVar4 = (int *)(*(int *)(unaff_EBP + -0x20) + 4);
      *(int **)(unaff_EBP + -0x30) = piVar4;
      while (piVar4 < piVar5) {
        piVar9 = (int *)(*piVar4 + (int)piVar4);
        for (piVar8 = piVar4 + 1; piVar4 = piVar9, piVar8 < piVar9; piVar8 = piVar8 + 2) {
          piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 8 + *piVar8 * 0xc);
          *piVar4 = *piVar4 + 1;
        }
      }
      piVar4 = *(int **)(unaff_EBP + -0x30);
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (piVar4 < piVar5) {
        do {
          iVar7 = *piVar4;
          piVar5 = piVar4 + 1;
          *(int **)(unaff_EBP + -0x1c) = (int *)(iVar7 + (int)piVar4);
          *(int **)(unaff_EBP + -0x30) = piVar5;
          piVar4 = (int *)(iVar7 + (int)piVar4);
          while (*(int **)(unaff_EBP + -0x10) = piVar5, piVar5 < piVar4) {
            piVar5 = (int *)(*(int *)(unaff_EBP + -0x14) + *piVar5 * 0xc);
            if (*piVar5 == 0) {
              piVar4 = *(int **)(unaff_EBP + -0x18);
              if (piVar4 == (int *)0x0) {
                iVar7 = *(int *)(extraout_ECX[1] + 0x1058);
                pvVar6 = (void *)FUN_504018ba();
                *(void **)(unaff_EBP + -0x40) = pvVar6;
                *(undefined4 *)(unaff_EBP + -4) = 2;
                if (pvVar6 == (void *)0x0) {
                  iVar7 = 0;
                }
                else {
                  _vector_constructor_iterator_(pvVar6,0x10,iVar7,ptr_50410e40);
                  iVar7 = *(int *)(unaff_EBP + -0x40);
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                *piVar5 = iVar7;
                if (iVar7 == 0) goto LAB_50417e08;
              }
              else {
                *piVar5 = *piVar4;
                *piVar4 = 0;
                *(int *)(unaff_EBP + -0x18) = piVar4[1];
              }
              piVar4 = *(int **)(unaff_EBP + -0x1c);
              puVar13 = (undefined4 *)*piVar5;
              for (iVar7 = (*(uint *)(extraout_ECX[1] + 0x1058) & 0xfffffff) << 2; iVar7 != 0;
                  iVar7 = iVar7 + -1) {
                *puVar13 = 0;
                puVar13 = puVar13 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined1 *)puVar13 = 0;
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
            }
            piVar5 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
          }
          iVar7 = *(int *)(unaff_EBP + -0x24);
          (**(code **)(*(int *)*extraout_ECX + 4))(*(undefined4 *)(unaff_EBP + -0x28),0,iVar7);
          piVar5 = (int *)(*(int *)(unaff_EBP + -0x38) + 4);
          if (piVar5 < *(int **)(unaff_EBP + -0x2c)) {
            pfVar10 = (float *)(iVar7 + 8);
            do {
              piVar8 = *(int **)(unaff_EBP + -0x30);
              piVar9 = (int *)(*piVar5 + (int)piVar5);
              *(int **)(unaff_EBP + -0x10) = piVar8;
              if (piVar8 < piVar4) {
                *(int **)(unaff_EBP + -0x40) = piVar5 + 1;
                while( true ) {
                  iVar7 = *(int *)(*(int *)(unaff_EBP + -0x14) + *piVar8 * 0xc);
                  piVar5 = *(int **)(unaff_EBP + -0x40);
                  if (piVar5 < piVar9) {
                    do {
                      fVar3 = (float)piVar5[1] * *(float *)(*(int *)(unaff_EBP + -0x10) + 4);
                      pfVar11 = (float *)(*piVar5 * 0x10 + iVar7);
                      *pfVar11 = fVar3 * pfVar10[-2] + *pfVar11;
                      pfVar11 = (float *)(*piVar5 * 0x10 + 4 + iVar7);
                      *pfVar11 = fVar3 * pfVar10[-1] + *pfVar11;
                      pfVar11 = (float *)(*piVar5 * 0x10 + 8 + iVar7);
                      *pfVar11 = fVar3 * *pfVar10 + *pfVar11;
                      pfVar11 = (float *)(*piVar5 * 0x10 + 0xc + iVar7);
                      piVar5 = piVar5 + 2;
                      *pfVar11 = fVar3 * pfVar10[1] + *pfVar11;
                    } while (piVar5 < piVar9);
                    piVar4 = *(int **)(unaff_EBP + -0x1c);
                  }
                  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
                  if (piVar4 <= *(int **)(unaff_EBP + -0x10)) break;
                  piVar8 = *(int **)(unaff_EBP + -0x10);
                }
              }
              pfVar10 = pfVar10 + 4;
              piVar5 = piVar9;
            } while (piVar9 < *(int **)(unaff_EBP + -0x2c));
          }
          piVar5 = *(int **)(unaff_EBP + -0x30);
          if (piVar5 < piVar4) {
            do {
              puVar13 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + *piVar5 * 0xc);
              piVar4 = puVar13 + 2;
              *piVar4 = *piVar4 + -1;
              if (*piVar4 == 0) {
                (**(code **)(*(int *)extraout_ECX[1] + 8))(*piVar5,0,*puVar13);
                puVar13[1] = *(undefined4 *)(unaff_EBP + -0x18);
                *(undefined4 **)(unaff_EBP + -0x18) = puVar13;
              }
              piVar5 = piVar5 + 2;
            } while (piVar5 < *(int **)(unaff_EBP + -0x1c));
            piVar4 = *(int **)(unaff_EBP + -0x1c);
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
        } while (piVar4 < *(int **)(unaff_EBP + -0x44));
      }
      uVar12 = 0;
    }
  }
  if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
    FUN_5041499c(*(void **)(unaff_EBP + -0x34),3);
  }
  FUN_504018c9(*(undefined4 **)(unaff_EBP + -0x20));
  FUN_504018c9(*(undefined4 **)(unaff_EBP + -0x38));
  FUN_504018c9(*(undefined4 **)(unaff_EBP + -0x3c));
  FUN_504018c9((undefined4 *)0x0);
LAB_50417e4d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar12;
}


