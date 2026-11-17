/* FUN_004ccdcc - 0x004ccdcc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ccdcc(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar6;
  bool bVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978368;
  iVar5 = DAT_00978358;
  bVar7 = DAT_00978358 != 0;
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  if (bVar7) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined ***)(unaff_EBP + -0x70) = &PTR_FUN_008ea348;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar6 + 4 + *(int *)(iVar5 + 0x1744));
      *(int *)(unaff_EBP + -0x14) = iVar1;
      if (iVar1 == 0) break;
      iVar1 = FUN_004cd670(iVar1 + 0x148,*(undefined4 *)(iVar1 + 0x150));
      if (iVar1 != 0) {
        FUN_004cd5ca(unaff_EBP + -0x14);
        piVar2 = (int *)FUN_004cd1b8(unaff_EBP + -0x28);
        *(undefined4 *)((-(uint)(*piVar2 != 0) & *piVar2 - 0xcU) + 0x24c) = 0;
        FUN_004125d9();
      }
      iVar6 = iVar6 + 8;
    } while (iVar6 < 0x18);
    if (*(int *)(unaff_EBP + -0x68) != 0) {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 4) + 0x10))();
      uVar4 = puVar3[1];
      *(undefined4 *)(unaff_EBP + -0x44) = *puVar3;
      *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
      uVar4 = FUN_007d1e08();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x2c);
      if (iVar5 != 0) {
        do {
          iVar6 = *(int *)((-(uint)(iVar5 != 0) & iVar5 - 0x10U) + 4);
          uVar4 = *(undefined4 *)(iVar5 + 4);
          *(uint *)(unaff_EBP + -0x28) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
          *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
          FUN_004cd4d5();
          iVar5 = *(int *)(unaff_EBP + -0x38);
          iVar6 = *(int *)(iVar5 + 0x88);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (iVar6 == 0) {
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_004cd4f2();
          }
          else {
            piVar2 = *(int **)(unaff_EBP + -100);
            *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            if (piVar2 != (int *)0x0) {
              do {
                iVar6 = *piVar2;
                *(int **)(unaff_EBP + -0x2c) = piVar2;
                iVar5 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
                piVar2 = (int *)(-(uint)(iVar5 != 0) & iVar5 + 0x10U);
                puVar3 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 4) + 0x10))();
                iVar1 = puVar3[1];
                uVar4 = *(undefined4 *)(iVar6 + 0x144);
                *(undefined4 *)(unaff_EBP + -0x4c) = *puVar3;
                *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x44) + -0x7d;
                *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x44) + 0x7d;
                iVar5 = FUN_004cd670(iVar6 + 0x13c,uVar4);
                if (iVar5 != 0) {
                  *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x5c) + -0x96;
                  *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x54) + 0x96;
                }
                uVar4 = FUN_004cd670(iVar6 + 0x130,*(undefined4 *)(iVar6 + 0x138));
                *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
                iVar5 = *(int *)(unaff_EBP + -0x38);
                if (*(int *)(iVar5 + 0x30) == 0) {
                  iVar5 = FUN_004cd670(iVar6 + 0x124,*(undefined4 *)(iVar6 + 300));
                  if (((iVar5 != 0) || (*(int *)(unaff_EBP + -0x18) != 0)) &&
                     (iVar5 = FUN_005545a2(*(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x34)),
                     iVar5 == 0)) {
                    iVar5 = *(int *)(unaff_EBP + -0x38);
                    goto LAB_004ccfc8;
                  }
LAB_004cd0dd:
                  iVar5 = *(int *)(unaff_EBP + -0x38);
                }
                else {
LAB_004ccfc8:
                  if ((((15000 < *(int *)(unaff_EBP + -0x24) - *(int *)(iVar5 + 0x40)) &&
                       (*(int *)(unaff_EBP + -0x18) != 0)) || (*(int *)(iVar5 + 0x28) == 0)) ||
                     (((*(int *)(iVar5 + 0x2c) != 0 ||
                       (*(int *)(iVar5 + 0x24) == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2088)))
                      && ((*(int *)(iVar5 + 0x2c) != 1 ||
                          (*(int *)(iVar5 + 0x24) == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2b40))
                          ))))) {
                    if (iVar6 != 0) {
                      iVar5 = FUN_004cd670(iVar6 + 0x16c,*(undefined4 *)(iVar6 + 0x174));
                      if (iVar5 != 0) {
                        if (*(int *)(*(int *)(unaff_EBP + -0x38) + 0x30) == 0) {
                          uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x34);
                        }
                        else {
                          uVar4 = 0x7fffffff;
                        }
                        iVar5 = FUN_004cd1dd(uVar4);
                        if (iVar5 != 0) goto LAB_004cd0dd;
                      }
                      iVar5 = *(int *)(unaff_EBP + -0x38);
                    }
                    if (((*(char *)(iVar5 + 0x1d) != '\0') && (*(int *)(iVar5 + 0x48) == 3)) &&
                       (2999 < *(int *)(unaff_EBP + -0x24) - *(int *)(iVar5 + 0x54))) {
                      iVar5 = FUN_0045e2eb();
                      if (((iVar1 + -0x32 < iVar5) && (iVar5 = FUN_0045e2eb(), iVar5 < iVar1 + 10))
                         && ((iVar5 = FUN_0045e2eb(), *(int *)(unaff_EBP + -0x5c) < iVar5 &&
                             (iVar5 = FUN_0045e2eb(), iVar5 < *(int *)(unaff_EBP + -0x54))))) {
                        iVar5 = FUN_0045e2eb();
                        iVar5 = FUN_0087a90a(iVar5 - *(int *)(unaff_EBP + -0x4c));
                        if ((*(int *)(unaff_EBP + -0x10) == -1) ||
                           (iVar5 < *(int *)(unaff_EBP + -0x10))) {
                          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
                          *(int *)(unaff_EBP + -0x10) = iVar5;
                        }
                      }
                      goto LAB_004cd0dd;
                    }
                  }
                }
              } while (piVar2 != (int *)0x0);
              if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
                piVar2 = (int *)(**(code **)(*(int *)(**(int **)(unaff_EBP + -0x14) + 4) + 0x10))();
                iVar5 = *piVar2;
                *(int *)(unaff_EBP + -0x2c) = piVar2[1];
                piVar2 = (int *)FUN_004cd1b8(unaff_EBP + -0x34);
                iVar6 = *piVar2;
                *(undefined1 *)(unaff_EBP + -4) = 2;
                iVar1 = FUN_0045e2eb();
                *(undefined1 *)(unaff_EBP + -4) = 1;
                *(uint *)((-(uint)(iVar6 != 0) & iVar6 - 0xcU) + 0x24c) =
                     ((iVar1 <= iVar5) - 1 & 2) - 1;
                piVar2 = *(int **)(unaff_EBP + -0x34);
                if (piVar2 != (int *)0x0) {
                  (**(code **)(*piVar2 + 8))(piVar2);
                }
                FUN_004cde1d(*(undefined4 *)(unaff_EBP + -0x14));
                iVar5 = *(int *)(unaff_EBP + -0x38);
              }
            }
            if (*(int *)(unaff_EBP + -0x68) == 0) {
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (iVar5 != 0) {
                FUN_004cd5da(0);
                *(undefined4 *)(unaff_EBP + -0x38) = 0;
              }
              break;
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (iVar5 != 0) {
              FUN_004cd5da(0);
              *(undefined4 *)(unaff_EBP + -0x38) = 0;
            }
          }
          if (*(int *)(unaff_EBP + -0x28) == 0) break;
          iVar5 = *(int *)(unaff_EBP + -0x28);
        } while( true );
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x70) = &PTR_FUN_008ea348;
    FUN_004cdf2f();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


