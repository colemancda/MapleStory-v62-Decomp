/* FUN_007b8688 - 0x007b8688 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b8688(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  int unaff_EBP;
  code *pcVar10;
  code *pcVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x1ed8) = 0;
  uVar5 = DAT_00978368;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  iVar2 = FUN_00455c59(unaff_EBP + -0x58);
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(unaff_EBP + -0x34) = iVar2;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x14) + 0x209c;
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14) + 0x2114;
  iVar3 = FUN_00429303();
  uVar4 = -(uint)(iVar3 != 0) & iVar3 + 0xcU;
  *(uint *)(unaff_EBP + -0x5c) = -(uint)(uVar4 != 0) & uVar4 - 0xc;
  FUN_004f17e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcVar11 = *(code **)(unaff_EBP + 8);
  if ((*(int *)(unaff_EBP + -0x5c) != 0) && (iVar3 = FUN_004f1208(pcVar11), iVar3 != 0)) {
    uVar5 = FUN_00679d22(unaff_EBP + 8,0x361);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar5,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_007b9dd1;
  }
  if ((pcVar11 != (code *)0x4f7f90) && ((pcVar11 != ptr_004fa6a2 && (pcVar11 != (code *)0x4fa6ab))))
  {
    if (pcVar11 == (code *)&DAT_004c4f2b) {
      pcVar10 = (code *)0x4f7f90;
LAB_007b8797:
      iVar3 = FUN_00650dae(iVar2,pcVar11,0);
      if ((0 < iVar3) && (iVar3 = FUN_00650dae(iVar2,pcVar10,0), 0 < iVar3)) {
        *(code **)(unaff_EBP + 8) = pcVar10;
        pcVar11 = pcVar10;
      }
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
    else {
      if (pcVar11 == (code *)0x4f8379) {
        pcVar10 = ptr_004fa6a2;
        goto LAB_007b8797;
      }
      iVar3 = extraout_ECX;
      if (pcVar11 == (code *)0x4f837e) {
        pcVar10 = (code *)0x4fa6ab;
        goto LAB_007b8797;
      }
    }
    if (((((*(int *)(iVar3 + 0x24d8) == 0) && (*(int *)(iVar3 + 0x17a8) < 1)) &&
         (iVar6 = FUN_007b3bb4(), iVar6 == 0)) &&
        ((iVar6 = FUN_007a3f46(), iVar6 == 0 || (iVar6 = FUN_00653d79(pcVar11), iVar6 != 0)))) &&
       (*(int *)(iVar3 + 0x1e64) == 0)) {
      iVar6 = *(int *)(iVar3 + 0x4fc) / 10000;
      if ((iVar6 == 0xbe) || (iVar6 == 0xc1)) {
        if ((int)pcVar11 < 0x4fa6a3) {
          if (pcVar11 != ptr_004fa6a2) {
            if (pcVar11 == (code *)0x3ec) {
              iVar2 = FUN_004bf0d4();
              if (iVar2 != 0) {
                uVar5 = 0x3ec;
LAB_007b889c:
                FUN_007bd2b0(uVar5);
                uVar5 = 1;
                goto LAB_007b9dd8;
              }
            }
            else {
              if ((0x4f5c69 < (int)pcVar11) &&
                 (((int)pcVar11 < 0x4f5c6c ||
                  ((0x4f8378 < (int)pcVar11 &&
                   (((int)pcVar11 < 0x4f837b ||
                    ((0x4f837b < (int)pcVar11 && ((int)pcVar11 < 0x4f837e))))))))))
              goto LAB_007b88ee;
LAB_007b88ca:
              FUN_007b3c5d();
            }
            goto LAB_007b9dd6;
          }
        }
        else if (pcVar11 != (code *)0x4faa88) {
          if (pcVar11 == (code *)0x4faa8e) {
            iVar2 = FUN_00793618();
            if (iVar2 != 0) {
              uVar5 = 0x4faa8e;
              goto LAB_007b889c;
            }
            goto LAB_007b9dd6;
          }
          if (((int)pcVar11 < 0x4faa8f) ||
             ((0x4faa90 < (int)pcVar11 && (pcVar11 != (code *)0x4faa92)))) goto LAB_007b88ca;
        }
LAB_007b88ee:
        iVar6 = FUN_00793618();
        if (iVar6 == 0) goto LAB_007b9dd6;
      }
      if ((((*(int *)(iVar3 + 0x4f4) == 0) && (iVar6 = FUN_0043fb62(), iVar6 == 0)) &&
          (iVar6 = FUN_0043fb93(), iVar6 == 0)) && (*(int *)(iVar3 + 0x17ac) < 1)) {
        iVar6 = FUN_0043f79a();
        if ((((((iVar6 == 0) || (pcVar11 == ptr_004e23ec)) ||
              ((pcVar11 == ptr_004dfcda ||
               ((pcVar11 == ptr_004e23ec || (pcVar11 == (code *)0x4dd5ce)))))) ||
             (pcVar11 == (code *)&DAT_004e23e8)) ||
            (((pcVar11 == ptr_004e23ec || (pcVar11 == ptr_004e23ec)) || (pcVar11 == ptr_004e23ec))))
           || ((pcVar11 == ptr_004dfcda || (pcVar11 == ptr_004dfcda)))) {
          uVar4 = FUN_0045e4b8();
          if (((((uVar4 & 1) != 0) || (pcVar11 == (code *)0x234359)) ||
              (iVar6 = FUN_007a3f27(), iVar6 == 0)) && (iVar6 = FUN_004becbc(200,0), iVar6 != 0)) {
            uVar5 = FUN_0044dddc(*(undefined4 *)(iVar3 + 0x4a4));
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
            iVar3 = FUN_00650dae(iVar2,pcVar11,unaff_EBP + -0x18);
            *(int *)(unaff_EBP + -0x1c) = iVar3;
            if (0 < iVar3) {
              iVar3 = FUN_006509a1(iVar3);
              iVar3 = FUN_00413367(iVar3 + 0x1bc,*(undefined4 *)(iVar3 + 0x1c4));
              if (iVar3 != 0) {
                *(code **)(unaff_EBP + -0x30) = pcVar11;
                iVar3 = FUN_004b8f25(unaff_EBP + -0x30,0);
                if (iVar3 != 0) {
                  uVar5 = FUN_00679d22(unaff_EBP + 8,0xdc6);
                  *(undefined1 *)(unaff_EBP + -4) = 4;
                  FUN_00471102(uVar5,0xc);
                  *(undefined1 *)(unaff_EBP + -4) = 0;
                  goto LAB_007b9dd1;
                }
              }
              sVar1 = FUN_0045f084(iVar2 + 0x61,*(undefined4 *)(iVar2 + 0x65));
              uVar5 = *(undefined4 *)(iVar2 + 0x75);
              *(int *)(unaff_EBP + -0x4c) = (int)sVar1;
              sVar1 = FUN_0045f084(iVar2 + 0x71,uVar5);
              *(int *)(unaff_EBP + -0x50) = (int)sVar1;
              iVar3 = FUN_006527da(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),
                                   *(undefined4 *)(unaff_EBP + -0x28),pcVar11);
              if (iVar3 != 0) {
                if (iVar3 == 1) {
                  iVar3 = FUN_007b3ba0();
                  if (iVar3 != 0) {
                    FUN_007bd2b0(&LAB_004c4f2d);
                  }
                  *(undefined4 *)(unaff_EBP + -0x14) = 0;
                  iVar3 = FUN_00653d79(pcVar11);
                  if (iVar3 != 0) goto LAB_007b918f;
                  if ((int)pcVar11 < 0x2dcaac) {
                    if (pcVar11 == (code *)0x2dcaab) goto LAB_007b918f;
                    if ((int)pcVar11 < 0x14282b) {
                      if (pcVar11 == (code *)0x14282a) goto LAB_007b918f;
                      if ((int)pcVar11 < 0x12536f) {
                        if (pcVar11 == (code *)0x12536e) {
LAB_007b99a7:
                          uVar14 = 4;
                          goto LAB_007b9191;
                        }
                        if ((int)pcVar11 < 0x10f3dd) {
                          if (pcVar11 != (code *)0x10f3dc) {
                            if (0xf462d < (int)pcVar11) {
                              if (pcVar11 == (code *)0x10cccc) {
LAB_007b905b:
                                uVar13 = 0x28;
                                uVar5 = 0x1e;
                                goto LAB_007b9ab9;
                              }
                              if (pcVar11 == (code *)0x10cccd) {
                                uVar13 = 0x29;
                                uVar5 = 0x1f;
                                goto LAB_007b9ab9;
                              }
                              if (pcVar11 == (code *)0x10ccce) goto LAB_007b9b4a;
                              if ((pcVar11 == (code *)0x10cccf) || (pcVar11 == (code *)0x10f3da))
                              goto LAB_007b918f;
                              if (pcVar11 == (code *)0x10f3db) goto LAB_007b90b0;
                              goto LAB_007b91ac;
                            }
                            if (0xf462b < (int)pcVar11) goto LAB_007b9341;
                            if (pcVar11 == (code *)0x3e8) {
                              iVar2 = *(int *)(unaff_EBP + -0x20);
                              if (((iVar2 == 0x1e) || (iVar2 == 0x1f)) ||
                                 ((iVar2 == 0x20 ||
                                  (((iVar2 == 0x21 || (iVar2 == 0x25)) || (iVar2 == 0x26))))))
                              goto LAB_007b95cf;
                              uVar5 = FUN_00679d22(unaff_EBP + -0x48,0xdc7);
                              *(undefined1 *)(unaff_EBP + -4) = 0xb;
                              FUN_00471102(uVar5,0xc);
                              *(undefined1 *)(unaff_EBP + -4) = 0;
                              goto LAB_007b901b;
                            }
                            if ((int)pcVar11 < 0x3e9) goto LAB_007b91ac;
                            if ((int)pcVar11 < 0x3eb) goto LAB_007b918f;
                            if (pcVar11 == (code *)0x3eb) {
                              uVar5 = FUN_007bd042();
                              goto LAB_007b919f;
                            }
                            if (pcVar11 != (code *)0x3ec) {
                              if (pcVar11 != (code *)0x3ed) {
                                bVar12 = pcVar11 == (code *)0xf462b;
                                goto LAB_007b97f6;
                              }
                              goto LAB_007b9c1b;
                            }
                            if ((*(int *)(iVar2 + 0x167) == 0) || (*(int *)(iVar2 + 0x16f) == 0)) {
                              uVar5 = FUN_00679d22(unaff_EBP + -0x44,0xe9c);
                              *(undefined1 *)(unaff_EBP + -4) = 0xc;
                              FUN_00471102(uVar5,0xc);
                              *(undefined1 *)(unaff_EBP + -4) = 0;
                            }
                            else {
                              uVar5 = FUN_0045e2eb();
                              uVar5 = FUN_0054e7b3(uVar5);
                              *(undefined4 *)(unaff_EBP + -0x38) = uVar5;
                              uVar5 = FUN_0045e2eb();
                              uVar5 = FUN_0054e7b3(uVar5);
                              *(undefined4 *)(unaff_EBP + -0x3c) = uVar5;
                              iVar3 = *(int *)(iVar2 + 0x177);
                              *(undefined4 *)(unaff_EBP + -0x30) = 0;
                              if (iVar3 != 0) {
                                uVar5 = FUN_0045e2eb();
                                uVar5 = FUN_0054e7b3(uVar5);
                                *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
                              }
                              if (*(int *)(iVar2 + 0x2ef) == 0) {
                                FUN_0048b92c(0);
                                *(undefined4 *)(unaff_EBP + -0x24) = 1;
                                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                              }
                              iVar2 = FUN_0045e2eb();
                              *(undefined4 *)(unaff_EBP + -4) = 0;
                              if (((*(byte *)(unaff_EBP + -0x24) & 1) != 0) &&
                                 (*(uint *)(unaff_EBP + -0x24) =
                                       *(uint *)(unaff_EBP + -0x24) & 0xfffffffe,
                                 *(int *)(unaff_EBP + -100) != 0)) {
                                FUN_00402b41(*(undefined4 *)(unaff_EBP + -100));
                              }
                              if (*(int *)(*(int *)(unaff_EBP + -0x34) + 0x2f7) == 0) {
                                FUN_0048b92c(0);
                                *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) | 2;
                                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                              }
                              iVar3 = FUN_0045e2eb();
                              *(undefined4 *)(unaff_EBP + -4) = 0;
                              if (((*(byte *)(unaff_EBP + -0x24) & 2) != 0) &&
                                 (*(int *)(unaff_EBP + -0x70) != 0)) {
                                FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x70));
                              }
                              if (iVar2 == 0) {
                                if (iVar3 != 0) goto LAB_007b8ef6;
LAB_007b8e48:
                                iVar2 = FUN_00413367(*(int *)(unaff_EBP + -0x38) + 0x170,
                                                     *(undefined4 *)
                                                      (*(int *)(unaff_EBP + -0x38) + 0x178));
                                if (iVar2 != 0) {
                                  iVar3 = FUN_00413367(*(int *)(unaff_EBP + -0x3c) + 0x6c,
                                                       *(undefined4 *)
                                                        (*(int *)(unaff_EBP + -0x3c) + 0x74));
                                  iVar2 = *(int *)(unaff_EBP + -0x10);
                                  if ((iVar3 <= *(int *)(iVar2 + 0x1e3c)) &&
                                     ((iVar3 = *(int *)(unaff_EBP + -0x30), iVar3 == 0 ||
                                      (iVar3 = FUN_00413367(iVar3 + 0x6c,
                                                            *(undefined4 *)(iVar3 + 0x74)),
                                      iVar3 <= *(int *)(iVar2 + 0x1e3c))))) {
                                    iVar2 = FUN_00429303();
                                    uVar4 = *(uint *)(iVar2 + 0x108) >> 9 & 1;
                                    *(uint *)(unaff_EBP + -0x3c) = uVar4;
                                    if (uVar4 == 0) {
                                      uVar4 = FUN_0043f6fe();
                                      if (uVar4 < 0x80000000) goto LAB_007b91ac;
                                      uVar5 = FUN_007ba5ee(*(undefined4 *)(unaff_EBP + -0x18),
                                                           *(undefined4 *)(unaff_EBP + -0x1c),1);
                                      pcVar11 = *(code **)(unaff_EBP + 8);
                                      *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
                                      goto LAB_007b91a2;
                                    }
                                  }
                                }
                                uVar5 = FUN_00679d22(unaff_EBP + -0x40,0xea0);
                                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                                FUN_00471102(uVar5,0xc);
                                *(undefined1 *)(unaff_EBP + -4) = 0;
                              }
                              else if (iVar3 == 0) {
LAB_007b8ef6:
                                *(undefined4 *)(unaff_EBP + -0x20) = 0;
                                FUN_00414edd(s_Please_make_sure_that_the_Saddle_0096c2b4,0xffffffff)
                                ;
                                *(undefined1 *)(unaff_EBP + -4) = 0xf;
                                FUN_00471102(unaff_EBP + -0x20,0xc);
                                *(undefined1 *)(unaff_EBP + -4) = 0;
                              }
                              else {
                                FUN_0054e7b3(iVar3);
                                iVar2 = FUN_004c20da(iVar2);
                                if (iVar2 != 0) goto LAB_007b8e48;
                                *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                                FUN_00414edd(s_Please_make_sure_that_the_Saddle_0096c2b4,0xffffffff)
                                ;
                                *(undefined1 *)(unaff_EBP + -4) = 0x10;
                                FUN_00471102(unaff_EBP + -0x2c,0xc);
                                *(undefined1 *)(unaff_EBP + -4) = 0;
                              }
                            }
LAB_007b901b:
                            FUN_00414ebb();
                            goto LAB_007b91ac;
                          }
LAB_007b909d:
                          if (*(int *)(unaff_EBP + -0x20) != 0x1f) {
                            bVar12 = *(int *)(unaff_EBP + -0x20) == 0x29;
LAB_007b933b:
                            if (!bVar12) goto LAB_007b9c46;
                          }
                        }
                        else if ((int)pcVar11 < 0x111aeb) {
                          if (pcVar11 == (code *)0x111aea) goto LAB_007b918f;
                          if (pcVar11 == (code *)0x10f3dd) {
LAB_007b90b0:
                            if (*(int *)(unaff_EBP + -0x20) != 0x1e) {
                              bVar12 = *(int *)(unaff_EBP + -0x20) == 0x28;
                              goto LAB_007b933b;
                            }
                          }
                          else {
                            if (pcVar11 == (code *)0x10f3de) goto LAB_007b909d;
                            if (pcVar11 == (code *)0x10f3df) goto LAB_007b99a7;
                            if (pcVar11 != (code *)0x10f3e0) {
                              pcVar10 = pcVar11 + -0x111ae8;
                              if (pcVar10 != (code *)0x0) goto LAB_007b96ba;
                              goto LAB_007b9b4a;
                            }
                          }
                        }
                        else if (pcVar11 == (code *)0x111aee) {
                          iVar2 = *(int *)(unaff_EBP + -0x20);
                          if (((iVar2 != 0x1e) && (iVar2 != 0x28)) && (iVar2 != 0x1f)) {
                            bVar12 = iVar2 == 0x29;
                            goto LAB_007b933b;
                          }
                        }
                        else if (pcVar11 != (code *)0x111af0) {
                          if (pcVar11 != (code *)0x111af2) {
                            if (pcVar11 != (code *)0x12536c) {
                              if (pcVar11 != (code *)0x12536d) goto LAB_007b91ac;
                              uVar13 = 0x2a;
                              uVar5 = 0x20;
                              goto LAB_007b9ab9;
                            }
                            goto LAB_007b905b;
                          }
                          goto LAB_007b918f;
                        }
                        goto LAB_007b9341;
                      }
                      if (0x12a18c < (int)pcVar11) {
                        if ((int)pcVar11 < 0x14011d) {
                          if ((int)pcVar11 < 0x140119) {
                            if ((pcVar11 == (code *)0x12a18f) || (pcVar11 == (code *)0x12a191)) {
LAB_007b9246:
                              iVar2 = *(int *)(unaff_EBP + -0x20);
                              if (((iVar2 != 0x1e) && (iVar2 != 0x28)) && (iVar2 != 0x20)) {
                                bVar12 = iVar2 == 0x2a;
                                goto LAB_007b933b;
                              }
                            }
                            else if (pcVar11 != (code *)0x12a193) {
                              if (pcVar11 == (code *)0x13da0c) {
                                uVar13 = 0;
                                uVar5 = 0x2b;
                              }
                              else {
                                if (pcVar11 != (code *)0x13da0d) {
                                  if ((0x13da0d < (int)pcVar11) && ((int)pcVar11 < 0x13da10))
                                  goto LAB_007b9b4a;
                                  goto LAB_007b91ac;
                                }
                                uVar13 = 0;
                                uVar5 = 0x2c;
                              }
                              goto LAB_007b9ab9;
                            }
                          }
                        }
                        else {
                          if ((int)pcVar11 < 0x14011d) goto LAB_007b91ac;
                          if (0x14011e < (int)pcVar11) {
                            if (pcVar11 != (code *)0x14011f) {
                              if (pcVar11 != (code *)0x140120) {
                                if (pcVar11 != (code *)0x142828) {
                                  bVar12 = pcVar11 == (code *)0x142829;
                                  goto LAB_007b96bb;
                                }
                                goto LAB_007b9b4a;
                              }
                              goto LAB_007b918f;
                            }
                            goto LAB_007b99a7;
                          }
LAB_007b9331:
                          if (*(int *)(unaff_EBP + -0x20) != 0x2c) {
                            bVar12 = *(int *)(unaff_EBP + -0x20) == 0x2b;
                            goto LAB_007b933b;
                          }
                        }
                        goto LAB_007b9341;
                      }
                      if (pcVar11 != (code *)0x12a18c) {
                        if ((int)pcVar11 < 0x127a80) {
                          if (pcVar11 != (code *)0x127a7f) {
                            if (pcVar11 == (code *)0x12536f) goto LAB_007b918f;
                            if (pcVar11 == (code *)0x127a7a) goto LAB_007b9246;
                            if (pcVar11 != (code *)0x127a7b) {
                              if (pcVar11 != (code *)0x127a7c) {
                                if (pcVar11 == (code *)0x127a7d) goto LAB_007b917f;
                                if (pcVar11 != (code *)0x127a7e) goto LAB_007b91ac;
                              }
                              goto LAB_007b91d0;
                            }
                          }
                        }
                        else {
                          if (pcVar11 == (code *)0x127a80) goto LAB_007b91d0;
                          if (pcVar11 == (code *)0x127a81) goto LAB_007b99a7;
                          if (pcVar11 == (code *)0x12a188) goto LAB_007b9b4a;
                          if (pcVar11 == (code *)0x12a189) goto LAB_007b9bcc;
                          if (pcVar11 == (code *)0x12a18a) goto LAB_007b918f;
                          if (pcVar11 != (code *)0x12a18b) goto LAB_007b91ac;
                        }
LAB_007b917f:
                        if (*(int *)(unaff_EBP + -0x20) != 0x1e) {
                          bVar12 = *(int *)(unaff_EBP + -0x20) == 0x28;
                          goto LAB_007b9189;
                        }
LAB_007b918f:
                        uVar14 = 1;
                        goto LAB_007b9191;
                      }
LAB_007b91d0:
                      if (*(int *)(unaff_EBP + -0x20) == 0x20) goto LAB_007b918f;
                      bVar12 = *(int *)(unaff_EBP + -0x20) == 0x2a;
LAB_007b9189:
                      if (bVar12) goto LAB_007b918f;
LAB_007b9c46:
                      uVar5 = FUN_00679d22(unaff_EBP + 8,0x10d2);
                      *(undefined1 *)(unaff_EBP + -4) = 0x12;
                      FUN_00471102(uVar5,0xc);
                      *(undefined1 *)(unaff_EBP + -4) = 0;
                      FUN_00414ebb();
                      goto LAB_007b91a2;
                    }
                    if (0x21bcbd < (int)pcVar11) {
                      if (0x234359 < (int)pcVar11) {
                        if ((int)pcVar11 < 0x236a6a) {
                          if (pcVar11 == (code *)0x236a69) {
LAB_007b9bcc:
                            uVar5 = FUN_007bae63(*(undefined4 *)(unaff_EBP + -0x18),
                                                 *(undefined4 *)(unaff_EBP + -0x1c));
                            goto LAB_007b919f;
                          }
                          if (pcVar11 == (code *)0x23435a) {
                            uVar5 = FUN_007ba3cd(*(undefined4 *)(unaff_EBP + -0x18),
                                                 *(undefined4 *)(unaff_EBP + -0x1c));
                            goto LAB_007b919f;
                          }
                          if (pcVar11 == (code *)0x23435b) goto LAB_007b9b4a;
                          if (pcVar11 == (code *)0x23435c) goto LAB_007b95cf;
                          if (pcVar11 == (code *)0x23435d) goto LAB_007b99a7;
                          if (pcVar11 != (code *)0x23435e) {
                            bVar12 = pcVar11 == (code *)0x236a68;
                            goto LAB_007b9764;
                          }
LAB_007b9b37:
                          uVar5 = FUN_007bb5eb(*(undefined4 *)(unaff_EBP + -0x18),
                                               *(undefined4 *)(unaff_EBP + -0x1c));
                          goto LAB_007b919f;
                        }
                        if (pcVar11 != (code *)0x236a6a) {
                          if (pcVar11 == (code *)0x236a6b) goto LAB_007b9b37;
                          if (pcVar11 != (code *)0x236a6c) {
                            if (0x236a6c < (int)pcVar11) {
                              if ((int)pcVar11 < 0x236a6f) goto LAB_007b9b4a;
                              if ((int)pcVar11 < 0x236a71) goto LAB_007b95cf;
                            }
                            goto LAB_007b91ac;
                          }
                        }
                        goto LAB_007b918f;
                      }
                      if (pcVar11 != (code *)0x234359) {
                        if ((int)pcVar11 < 0x21e3ce) {
                          if (pcVar11 == (code *)0x21e3cd) goto LAB_007b9b37;
                          if (pcVar11 != (code *)0x21bcbe) {
                            if (pcVar11 == (code *)0x21e3c8) goto LAB_007b9b4a;
                            if (pcVar11 == (code *)0x21e3c9) goto LAB_007b9bcc;
                            if (pcVar11 == (code *)0x21e3ca) goto LAB_007b918f;
                            pcVar10 = pcVar11 + -0x21e3cb;
                            if (pcVar10 != (code *)0x0) goto LAB_007b97f5;
                          }
                        }
                        else {
                          if ((int)pcVar11 < 0x21e3ce) goto LAB_007b91ac;
                          if (0x21e3cf < (int)pcVar11) {
                            if (pcVar11 == (code *)0x231c49) goto LAB_007b9c2e;
                            if (pcVar11 == (code *)0x231c4a) {
                              uVar5 = FUN_007bac94(*(undefined4 *)(unaff_EBP + -0x18),
                                                   *(undefined4 *)(unaff_EBP + -0x1c));
                              goto LAB_007b919f;
                            }
                            if (pcVar11 == (code *)0x231c4b) goto LAB_007b918f;
                            if (pcVar11 == (code *)0x231c4c) goto LAB_007b9b4a;
                            bVar12 = pcVar11 == (code *)0x231c4d;
LAB_007b951a:
                            if (!bVar12) goto LAB_007b91ac;
                          }
                        }
                        goto LAB_007b95cf;
                      }
                      uVar14 = 6;
LAB_007b9191:
                      uVar5 = *(undefined4 *)(unaff_EBP + -0x1c);
                      uVar13 = *(undefined4 *)(unaff_EBP + -0x18);
LAB_007b919a:
                      uVar5 = FUN_007ba5ee(uVar13,uVar5,uVar14);
                      goto LAB_007b919f;
                    }
                    if (pcVar11 == (code *)0x21bcbd) {
LAB_007b93bc:
                      uVar13 = 0x25;
                      uVar5 = 0x26;
                      goto LAB_007b9ab9;
                    }
                    if ((int)pcVar11 < 0x205d29) {
                      if (pcVar11 != (code *)0x205d28) {
                        if ((int)pcVar11 < 0x200f0c) {
                          if (pcVar11 == (code *)0x200f0b) goto LAB_007b99a7;
                          if ((int)pcVar11 < 0x1e886e) {
                            if (0x1e886b < (int)pcVar11) goto LAB_007b95cf;
                            if (pcVar11 == (code *)0x14282b) goto LAB_007b9331;
                            if (pcVar11 == (code *)0x14282f) goto LAB_007b9b37;
                            if ((0x1e8869 < (int)pcVar11) && ((int)pcVar11 < 0x1e886c))
                            goto LAB_007b918f;
                          }
                          else {
                            if (pcVar11 == (code *)0x200f09) goto LAB_007b9b4a;
                            if (pcVar11 == (code *)0x200f0a) goto LAB_007b9c2e;
                          }
                        }
                        else if (0x200f0b < (int)pcVar11) {
                          if (0x200f0d < (int)pcVar11) {
                            if (pcVar11 == (code *)0x20361a) goto LAB_007b9bcc;
                            if (pcVar11 != (code *)0x20361b) {
                              if (pcVar11 != (code *)0x20361c) {
                                if (pcVar11 != (code *)0x20361d) {
                                  bVar12 = pcVar11 == (code *)0x20361e;
                                  goto LAB_007b951a;
                                }
                                goto LAB_007b93bc;
                              }
                              goto LAB_007b99a7;
                            }
                          }
                          goto LAB_007b95cf;
                        }
                        goto LAB_007b91ac;
                      }
LAB_007b9b4a:
                      uVar14 = 2;
                      goto LAB_007b9191;
                    }
                    if ((int)pcVar11 < 0x2195aa) {
                      if (pcVar11 != (code *)0x2195a9) {
                        if (pcVar11 == (code *)0x205d29) goto LAB_007b9bcc;
                        if (pcVar11 != (code *)0x205d2a) {
                          if (pcVar11 != (code *)0x205d2b) {
                            if (pcVar11 == (code *)0x205d2c) goto LAB_007b918f;
                            if (pcVar11 == (code *)0x205d2d) goto LAB_007b9b37;
                            if (((int)pcVar11 < 0x205d2e) || (0x205d2f < (int)pcVar11))
                            goto LAB_007b91ac;
                          }
LAB_007b95cf:
                          uVar5 = FUN_007ba2e6(*(undefined4 *)(unaff_EBP + -0x18),
                                               *(undefined4 *)(unaff_EBP + -0x1c));
                          goto LAB_007b919f;
                        }
                        goto LAB_007b918f;
                      }
                      goto LAB_007b9b4a;
                    }
                    if (pcVar11 == (code *)0x2195aa) {
LAB_007b9c2e:
                      uVar5 = FUN_007acde7(*(undefined4 *)(unaff_EBP + -0x18),
                                           *(undefined4 *)(unaff_EBP + -0x1c),0,0,0);
                      goto LAB_007b919f;
                    }
                    if (pcVar11 == (code *)0x2195ab) goto LAB_007b99a7;
                    if (0x2195ab < (int)pcVar11) {
                      if ((int)pcVar11 < 0x2195ae) goto LAB_007b95cf;
                      if (0x21bcb9 < (int)pcVar11) {
                        if ((int)pcVar11 < 0x21bcbc) goto LAB_007b95cf;
                        if (pcVar11 == (code *)0x21bcbc) goto LAB_007b99a7;
                      }
                    }
LAB_007b91ac:
                    iVar2 = *(int *)(unaff_EBP + -0x34);
                    uVar5 = FUN_004b8c34();
                    *(undefined4 *)(iVar2 + 0x65) = uVar5;
                    uVar5 = FUN_004b8c34();
                    *(undefined4 *)(iVar2 + 0x75) = uVar5;
                  }
                  else {
                    if ((int)pcVar11 < 0x40413b) {
                      if (pcVar11 == (code *)0x40413a) goto LAB_007b9341;
                      if ((int)pcVar11 < 0x31260c) {
                        if (pcVar11 != (code *)0x31260b) {
                          if ((int)pcVar11 < 0x2f9f6f) {
                            if (pcVar11 == (code *)0x2f9f6e) goto LAB_007b9b37;
                            if ((int)pcVar11 < 0x2f785d) {
                              if ((int)pcVar11 < 0x2f785b) {
                                if ((int)pcVar11 < 0x2dcaac) goto LAB_007b91ac;
                                if (0x2dcaad < (int)pcVar11) {
                                  if (pcVar11 == (code *)0x2f514a) {
                                    uVar13 = 0;
                                    uVar5 = 0x2d;
                                    goto LAB_007b9ab9;
                                  }
                                  if (pcVar11 == (code *)0x2f514b) goto LAB_007b9341;
                                  if (pcVar11 == (code *)0x2f514c) {
                                    bVar12 = *(int *)(unaff_EBP + -0x20) == 0x2d;
                                    goto LAB_007b9189;
                                  }
                                  if (pcVar11 != (code *)0x2f514d) {
                                    bVar12 = pcVar11 == (code *)0x2f785a;
                                    goto LAB_007b9720;
                                  }
                                }
                              }
                            }
                            else {
                              if (pcVar11 == (code *)0x2f785d) goto LAB_007b9b37;
                              if (pcVar11 != (code *)0x2f785e) {
                                if ((pcVar11 == (code *)0x2f9f68) || (pcVar11 == (code *)0x2f9f6a))
                                goto LAB_007b9b4a;
                                pcVar10 = pcVar11 + -0x2f9f6b;
                                if (pcVar10 != (code *)0x0) {
LAB_007b96ba:
                                  bVar12 = pcVar10 == (code *)0x1;
                                  goto LAB_007b96bb;
                                }
                              }
                            }
                          }
                          else if ((int)pcVar11 < 0x30fefd) {
                            if ((int)pcVar11 < 0x30fefb) {
                              if ((int)pcVar11 < 0x2f9f6f) goto LAB_007b91ac;
                              if ((int)pcVar11 < 0x2f9f71) goto LAB_007b918f;
                              if (pcVar11 == (code *)0x30d7ea) {
                                uVar13 = 0;
                                uVar5 = 0x2e;
                                goto LAB_007b9ab9;
                              }
                              if (pcVar11 == (code *)0x30d7eb) goto LAB_007b9341;
                              if (pcVar11 != (code *)0x30d7ec) {
                                if (pcVar11 == (code *)0x30d7ed) goto LAB_007b9ba6;
                                bVar12 = pcVar11 == (code *)0x30fefa;
LAB_007b9720:
                                if (bVar12) goto LAB_007b9b37;
                                goto LAB_007b91ac;
                              }
                              bVar12 = *(int *)(unaff_EBP + -0x20) == 0x2e;
                              goto LAB_007b9189;
                            }
                          }
                          else {
                            if (pcVar11 == (code *)0x30fefd) goto LAB_007b9b37;
                            if (pcVar11 != (code *)0x30fefe) {
                              if (pcVar11 != (code *)0x312608) {
                                if (pcVar11 == (code *)0x312609) goto LAB_007b9bcc;
                                bVar12 = pcVar11 == (code *)0x31260a;
LAB_007b9764:
                                if (!bVar12) goto LAB_007b91ac;
                              }
                              goto LAB_007b9b4a;
                            }
                          }
                        }
                        goto LAB_007b9ba6;
                      }
                      if (0x3eba9b < (int)pcVar11) {
                        if ((int)pcVar11 < 0x3ee1b0) {
                          if (pcVar11 != (code *)0x3ee1af) {
                            if ((int)pcVar11 < 0x3eba9c) goto LAB_007b91ac;
                            if (0x3eba9d < (int)pcVar11) {
                              if (pcVar11 == (code *)0x3eba9e) {
                                uVar5 = FUN_007bc270(*(undefined4 *)(unaff_EBP + -0x18),
                                                     *(undefined4 *)(unaff_EBP + -0x1c));
                                goto LAB_007b919f;
                              }
                              if (pcVar11 == (code *)0x3ee1a8) goto LAB_007b9b4a;
                              if (pcVar11 != (code *)0x3ee1ab) {
                                if (pcVar11 == (code *)0x3ee1ac) goto LAB_007b99a7;
                                if (pcVar11 == (code *)0x3ee1ae) {
                                  bVar12 = *(int *)(unaff_EBP + -0x20) == 0x2f;
                                  goto LAB_007b9189;
                                }
                                goto LAB_007b91ac;
                              }
                            }
                          }
                          goto LAB_007b9ba6;
                        }
                        if (pcVar11 != (code *)0x3ee1b0) {
                          if (pcVar11 == (code *)0x401a2a) {
                            uVar13 = 0;
                            uVar5 = 0x21;
                            goto LAB_007b9ab9;
                          }
                          if (pcVar11 == (code *)0x401a2b) goto LAB_007b9b4a;
                          if (0x401a2b < (int)pcVar11) {
                            if ((int)pcVar11 < 0x401a2e) goto LAB_007b9341;
                            bVar12 = pcVar11 == (code *)0x404139;
LAB_007b96bb:
                            if (bVar12) goto LAB_007b9bcc;
                          }
                          goto LAB_007b91ac;
                        }
                        goto LAB_007b9341;
                      }
                      if (pcVar11 == (code *)0x3eba9b) goto LAB_007b99a7;
                      if ((int)pcVar11 < 0x3d0e41) {
                        if (pcVar11 != (code *)0x3d0e40) {
                          if (pcVar11 == (code *)0x31260d) goto LAB_007b9b37;
                          if (pcVar11 != (code *)0x31260e) {
                            if (pcVar11 == (code *)0x31260f) goto LAB_007b9ba6;
                            if (pcVar11 == (code *)0x3d0cea) goto LAB_007b9341;
                            if (pcVar11 != (code *)0x3d0ceb) {
                              bVar12 = pcVar11 == (code *)0x3d0e36;
                              goto LAB_007b99e4;
                            }
                          }
                          goto LAB_007b918f;
                        }
                        goto LAB_007b9ba6;
                      }
                      if (pcVar11 != (code *)0x3e938b) {
                        if (pcVar11 != (code *)0x3e938c) {
                          if (pcVar11 == (code *)0x3e938d) goto LAB_007b9ba6;
                          if (pcVar11 == (code *)0x3eb6b0) goto LAB_007b918f;
                          pcVar10 = pcVar11 + -0x3eba99;
                          if (pcVar10 != (code *)0x0) {
LAB_007b97f5:
                            bVar12 = pcVar10 == (code *)0x1;
                            goto LAB_007b97f6;
                          }
                        }
                        goto LAB_007b9b4a;
                      }
                      uVar13 = 0;
                      uVar5 = 0x2f;
LAB_007b9ab9:
                      uVar5 = FUN_007ba32b(*(undefined4 *)(unaff_EBP + -0x18),
                                           *(undefined4 *)(unaff_EBP + -0x1c),uVar5,uVar13);
                    }
                    else {
                      if (0x4e23ed < (int)pcVar11) {
                        if (0x4faa88 < (int)pcVar11) {
                          if ((int)pcVar11 < 0x89582a) {
                            if ((pcVar11 == Unwind_00895824) || (pcVar11 == (code *)0x4faa8b))
                            goto LAB_007b9341;
                            if (pcVar11 == (code *)0x4faa8c) goto LAB_007b9bcc;
                            if (pcVar11 == (code *)0x4faa8e) goto LAB_007b918f;
                            if (0x4faa8e < (int)pcVar11) {
                              if ((int)pcVar11 < 0x4faa91) {
                                uVar5 = FUN_007ba26d(*(undefined4 *)(unaff_EBP + -0x18),
                                                     *(undefined4 *)(unaff_EBP + -0x1c));
                                goto LAB_007b919f;
                              }
                              if (pcVar11 == (code *)0x4faa91) goto LAB_007b9ba6;
                              bVar12 = pcVar11 == (code *)0x895828;
LAB_007b97f6:
                              if (bVar12) goto LAB_007b918f;
                            }
                          }
                          else {
                            if (pcVar11 == Unwind_00895824) goto LAB_007b9c2e;
                            if (0x8adec7 < (int)pcVar11) {
                              if (0x8adecb < (int)pcVar11) {
                                if (pcVar11 == (code *)0x8adecc) goto LAB_007b918f;
                                if ((pcVar11 != Unwind_008adec8) && (pcVar11 != Unwind_008aded0))
                                goto LAB_007b91ac;
                              }
LAB_007b9c1b:
                              uVar5 = FUN_007ba937(*(undefined4 *)(unaff_EBP + -0x18),
                                                   *(undefined4 *)(unaff_EBP + -0x1c));
                              goto LAB_007b919f;
                            }
                          }
                          goto LAB_007b91ac;
                        }
                        if (pcVar11 != (code *)0x4faa88) {
                          if (0x4f5c6d < (int)pcVar11) {
                            if ((int)pcVar11 < 0x4f837f) {
                              if (((0x4f837b < (int)pcVar11) || (pcVar11 == ptr_004f5c6d)) ||
                                 (pcVar11 == (code *)0x4f7f90)) {
LAB_007b9ba6:
                                uVar5 = FUN_007b9f22(*(undefined4 *)(unaff_EBP + -0x18),
                                                     *(undefined4 *)(unaff_EBP + -0x1c));
                                goto LAB_007b919f;
                              }
                              if (((int)pcVar11 < 0x4f8379) || (0x4f837a < (int)pcVar11))
                              goto LAB_007b91ac;
                            }
                            else if (pcVar11 != ptr_004fa6a2) {
                              if (pcVar11 != (code *)0x4fa6ab) goto LAB_007b91ac;
                              goto LAB_007b9ba6;
                            }
                            goto LAB_007b9b37;
                          }
                          if (pcVar11 == ptr_004f5c6d) {
                            uVar5 = FUN_007acc95(*(undefined4 *)(unaff_EBP + -0x18),
                                                 *(undefined4 *)(unaff_EBP + -0x1c));
                            goto LAB_007b919f;
                          }
                          if (pcVar11 == ptr_004e23ec) goto LAB_007b9341;
                          if ((int)pcVar11 < 0x4e23f1) goto LAB_007b91ac;
                          if (0x4e23f2 < (int)pcVar11) {
                            if (pcVar11 != (code *)0x4f5c69) {
                              if (pcVar11 != (code *)0x4f5c6a) {
                                if (pcVar11 != (code *)0x4f5c6b) {
                                  bVar12 = pcVar11 == (code *)0x4f5c6c;
                                  goto LAB_007b99e4;
                                }
                                uVar13 = 0;
                                uVar5 = 0x31;
                                goto LAB_007b9ab9;
                              }
                              goto LAB_007b9bcc;
                            }
                            goto LAB_007b9ba6;
                          }
                        }
                        goto LAB_007b9b4a;
                      }
                      if ((int)pcVar11 < 0x4e23ec) {
                        if ((int)pcVar11 < 0x4dd5cc) {
                          if ((int)pcVar11 < 0x4dd5ca) {
                            if ((int)pcVar11 < 0x40684c) {
                              if (pcVar11 == (code *)0x40684b) goto LAB_007b9ba6;
                              if (pcVar11 != (code *)0x40413b) {
                                if (pcVar11 == (code *)0x40413c) goto LAB_007b9341;
                                if (pcVar11 != (code *)&LAB_0040413b_2) {
                                  if (pcVar11 != (code *)0x40413e) {
                                    if (pcVar11 != (code *)0x406848) {
                                      bVar12 = pcVar11 == (code *)0x406849;
                                      goto LAB_007b99e4;
                                    }
                                    goto LAB_007b9b4a;
                                  }
                                  uVar5 = FUN_007bb89d(*(undefined4 *)(unaff_EBP + -0x18),
                                                       *(undefined4 *)(unaff_EBP + -0x1c));
                                  goto LAB_007b919f;
                                }
                              }
                              goto LAB_007b918f;
                            }
                            if (pcVar11 == (code *)0x40684c) goto LAB_007b99a7;
                            if (pcVar11 == (code *)0x40684e) {
                              uVar5 = FUN_007bca08(*(undefined4 *)(unaff_EBP + -0x18),
                                                   *(undefined4 *)(unaff_EBP + -0x1c));
                              goto LAB_007b919f;
                            }
                            if (pcVar11 != (code *)0x40684f) {
                              if ((int)pcVar11 < 0x4c4f29) goto LAB_007b91ac;
                              if (0x4c4f2a < (int)pcVar11) {
                                if (pcVar11 != (code *)&DAT_004c4f2b) {
                                  bVar12 = pcVar11 == (code *)&LAB_004c4f2d;
                                  goto LAB_007b97f6;
                                }
                                goto LAB_007b9ba6;
                              }
                            }
                          }
                        }
                        else {
                          if ((int)pcVar11 < 0x4dfcde) {
                            if (pcVar11 != ptr_004dfcda) {
                              if (pcVar11 == (code *)0x4dd5cc) goto LAB_007b9bcc;
                              if (pcVar11 != (code *)0x4dd5cd) {
                                if (pcVar11 == (code *)0x4dd5ce) {
                                  uVar13 = 0;
                                  uVar5 = 0x30;
                                  goto LAB_007b9ab9;
                                }
                                if (pcVar11 != (code *)0x4dd5cf) {
                                  if (pcVar11 != ptr_004dfcda) {
                                    bVar12 = pcVar11 == ptr_004dfcda;
LAB_007b99e4:
                                    if (!bVar12) goto LAB_007b91ac;
                                  }
                                  goto LAB_007b9341;
                                }
                              }
                              goto LAB_007b918f;
                            }
LAB_007b9a25:
                            uVar4 = FUN_0043f6fe();
                            if (uVar4 < 0x80000000) goto LAB_007b91ac;
                            uVar14 = 1;
                            uVar5 = *(undefined4 *)(unaff_EBP + -0x1c);
                            uVar13 = *(undefined4 *)(unaff_EBP + -0x18);
                            goto LAB_007b919a;
                          }
                          if (pcVar11 != ptr_004dfcda) {
                            if (pcVar11 == (code *)&DAT_004e23e8) goto LAB_007b9b4a;
                            if (pcVar11 != (code *)&DAT_004e23e9) {
                              if (pcVar11 == (code *)&DAT_004e23ea) goto LAB_007b9ba6;
                              if (pcVar11 != (code *)&DAT_004e23eb) goto LAB_007b91ac;
                              goto LAB_007b9a25;
                            }
                          }
                        }
                      }
LAB_007b9341:
                      uVar5 = FUN_007b9df7(*(undefined4 *)(unaff_EBP + -0x18),
                                           *(undefined4 *)(unaff_EBP + -0x1c));
                    }
LAB_007b919f:
                    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
LAB_007b91a2:
                    if (*(int *)(unaff_EBP + -0x14) == 0) goto LAB_007b91ac;
                    if ((int)pcVar11 < 0x236a6a) {
                      if (((((pcVar11 != (code *)0x236a69) && (pcVar11 != (code *)0x111ae9)) &&
                           (pcVar11 != (code *)0x12a189)) &&
                          ((pcVar11 != (code *)0x142829 && (pcVar11 != (code *)0x205d29)))) &&
                         (pcVar11 != (code *)0x21e3c9)) goto LAB_007b9cc4;
LAB_007b9d34:
                      if ((pcVar11 == (code *)0x2f9f6c) || (pcVar11 == (code *)0x4faa8c))
                      goto LAB_007b9cc4;
                      uVar5 = FUN_007d3e08(pcVar11,0x23);
                      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2470) = uVar5;
                    }
                    else {
                      if ((pcVar11 != (code *)0x2f9f6c) &&
                         ((((pcVar11 == (code *)0x312609 || (pcVar11 == (code *)0x4dd5cc)) ||
                           (pcVar11 == (code *)0x4f5c6a)) || (pcVar11 == (code *)0x4faa8c))))
                      goto LAB_007b9d34;
LAB_007b9cc4:
                      uVar5 = 0x1e;
                      if (pcVar11 == (code *)0x12a191) {
                        iVar2 = FUN_00413367(*(int *)(unaff_EBP + -0x28) + 0x3a8,
                                             *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x3b0));
                        if (iVar2 < 0x127a81) {
                          if (iVar2 < 0x127a7f) {
                            if (iVar2 < 0x127a7b) {
LAB_007b9d70:
                              iVar2 = 0;
                            }
                            else if (iVar2 < 0x127a7d) {
                              iVar2 = 2;
                            }
                            else {
                              if (0x127a7e < iVar2) goto LAB_007b9d70;
                              iVar2 = 1;
                            }
                          }
                          else {
                            iVar2 = 3;
                          }
                        }
                        else {
                          if ((iVar2 < 0x12a18b) || (0x12a18c < iVar2)) goto LAB_007b9d70;
                          iVar2 = 5;
                        }
                        if (iVar2 == 1) {
                          uVar5 = 0x20;
                        }
                        else if (iVar2 == 2) {
                          uVar5 = 0x1f;
                        }
                        else if (iVar2 == 3) {
                          uVar5 = 0x21;
                        }
                        else if (iVar2 == 5) {
                          uVar5 = 0x22;
                        }
                      }
                      FUN_007d3e08(pcVar11,uVar5);
                    }
                    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1e60) = 1;
                  }
                  uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
                  goto LAB_007b9dd8;
                }
                DVar7 = timeGetTime();
                iVar2 = *(int *)(unaff_EBP + -0x10);
                if (DVar7 - *(int *)(iVar2 + 0x242c) < 0x7d1) goto LAB_007b9dd6;
                if (iVar3 / 1000000 == 0) {
                  if (iVar3 == 2) {
                    uVar5 = FUN_00679d22(unaff_EBP + -0x30,0xace);
                    *(undefined1 *)(unaff_EBP + -4) = 5;
                    FUN_00471102(uVar5,0xc);
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    goto LAB_007b8c16;
                  }
                  if (iVar3 == 3) {
                    uVar5 = FUN_00679d22(unaff_EBP + -0x34,0xacf);
                    *(undefined1 *)(unaff_EBP + -4) = 6;
                    FUN_00471102(uVar5,0xc);
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    goto LAB_007b8c16;
                  }
                  if (iVar3 == 4) {
                    uVar5 = FUN_00679d22(unaff_EBP + 8,0xad0);
                    *(undefined1 *)(unaff_EBP + -4) = 7;
                    FUN_00471102(uVar5,0xc);
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    goto LAB_007b8c16;
                  }
                }
                else {
                  *(undefined4 *)(unaff_EBP + 8) = 0;
                  *(undefined1 *)(unaff_EBP + -4) = 8;
                  puVar8 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x30,iVar3);
                  *(undefined1 *)(unaff_EBP + -4) = 9;
                  puVar9 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x34,0xad1);
                  uVar5 = *puVar8;
                  uVar13 = *puVar9;
                  *(undefined1 *)(unaff_EBP + -4) = 10;
                  FUN_00434e21(unaff_EBP + 8,uVar13,uVar5);
                  *(undefined1 *)(unaff_EBP + -4) = 9;
                  FUN_00414ebb();
                  *(undefined1 *)(unaff_EBP + -4) = 8;
                  FUN_00414ebb();
                  FUN_00471102(unaff_EBP + 8,0xc);
                  *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_007b8c16:
                  FUN_00414ebb();
                }
                DVar7 = timeGetTime();
                *(DWORD *)(iVar2 + 0x242c) = DVar7;
              }
            }
          }
          goto LAB_007b9dd6;
        }
        uVar5 = FUN_00679d22(unaff_EBP + 8,0xd8b);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00471102(uVar5,0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        uVar5 = FUN_00679d22(unaff_EBP + 8,0xd8b);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00471102(uVar5,0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
LAB_007b9dd1:
      FUN_00414ebb();
    }
  }
LAB_007b9dd6:
  uVar5 = 0;
LAB_007b9dd8:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0065d149();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


