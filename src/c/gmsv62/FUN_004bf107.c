/* FUN_004bf107 - 0x004bf107 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004bf107(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int *piVar10;
  bool bVar11;
  int iStack_484;
  int iStack_480;
  int iStack_47c;
  undefined1 *puStack_478;
  code *pcStack_474;
  
  FUN_00879bb8();
  bVar11 = DAT_00979178 == 0;
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  if (bVar11) {
    pcStack_474 = (code *)0x1;
    puStack_478 = (undefined1 *)0x4bf132;
    iVar1 = FUN_004c2076();
    uVar9 = DAT_00978368;
    if (iVar1 != 0) {
      *(int **)(unaff_EBP + -0x28) = DAT_00978358;
      pcStack_474 = (code *)(unaff_EBP + -0x40);
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar9;
      puStack_478 = (undefined1 *)0x4bf156;
      iVar1 = FUN_00455c59();
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 4);
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        pcStack_474 = (code *)0x0;
        puStack_478 = (undefined1 *)0x4bf16a;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      }
      pcStack_474 = (code *)0x0;
      puStack_478 = (undefined1 *)0x1f4;
      iStack_47c = 0x4bf17a;
      iVar1 = FUN_004becbc();
      if ((iVar1 != 0) && (iVar1 = *(int *)(unaff_EBP + -0x24), *(int *)(iVar1 + 0x10) == 1)) {
        if (*(int *)(*(int *)(unaff_EBP + 0xc) + 0x59c) == 1) {
          pcStack_474 = *(code **)(unaff_EBP + 0x14);
          puStack_478 = *(undefined1 **)(unaff_EBP + 0x10);
          iStack_47c = 0x4bf1c0;
          iVar1 = FUN_006c15c2();
          *(int *)(unaff_EBP + -0x38) = iVar1;
          if (iVar1 != 0) {
            pcStack_474 = *(code **)(*(int *)(unaff_EBP + -0x24) + 0x14);
            iStack_47c = unaff_EBP + -0x34;
            puStack_478 = (undefined1 *)0x1;
            iStack_480 = 0x4bf1de;
            iVar1 = FUN_00458c4f();
            iVar1 = *(int *)(iVar1 + 4);
            pcStack_474 = (code *)0x4bf1e9;
            FUN_0046575e();
            pcStack_474 = *(code **)(unaff_EBP + -0x38);
            iStack_47c = unaff_EBP + -0x34;
            puStack_478 = (undefined1 *)0x1;
            iStack_480 = 0x4bf1f9;
            iVar2 = FUN_00458c4f();
            *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar2 + 4);
            if (*(int *)(unaff_EBP + -0x30) != 0) {
              pcStack_474 = (code *)0x0;
              puStack_478 = (undefined1 *)0x4bf20d;
              FUN_00449913();
            }
            if (iVar1 != 0) {
              pcStack_474 = (code *)0x4bf220;
              (**(code **)(*DAT_00978358 + 4))();
              pcStack_474 = (code *)0x4bf227;
              iVar2 = FUN_004bf0d4();
              if (iVar2 == 0) {
LAB_004bf26c:
                pcStack_474 = (code *)0x4bf27a;
                iVar2 = FUN_0066127f();
                if (iVar2 == 0) {
                  if (*(int *)(unaff_EBP + 0xc) != 0) {
                    *(int *)(unaff_EBP + 0x14) = iVar1 + 0xc;
                    pcStack_474 = (code *)0x4bf2bd;
                    iVar1 = FUN_0045e2eb();
                    if ((iVar1 / 100 != 0x2b70) || (iVar1 == 0x10f7c0)) {
                      pcStack_474 = (code *)0x4bf2df;
                      iVar1 = FUN_0045e2eb();
                      if ((iVar1 / 100 == 0x2b70) && (iVar1 != 0x10f7c0)) {
                        piVar10 = &DAT_00964178;
                        do {
                          if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x25f + *piVar10 * 8) != 0) {
                            pcStack_474 = (code *)0x4bf30c;
                            iStack_484 = FUN_0045e2eb();
                            if ((iStack_484 / 100 == 0x2b70) && (iStack_484 != 0x10f7c0)) {
                              *(int **)(unaff_EBP + 0xc) = &iStack_484;
                              uVar9 = 0x354;
                              goto LAB_004bf28f;
                            }
                          }
                          piVar10 = piVar10 + 1;
                        } while ((int)piVar10 < 0x964188);
                      }
                    }
                    pcStack_474 = (code *)0x4bf34b;
                    iVar1 = FUN_0045e2eb();
                    if ((iVar1 / 100 != 0x2b78) || (2 < iVar1 % 10)) {
                      pcStack_474 = (code *)0x4bf374;
                      iVar1 = FUN_0045e2eb();
                      if ((iVar1 / 100 == 0x2b78) && (iVar1 % 10 < 3)) {
                        piVar10 = &DAT_00964178;
                        do {
                          if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x25f + *piVar10 * 8) != 0) {
                            pcStack_474 = (code *)0x4bf3aa;
                            iVar1 = FUN_0045e2eb();
                            if ((iVar1 / 100 == 0x2b78) && (iVar1 % 10 < 3)) {
                              iStack_484 = 10;
                              *(int **)(unaff_EBP + 0xc) = &iStack_484;
                              uVar9 = 0x355;
                              goto LAB_004bf28f;
                            }
                          }
                          piVar10 = piVar10 + 1;
                        } while ((int)piVar10 < 0x964188);
                      }
                    }
                    pcStack_474 = (code *)0x4bf3ee;
                    iVar1 = FUN_0045e2eb();
                    if ((((iVar1 != 0x10fae3) && (iVar1 != 0x10fae6)) && (iVar1 != 0x10fae7)) &&
                       (iVar1 != 0x10fae9)) {
                      pcStack_474 = (code *)0x4bf425;
                      iVar1 = FUN_0045e2eb();
                      if (((iVar1 == 0x10fae3) || (iVar1 == 0x10fae6)) ||
                         ((iVar1 == 0x10fae7 || (iVar1 == 0x10fae9)))) {
                        piVar10 = &DAT_00964178;
                        do {
                          if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x25f + *piVar10 * 8) != 0) {
                            pcStack_474 = (code *)0x4bf458;
                            iVar1 = FUN_0045e2eb();
                            if (((iVar1 == 0x10fae3) || (iVar1 == 0x10fae6)) ||
                               ((iVar1 == 0x10fae7 || (iVar1 == 0x10fae9)))) {
                              *(int **)(unaff_EBP + 0xc) = &iStack_484;
                              uVar9 = 0x105b;
                              iStack_484 = extraout_ECX_01;
                              goto LAB_004bf28f;
                            }
                          }
                          piVar10 = piVar10 + 1;
                        } while ((int)piVar10 < 0x964188);
                      }
                    }
                    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x14);
                    if (iVar1 < -100) {
                      iVar1 = -100 - iVar1;
                    }
                    else {
                      iVar1 = -iVar1;
                    }
                    uVar9 = *(undefined4 *)(unaff_EBP + 0xc);
                    *(int *)(unaff_EBP + -0x30) = iVar1;
                    pcStack_474 = (code *)0x4bf4b4;
                    iStack_47c = FUN_0045e2eb();
                    iVar2 = *(int *)(unaff_EBP + -0x10);
                    pcStack_474 = (code *)(uint)*(byte *)(iVar2 + 0x11);
                    *(int *)(unaff_EBP + 0x10) = iStack_47c;
                    iStack_480 = 0x4bf4c6;
                    puStack_478 = (undefined1 *)iVar1;
                    iVar3 = FUN_0044d79d();
                    if (iVar3 == 0) goto LAB_004bf7bc;
                    puStack_478 = (undefined1 *)0x4bf4dd;
                    pcStack_474 = (code *)uVar9;
                    iVar3 = FUN_004c213a();
                    if (iVar3 == 0) {
                      iVar2 = iVar2 + 0xd3;
                    }
                    else {
                      iVar2 = iVar2 + 0x25b;
                    }
                    pcStack_474 = *(code **)(unaff_EBP + 0x10);
                    iStack_47c = 0x4bf500;
                    puStack_478 = (undefined1 *)iVar2;
                    iVar3 = FUN_004c23c9();
                    if (iVar3 == 0) {
                      pcStack_474 = *(code **)(unaff_EBP + 0x10);
                      iStack_47c = 0x4bf50f;
                      puStack_478 = (undefined1 *)iVar2;
                      iVar3 = FUN_004c2450();
                    }
                    *(int *)(unaff_EBP + 0x14) = iVar3;
                    if (iVar3 != 0) {
                      pcStack_474 = (code *)0x1;
                      puStack_478 = (undefined1 *)0x4bf520;
                      iVar2 = FUN_0048aa38();
                      if (iVar2 == 0) goto LAB_004bf7bc;
                    }
                    pcStack_474 = FUN_00449716;
                    puStack_478 = &LAB_004c252c;
                    iStack_47c = 0x31;
                    iStack_480 = 8;
                    iStack_484 = unaff_EBP + -0x470;
                    FUN_0087b2f0();
                    *(undefined4 *)(unaff_EBP + -4) = 0;
                    pcStack_474 = FUN_00449716;
                    puStack_478 = &LAB_004c252c;
                    iStack_47c = 0x31;
                    iStack_480 = 8;
                    iStack_484 = unaff_EBP + -0x2e8;
                    FUN_0087b2f0();
                    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
                    *(undefined1 *)(unaff_EBP + -4) = 2;
                    if (iVar1 == 0xe) {
                      pcStack_474 = (code *)0x0;
                      puStack_478 = (undefined1 *)(unaff_EBP + -0x18);
                      iStack_47c = 0x4bf576;
                      pcStack_474 = (code *)FUN_0078c04f();
                      *(undefined1 *)(unaff_EBP + -4) = 3;
                      puStack_478 = (undefined1 *)0x4bf583;
                      FUN_004c2596();
                      iVar1 = *(int *)(unaff_EBP + -0x14);
                      *(undefined1 *)(unaff_EBP + -4) = 2;
joined_r0x004bf5eb:
                      if (iVar1 != 0) {
                        pcStack_474 = (code *)0x0;
                        puStack_478 = (undefined1 *)0x4bf5f7;
                        FUN_004c26f7();
                      }
                    }
                    else {
                      if (iVar1 == 0x1e) {
                        pcStack_474 = (code *)0x1;
                        puStack_478 = (undefined1 *)(unaff_EBP + -0x18);
                        iStack_47c = 0x4bf5a5;
                        pcStack_474 = (code *)FUN_0078c04f();
                        *(undefined1 *)(unaff_EBP + -4) = 4;
                        puStack_478 = (undefined1 *)0x4bf5b2;
                        FUN_004c2596();
                        iVar1 = *(int *)(unaff_EBP + -0x14);
                        *(undefined1 *)(unaff_EBP + -4) = 2;
                        goto joined_r0x004bf5eb;
                      }
                      if (iVar1 == 0x26) {
                        pcStack_474 = (code *)0x2;
                        puStack_478 = (undefined1 *)(unaff_EBP + -0x18);
                        iStack_47c = 0x4bf5d6;
                        pcStack_474 = (code *)FUN_0078c04f();
                        *(undefined1 *)(unaff_EBP + -4) = 5;
                        puStack_478 = (undefined1 *)0x4bf5e3;
                        FUN_004c2596();
                        iVar1 = *(int *)(unaff_EBP + -0x14);
                        *(undefined1 *)(unaff_EBP + -4) = 2;
                        goto joined_r0x004bf5eb;
                      }
                    }
                    pcStack_474 = FUN_004c2558;
                    puStack_478 = &LAB_004c256e;
                    iStack_47c = 3;
                    iStack_480 = 8;
                    iStack_484 = unaff_EBP + -0x58;
                    FUN_0087b2f0();
                    *(undefined4 *)(unaff_EBP + 0xc) = 0;
                    *(undefined1 *)(unaff_EBP + -4) = 6;
                    do {
                      pcStack_474 = *(code **)(unaff_EBP + 0xc);
                      puStack_478 = (undefined1 *)(unaff_EBP + -0x18);
                      iStack_47c = 0x4bf629;
                      pcStack_474 = (code *)FUN_0078c04f();
                      *(undefined1 *)(unaff_EBP + -4) = 7;
                      puStack_478 = (undefined1 *)0x4bf635;
                      FUN_004c2596();
                      *(undefined1 *)(unaff_EBP + -4) = 6;
                      if (*(int *)(unaff_EBP + -0x14) != 0) {
                        pcStack_474 = (code *)0x0;
                        puStack_478 = (undefined1 *)0x4bf649;
                        FUN_004c26f7();
                        *(undefined4 *)(unaff_EBP + -0x14) = 0;
                      }
                      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
                    } while (*(int *)(unaff_EBP + 0xc) < 3);
                    iVar1 = *(int *)(unaff_EBP + -0x2c);
                    pcStack_474 = *(code **)(iVar1 + 0x26b0);
                    puStack_478 = (undefined1 *)(iVar1 + 0x26a8);
                    iStack_47c = 0x4bf66e;
                    iStack_484 = FUN_00413367();
                    iStack_47c = *(int *)(unaff_EBP + 0x14);
                    iStack_480 = *(undefined4 *)(unaff_EBP + -0x30);
                    FUN_00662ab1(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x58,
                                 unaff_EBP + -0x470,unaff_EBP + -0x2e8);
                    pcStack_474 = (code *)0x4bf69d;
                    FUN_004bf8a2();
                    pcStack_474 = (code *)0x4bf6a8;
                    FUN_00660de8();
                    pcStack_474 = *(code **)(iVar1 + 0x26b0);
                    puStack_478 = (undefined1 *)(iVar1 + 0x26a8);
                    iStack_47c = 0x4bf6ba;
                    pcStack_474 = (code *)FUN_00413367();
                    puStack_478 = (undefined1 *)0x0;
                    iStack_47c = 0;
                    iStack_480 = unaff_EBP + -0x2e8;
                    iStack_484 = unaff_EBP + -0x470;
                    FUN_00663261(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x160);
                    pcStack_474 = *(code **)(unaff_EBP + 0x10);
                    iStack_480 = unaff_EBP + -0x20;
                    *(int **)(unaff_EBP + 0xc) = &iStack_47c;
                    iStack_484 = 0x4bf6f7;
                    FUN_004c2575();
                    *(undefined1 *)(unaff_EBP + -4) = 6;
                    iStack_480 = 0x4bf706;
                    iStack_480 = FUN_004bf893();
                    iStack_484 = 0x4bf712;
                    iStack_484 = FUN_004bf884();
                    uVar9 = FUN_004bf875();
                    uVar4 = FUN_004bf866(uVar9);
                    uVar5 = FUN_004bf857(uVar4);
                    uVar6 = FUN_004bf848(uVar5);
                    uVar7 = FUN_004bf839(uVar6);
                    uVar8 = FUN_004bf82d(uVar7);
                    FUN_0048b97b(uVar8);
                    iVar1 = FUN_004c216d(uVar8,uVar7,uVar6,uVar5,uVar4,uVar9);
                    pcStack_474 = FUN_004c2558;
                    *(undefined1 *)(unaff_EBP + -4) = 2;
                    puStack_478 = (undefined1 *)0x3;
                    iStack_47c = 8;
                    iStack_480 = unaff_EBP + -0x58;
                    if (iVar1 == 0) {
                      iStack_484 = 0x4bf77d;
                      FUN_0087a0b8();
                      *(undefined1 *)(unaff_EBP + -4) = 1;
                      if (*(int *)(unaff_EBP + -0x1c) != 0) {
                        pcStack_474 = (code *)0x0;
                        puStack_478 = (undefined1 *)0x4bf78f;
                        FUN_004c26f7();
                        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
                      }
                      *(undefined1 *)(unaff_EBP + -4) = 0;
                      pcStack_474 = FUN_00449716;
                      puStack_478 = (undefined1 *)0x31;
                      iStack_47c = 8;
                      iStack_480 = unaff_EBP + -0x2e8;
                      iStack_484 = 0x4bf7a7;
                      FUN_0087a0b8();
                      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                      pcStack_474 = FUN_00449716;
                      puStack_478 = (undefined1 *)0x31;
                      iStack_47c = 8;
                      iStack_480 = unaff_EBP + -0x470;
                      iStack_484 = 0x4bf7bc;
                      FUN_0087a0b8();
                      goto LAB_004bf7bc;
                    }
                    iStack_484 = 0x4bf7c5;
                    FUN_0087a0b8();
                    *(undefined1 *)(unaff_EBP + -4) = 1;
                    if (*(int *)(unaff_EBP + -0x1c) != 0) {
                      pcStack_474 = (code *)0x0;
                      puStack_478 = (undefined1 *)0x4bf7d7;
                      FUN_004c26f7();
                      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    pcStack_474 = FUN_00449716;
                    puStack_478 = (undefined1 *)0x31;
                    iStack_47c = 8;
                    iStack_480 = unaff_EBP + -0x2e8;
                    iStack_484 = 0x4bf7ef;
                    FUN_0087a0b8();
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    pcStack_474 = FUN_00449716;
                    puStack_478 = (undefined1 *)0x31;
                    iStack_47c = 8;
                    iStack_480 = unaff_EBP + -0x470;
                    iStack_484 = 0x4bf804;
                    FUN_0087a0b8();
                  }
                  pcStack_474 = (code *)0xffffffff;
                  puStack_478 = *(undefined1 **)(unaff_EBP + -0x38);
                  iStack_47c = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x14);
                  iStack_480 = 1;
                  iStack_484 = 0x4bf819;
                  FUN_008347d4();
                  uVar9 = 1;
                  goto LAB_004bf81c;
                }
                *(int **)(unaff_EBP + 0xc) = &iStack_484;
                uVar9 = 0x35b;
                iStack_484 = extraout_ECX_00;
LAB_004bf28f:
                pcStack_474 = (code *)0x0;
                puStack_478 = (undefined1 *)0x0;
                iStack_47c = 0;
                iStack_480 = 0;
                FUN_00679d22(&iStack_484,uVar9);
                FUN_007db3ad();
              }
              else {
                pcStack_474 = (code *)0x4bf235;
                iVar2 = FUN_0045e2eb();
                if (iVar2 / 10000 != 0xbe) {
                  pcStack_474 = (code *)0x4bf24d;
                  iVar2 = FUN_0045e2eb();
                  if (iVar2 / 10000 != 0xbf) goto LAB_004bf26c;
                }
                pcStack_474 = (code *)0x3ec;
                puStack_478 = (undefined1 *)0x4bf267;
                FUN_007bd2b0();
              }
            }
          }
        }
        else {
          pcStack_474 = (code *)0x0;
          puStack_478 = (undefined1 *)0x4bf1a1;
          FUN_006c061a();
          puStack_478 = *(undefined1 **)(iVar1 + 0x1c);
          iStack_47c = 0x4bf1b0;
          pcStack_474 = (code *)iVar1;
          FUN_0081820c();
        }
      }
    }
  }
LAB_004bf7bc:
  uVar9 = 0;
LAB_004bf81c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar9;
}


