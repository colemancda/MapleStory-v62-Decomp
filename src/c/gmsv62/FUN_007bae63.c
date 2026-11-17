/* FUN_007bae63 - 0x007bae63 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bae63(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *extraout_ECX;
  code *pcVar9;
  int unaff_EBP;
  uint uVar10;
  bool bVar11;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + 8);
  uVar2 = FUN_007d1e08();
  uVar5 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  iVar3 = FUN_004becbc(300,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00455c59(unaff_EBP + -0x2c);
    uVar5 = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    iVar3 = FUN_00650dae(uVar5,*(undefined4 *)(unaff_EBP + -0x10),0);
    if ((0 < iVar3) && ((*(int *)(unaff_EBP + -0x10) / 1000) % 10 != 0)) {
      piVar4 = (int *)FUN_00486ada(unaff_EBP + -0x18);
      uVar10 = -(uint)(*piVar4 != 0) & *piVar4 - 0xcU;
      piVar4 = *(int **)(unaff_EBP + -0x18);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      if (*(code **)(unaff_EBP + -0x10) == ptr_004f5c6a) {
LAB_007baf44:
        iVar3 = FUN_0048bb31(uVar10 + 0x11c,*(undefined4 *)(uVar10 + 0x124));
        if (iVar3 == 0) {
LAB_007baf60:
          iVar3 = FUN_00614c6f();
          if ((((iVar3 == 0) ||
               (iVar3 = FUN_0048bb31(uVar10 + 0x11c,*(undefined4 *)(uVar10 + 0x124)), iVar3 == 0))
              && (((pcVar9 = *(code **)(unaff_EBP + -0x10), pcVar9 != (code *)0x111ae9 &&
                   (((pcVar9 != (code *)0x12a189 && (pcVar9 != (code *)0x142829)) &&
                    (pcVar9 != ptr_004f5c6a)))) ||
                  ((iVar3 = FUN_004b8f25(unaff_EBP + -0x10,unaff_EBP + -0x18), iVar3 == 0 ||
                   (*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + -0x14))))))) &&
             (((*(int *)(unaff_EBP + -0x10) != 0x4dd5cc ||
               ((extraout_ECX[0x7ab] != 0x4dd5cc ||
                (extraout_ECX[0x7b2] <= *(int *)(unaff_EBP + -0x14))))) &&
              ((uVar10 = FUN_0043f6fe(), 0x7fffffff < uVar10 && (extraout_ECX[0x799] == 0)))))) {
            pcVar9 = *(code **)(unaff_EBP + -0x10);
            if (((pcVar9 == (code *)0x312609) || (pcVar9 == (code *)0x2f9f6c)) ||
               (pcVar9 == (code *)0x4faa8c)) {
              iVar3 = FUN_007b04b6();
              if (iVar3 == 0) {
                iVar3 = **(int **)(unaff_EBP + 8) / 1000000;
                iVar7 = FUN_0044dddc(extraout_ECX[0x129]);
                if (((iVar7 == 0x2d) || (iVar7 == 0x2e)) || (iVar7 == 0x31)) {
                  iVar6 = **(int **)(unaff_EBP + 8) / 10000;
                  if (((iVar6 == 0x138) && (iVar7 == 0x2e)) || ((iVar6 == 0x142 && (iVar7 == 0x2d)))
                     ) {
                    uVar5 = FUN_00679d22(unaff_EBP + 8,0xad4);
                    *(undefined4 *)(unaff_EBP + -4) = 0;
                    FUN_00471102(uVar5,0xc);
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    FUN_00414ebb();
                  }
                  else {
                    bVar11 = true;
                    iVar7 = FUN_00732f96(extraout_ECX[0x129]);
                    if ((iVar7 == 0) || ((extraout_ECX[0x14b] & 0xfffffffeU) == 10)) {
LAB_007bb2cd:
                      bVar11 = false;
                    }
                    else {
                      iVar7 = (**(code **)(*extraout_ECX + 4))();
                      iVar7 = FUN_00413367(iVar7 + 0x2b8,*(undefined4 *)(iVar7 + 0x2c0));
                      if (iVar7 == 0) {
                        iVar7 = (**(code **)(*extraout_ECX + 4))();
                        iVar7 = FUN_00413367(iVar7 + 0x654,*(undefined4 *)(iVar7 + 0x65c));
                        if ((iVar7 == 0) &&
                           (iVar7 = FUN_007a22a3(*(undefined4 *)(unaff_EBP + 8),
                                                 *(undefined4 *)(unaff_EBP + 0xc),0,0,0), iVar7 == 0
                           )) {
                          uVar10 = FUN_0043f6fe();
                          if (0x7fffffff < uVar10) {
                            if (iVar3 == 3) {
                              uVar5 = FUN_00679d22(unaff_EBP + -0x18,0xad9);
                              *(undefined4 *)(unaff_EBP + -4) = 1;
                              FUN_00471102(uVar5,0xc);
                              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                            }
                            else if (iVar3 == 4) {
                              uVar5 = FUN_00679d22(unaff_EBP + -0x18,0xada);
                              *(undefined4 *)(unaff_EBP + -4) = 2;
                              FUN_00471102(uVar5,0xc);
                              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                            }
                            else {
                              if (iVar3 != 5) goto LAB_007bb2cd;
                              uVar5 = FUN_00679d22(unaff_EBP + -0x18,0xad3);
                              *(undefined4 *)(unaff_EBP + -4) = 3;
                              FUN_00471102(uVar5,0xc);
                              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                            }
                            FUN_00414ebb();
                          }
                          goto LAB_007bb2cd;
                        }
                      }
                    }
                    pcVar9 = *(code **)(unaff_EBP + -0x10);
                    if ((pcVar9 == (code *)0x2f9f6c) || (pcVar9 == (code *)0x4faa8c)) {
                      iVar3 = FUN_007a71f1(0,0,unaff_EBP + -0x18,0,0,0,0);
                      if (iVar3 != 0) goto LAB_007bb359;
                      pcVar9 = *(code **)(unaff_EBP + -0x10);
                    }
                    if (bVar11) goto LAB_007bb319;
                    FUN_007a71f1(0,0,0,0,0,0,0);
                  }
                }
              }
            }
            else if ((pcVar9 == ptr_004f5c6a) || (pcVar9 == (code *)0x4dd5cc)) {
              iVar3 = FUN_007b04b6();
              if ((iVar3 != 0) ||
                 (iVar3 = **(int **)(unaff_EBP + 8), iVar7 = FUN_0044dddc(extraout_ECX[0x129]),
                 iVar3 / 1000000 != 5)) goto LAB_007bb359;
              pcVar9 = *(code **)(unaff_EBP + -0x10);
              if (pcVar9 == (code *)0x4dd5cc) {
                if (iVar7 != 0x27) {
                  if (iVar7 != 0x30) goto LAB_007bb359;
                  goto LAB_007bb0ed;
                }
                goto LAB_007bb368;
              }
LAB_007bb0ed:
              if ((pcVar9 != ptr_004f5c6a) || (iVar7 == 0x31)) goto LAB_007bb319;
            }
            else if ((pcVar9 == (code *)0x111ae9) ||
                    ((pcVar9 == (code *)0x12a189 || (pcVar9 == (code *)0x142829)))) {
              iVar3 = FUN_00429303();
              uVar10 = *(uint *)(iVar3 + 0x108) >> 1 & 1;
              *(uint *)(unaff_EBP + -0x24) = uVar10;
              if (uVar10 == 0) goto LAB_007bb316;
            }
            else {
              uVar5 = FUN_0044dddc(extraout_ECX[0x129],*(undefined4 *)(unaff_EBP + 8),
                                   *(undefined4 *)(unaff_EBP + 0xc),0);
              iVar3 = FUN_00654087(extraout_ECX[300],uVar5);
              if (-1 < iVar3) {
LAB_007bb316:
                pcVar9 = *(code **)(unaff_EBP + -0x10);
LAB_007bb319:
                if (pcVar9 == (code *)0x404139) {
                  sVar1 = FUN_0045f084(*(int *)(unaff_EBP + -0x1c) + 0x61,
                                       *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x65));
                  iVar3 = FUN_00413367(*(int *)(unaff_EBP + -0x20) + 0x20fc,
                                       *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x2104));
                  if (0x31 < (sVar1 * 100) / iVar3) goto LAB_007bb359;
                  pcVar9 = *(code **)(unaff_EBP + -0x10);
                }
LAB_007bb368:
                extraout_ECX[0x799] = (int)pcVar9;
                if ((int)pcVar9 < 0x236a6a) {
                  if ((((pcVar9 == (code *)0x236a69) ||
                       ((pcVar9 == (code *)0x111ae9 || (pcVar9 == (code *)0x12a189)))) ||
                      (pcVar9 == (code *)0x142829)) ||
                     ((pcVar9 == (code *)0x205d29 || (pcVar9 == (code *)0x21e3c9)))) {
LAB_007bb3c7:
                    if (extraout_ECX[0x915] == 0) {
                      iVar7 = FUN_007d1e08();
                      iVar3 = *(int *)(unaff_EBP + -0x10);
                      extraout_ECX[0x913] = iVar7;
                      extraout_ECX[0x915] = 1;
                      if ((iVar3 == 0x2f9f6c) || (*(int *)(unaff_EBP + -0x10) == 0x4faa8c)) {
                        FUN_0051548c(0);
                      }
                      else {
                        FUN_007b0d68();
                      }
                    }
                  }
                }
                else if ((((pcVar9 == (code *)0x2f9f6c) || (pcVar9 == (code *)0x312609)) ||
                         (pcVar9 == (code *)0x4dd5cc)) ||
                        ((pcVar9 == ptr_004f5c6a || (pcVar9 == (code *)0x4faa8c))))
                goto LAB_007bb3c7;
                (**(code **)(*extraout_ECX + 4))();
                iVar3 = (**(code **)(*extraout_ECX + 4))();
                uVar5 = FUN_00413367(iVar3 + 0x204,*(undefined4 *)(iVar3 + 0x20c));
                iVar3 = extraout_ECX[0x12f];
                *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
                uVar5 = FUN_00413367(extraout_ECX + 0x12d,iVar3);
                *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
                puVar8 = (undefined4 *)FUN_004c2648();
                uVar5 = FUN_00653336(*(undefined4 *)(unaff_EBP + -0x1c),0,
                                     *(undefined4 *)(unaff_EBP + -0x20),*puVar8);
                extraout_ECX[0x14c] = *(int *)(*(int *)(unaff_EBP + 8) + 0x1c);
                (**(code **)(extraout_ECX[0x1e] + 0x10))(uVar5,100,extraout_ECX[0x915]);
                extraout_ECX[0x14a] = 5000;
                iVar3 = FUN_007d1e08();
                extraout_ECX[0x79a] = iVar3;
                pcVar9 = (code *)extraout_ECX[0x799];
                if ((int)pcVar9 < 0x236a6a) {
                  if (((pcVar9 != (code *)0x236a69) && (pcVar9 != (code *)0x111ae9)) &&
                     ((pcVar9 != (code *)0x12a189 &&
                      ((pcVar9 != (code *)0x142829 && (pcVar9 != (code *)0x205d29)))))) {
                    bVar11 = pcVar9 == (code *)0x21e3c9;
LAB_007bb4ec:
                    if (!bVar11) {
                      uVar10 = FUN_0043f6fe();
                      extraout_ECX[0x79a] =
                           extraout_ECX[0x79a] +
                           extraout_ECX[(uint)(uVar10 < 0x80000000) * 0xfd + 0x14f];
                    }
                  }
                }
                else if ((((pcVar9 != (code *)0x2f9f6c) && (pcVar9 != (code *)0x312609)) &&
                         (pcVar9 != (code *)0x4dd5cc)) && (pcVar9 != ptr_004f5c6a)) {
                  bVar11 = pcVar9 == (code *)0x4faa8c;
                  goto LAB_007bb4ec;
                }
                uVar2 = *(undefined4 *)(unaff_EBP + 8);
                extraout_ECX[0x79b] = extraout_ECX[0x915];
                FUN_0079305e(uVar2,uVar5,0,0);
                pcVar9 = *(code **)(unaff_EBP + -0x10);
                if ((((pcVar9 == (code *)0x111ae9) || (pcVar9 == (code *)0x12a189)) ||
                    (pcVar9 == (code *)0x142829)) || (pcVar9 == ptr_004f5c6a)) {
                  iVar3 = FUN_007a9287(pcVar9);
                  *(int *)(unaff_EBP + -0x24) = iVar3 + *(int *)(unaff_EBP + -0x14);
                  FUN_004b8f75(unaff_EBP + -0x10,unaff_EBP + -0x24);
                }
                FUN_0060142b(0x55,0,0);
                *(undefined4 *)(unaff_EBP + -4) = 4;
                FUN_00457d37(*(undefined4 *)(unaff_EBP + -0x10));
                FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
                FUN_00457cda(CONCAT31((int3)((uint)extraout_ECX[0x14b] >> 8),
                                      (char)extraout_ECX[0x14b] << 7 |
                                      *(byte *)(extraout_ECX + 0x14c) & 0x7f));
                FUN_00457cda(uVar5);
                FUN_004751b2(unaff_EBP + -0x3c);
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_0045ebca();
                uVar5 = 1;
                goto LAB_007bb5da;
              }
            }
          }
        }
      }
      else if ((*(int *)(uVar10 + 0x110) != 0) || (iVar3 = FUN_00614c6f(), iVar3 != 0)) {
        if (*(code **)(unaff_EBP + -0x10) == ptr_004f5c6a) goto LAB_007baf44;
        goto LAB_007baf60;
      }
    }
  }
LAB_007bb359:
  uVar5 = 0;
LAB_007bb5da:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


