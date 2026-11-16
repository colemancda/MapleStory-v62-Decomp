/* FUN_504149e8 - 0x504149e8 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_504149e8(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  int *extraout_ECX;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float *pfVar10;
  int unaff_EBP;
  undefined4 uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  uVar6 = extraout_ECX[2];
  *(uint *)(unaff_EBP + -0x54) = ~(uVar6 >> 0x12) & 1;
  piVar4 = FUN_504146df(*(uint *)(*extraout_ECX + 0x1058),*(int *)(extraout_ECX[1] + 0x1058),
                        ~(uVar6 >> 0x10) & 1);
  *(int **)(unaff_EBP + -0x44) = piVar4;
  if (piVar4 != (int *)0x0) {
    piVar4 = FUN_504146df(*(uint *)(*extraout_ECX + 0x105c),*(int *)(extraout_ECX[1] + 0x105c),
                          ~(uVar6 >> 0x11) & 1);
    *(int **)(unaff_EBP + -0x2c) = piVar4;
    if (piVar4 != (int *)0x0) {
      piVar4 = FUN_504146df(*(uint *)(*extraout_ECX + 0x1060),*(int *)(extraout_ECX[1] + 0x1060),
                            *(int *)(unaff_EBP + -0x54));
      *(int **)(unaff_EBP + -0x28) = piVar4;
      if (piVar4 != (int *)0x0) {
        *(int *)(unaff_EBP + -0x4c) =
             **(int **)(unaff_EBP + -0x44) + (int)*(int **)(unaff_EBP + -0x44);
        *(int *)(unaff_EBP + -0x50) =
             **(int **)(unaff_EBP + -0x2c) + (int)*(int **)(unaff_EBP + -0x2c);
        *(int *)(unaff_EBP + -0x24) =
             **(int **)(unaff_EBP + -0x28) + (int)*(int **)(unaff_EBP + -0x28);
        iVar7 = *(int *)(extraout_ECX[1] + 0x1060);
        piVar4 = (int *)FUN_504018ba();
        *(int **)(unaff_EBP + -0x54) = piVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          iVar7 = *(int *)(unaff_EBP + -0x14);
        }
        else {
          *piVar4 = iVar7;
          *(int **)(unaff_EBP + -0x58) = piVar4 + 1;
          FUN_5042a8e2(piVar4 + 1,0xc,iVar7,&LAB_504146c9);
          iVar7 = *(int *)(unaff_EBP + -0x58);
          *(int *)(unaff_EBP + -0x14) = iVar7;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(int *)(unaff_EBP + -0x58) = iVar7;
        if (iVar7 != 0) {
          iVar7 = *(int *)(*extraout_ECX + 0x1058);
          pvVar5 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + -0x5c) = pvVar5;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pvVar5 == (void *)0x0) {
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            iVar7 = *(int *)(unaff_EBP + -0x1c);
          }
          else {
            _vector_constructor_iterator_(pvVar5,0x10,iVar7,ptr_50410e40);
            iVar7 = *(int *)(unaff_EBP + -0x5c);
            *(int *)(unaff_EBP + -0x1c) = iVar7;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(int *)(unaff_EBP + -0x5c) = iVar7;
          if (iVar7 != 0) {
            piVar4 = (int *)(*(int *)(unaff_EBP + -0x28) + 4);
            piVar9 = piVar4;
            if (piVar4 < *(int **)(unaff_EBP + -0x24)) {
              do {
                piVar8 = (int *)(*piVar9 + (int)piVar9);
                for (piVar9 = piVar9 + 1; piVar9 < piVar8; piVar9 = piVar9 + 2) {
                  piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 8 + *piVar9 * 0xc);
                  *piVar1 = *piVar1 + 1;
                }
                piVar9 = piVar8;
              } while (piVar8 < *(int **)(unaff_EBP + -0x24));
            }
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
            if (piVar4 < *(int **)(unaff_EBP + -0x24)) {
              do {
                piVar9 = (int *)(*piVar4 + (int)piVar4);
                piVar8 = piVar4 + 1;
                *(int **)(unaff_EBP + -0x18) = piVar9;
                *(int **)(unaff_EBP + -0x54) = piVar8;
                *(int **)(unaff_EBP + -0x10) = piVar8;
                piVar4 = piVar9;
                if (piVar8 < piVar9) {
                  do {
                    piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) +
                                    **(int **)(unaff_EBP + -0x10) * 0xc);
                    if (*piVar4 == 0) {
                      piVar8 = *(int **)(unaff_EBP + -0x20);
                      if (piVar8 == (int *)0x0) {
                        iVar7 = *(int *)(extraout_ECX[1] + 0x105c);
                        iVar2 = *(int *)(extraout_ECX[1] + 0x1058);
                        pvVar5 = (void *)FUN_504018ba();
                        *(void **)(unaff_EBP + -0x48) = pvVar5;
                        *(undefined4 *)(unaff_EBP + -4) = 2;
                        if (pvVar5 == (void *)0x0) {
                          iVar7 = 0;
                        }
                        else {
                          _vector_constructor_iterator_(pvVar5,0x10,iVar7 * iVar2,ptr_50410e40);
                          iVar7 = *(int *)(unaff_EBP + -0x48);
                        }
                        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                        *piVar4 = iVar7;
                        if (iVar7 == 0) goto LAB_50414e07;
                        piVar9 = *(int **)(unaff_EBP + -0x18);
                      }
                      else {
                        *piVar4 = *piVar8;
                        *piVar8 = 0;
                        *(int *)(unaff_EBP + -0x20) = piVar8[1];
                      }
                      puVar12 = (undefined4 *)*piVar4;
                      for (iVar7 = (*(int *)(extraout_ECX[1] + 0x105c) *
                                    *(int *)(extraout_ECX[1] + 0x1058) & 0xfffffffU) << 2;
                          iVar7 != 0; iVar7 = iVar7 + -1) {
                        *puVar12 = 0;
                        puVar12 = puVar12 + 1;
                      }
                      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                        *(undefined1 *)puVar12 = 0;
                        puVar12 = (undefined4 *)((int)puVar12 + 1);
                      }
                    }
                    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
                    piVar4 = piVar9;
                  } while (*(int **)(unaff_EBP + -0x10) < piVar9);
                }
                *(undefined4 *)(unaff_EBP + -0x38) = 0;
                uVar6 = *(int *)(unaff_EBP + -0x2c) + 4;
                *(uint *)(unaff_EBP + -0x3c) = uVar6;
                if (uVar6 < *(uint *)(unaff_EBP + -0x50)) {
                  do {
                    piVar4 = (int *)(**(int **)(unaff_EBP + -0x3c) +
                                    (int)*(int **)(unaff_EBP + -0x3c));
                    iVar7 = *(int *)*extraout_ECX;
                    *(int **)(unaff_EBP + -0x48) = piVar4;
                    (**(code **)(iVar7 + 4))
                              (*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x40)
                               ,*(undefined4 *)(unaff_EBP + -0x1c));
                    uVar6 = *(int *)(unaff_EBP + -0x44) + 4;
                    *(uint *)(unaff_EBP + -0x34) = uVar6;
                    if (uVar6 < *(uint *)(unaff_EBP + -0x4c)) {
                      pfVar10 = (float *)(*(int *)(unaff_EBP + -0x1c) + 8);
                      do {
                        uVar6 = **(int **)(unaff_EBP + -0x34) + (int)*(int **)(unaff_EBP + -0x34);
                        piVar9 = *(int **)(unaff_EBP + -0x54);
                        *(uint *)(unaff_EBP + -0x30) = uVar6;
                        for (; *(int **)(unaff_EBP + -0x10) = piVar9,
                            piVar9 < *(int **)(unaff_EBP + -0x18); piVar9 = piVar9 + 2) {
                          piVar8 = (int *)(*(int *)(unaff_EBP + -0x3c) + 4);
                          if (piVar8 < piVar4) {
                            do {
                              iVar7 = *(int *)(extraout_ECX[1] + 0x1058) * *piVar8 * 0x10 +
                                      *(int *)(*(int *)(unaff_EBP + -0x14) + *piVar9 * 0xc);
                              for (piVar4 = (int *)(*(int *)(unaff_EBP + -0x34) + 4);
                                  piVar4 < *(int **)(unaff_EBP + -0x30); piVar4 = piVar4 + 2) {
                                fVar3 = (float)piVar4[1] * (float)piVar8[1] *
                                        *(float *)(*(int *)(unaff_EBP + -0x10) + 4);
                                pfVar13 = (float *)(*piVar4 * 0x10 + iVar7);
                                *pfVar13 = fVar3 * pfVar10[-2] + *pfVar13;
                                pfVar13 = (float *)(*piVar4 * 0x10 + 4 + iVar7);
                                *pfVar13 = fVar3 * pfVar10[-1] + *pfVar13;
                                pfVar13 = (float *)(*piVar4 * 0x10 + 8 + iVar7);
                                *pfVar13 = fVar3 * *pfVar10 + *pfVar13;
                                pfVar13 = (float *)(*piVar4 * 0x10 + 0xc + iVar7);
                                *pfVar13 = fVar3 * pfVar10[1] + *pfVar13;
                              }
                              piVar9 = *(int **)(unaff_EBP + -0x10);
                              piVar8 = piVar8 + 2;
                            } while (piVar8 < *(int **)(unaff_EBP + -0x48));
                            piVar4 = *(int **)(unaff_EBP + -0x48);
                            uVar6 = *(uint *)(unaff_EBP + -0x30);
                          }
                        }
                        pfVar10 = pfVar10 + 4;
                        *(uint *)(unaff_EBP + -0x34) = uVar6;
                      } while (uVar6 < *(uint *)(unaff_EBP + -0x4c));
                    }
                    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
                    *(int **)(unaff_EBP + -0x3c) = piVar4;
                  } while (piVar4 < *(int **)(unaff_EBP + -0x50));
                  piVar4 = *(int **)(unaff_EBP + -0x18);
                }
                for (piVar9 = *(int **)(unaff_EBP + -0x54); piVar9 < piVar4; piVar9 = piVar9 + 2) {
                  piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + *piVar9 * 0xc);
                  piVar8 = piVar1 + 2;
                  *piVar8 = *piVar8 + -1;
                  if (*piVar8 == 0) {
                    piVar8 = (int *)extraout_ECX[1];
                    *(undefined4 *)(unaff_EBP + -0x10) = 0;
                    if (piVar8[0x417] != 0) {
                      do {
                        (**(code **)(*piVar8 + 8))
                                  (*(undefined4 *)(unaff_EBP + -0x10),*piVar9,
                                   piVar8[0x416] * *(int *)(unaff_EBP + -0x10) * 0x10 + *piVar1);
                        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                        piVar8 = (int *)extraout_ECX[1];
                      } while (*(uint *)(unaff_EBP + -0x10) < (uint)piVar8[0x417]);
                      piVar4 = *(int **)(unaff_EBP + -0x18);
                    }
                    piVar1[1] = *(int *)(unaff_EBP + -0x20);
                    *(int **)(unaff_EBP + -0x20) = piVar1;
                  }
                }
                *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + 1;
              } while (piVar4 < *(int **)(unaff_EBP + -0x24));
            }
            uVar11 = 0;
            goto LAB_50414e13;
          }
        }
LAB_50414e07:
        uVar11 = 0x8007000e;
        goto LAB_50414e13;
      }
    }
  }
  uVar11 = 0x80004005;
LAB_50414e13:
  if (*(void **)(unaff_EBP + -0x58) != (void *)0x0) {
    FUN_5041499c(*(void **)(unaff_EBP + -0x58),3);
  }
  FUN_504018c9(*(undefined4 **)(unaff_EBP + -0x28));
  FUN_504018c9(*(undefined4 **)(unaff_EBP + -0x2c));
  FUN_504018c9(*(undefined4 **)(unaff_EBP + -0x44));
  FUN_504018c9(*(undefined4 **)(unaff_EBP + -0x5c));
  FUN_504018c9((undefined4 *)0x0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar11;
}


