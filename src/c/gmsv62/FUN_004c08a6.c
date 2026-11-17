/* FUN_004c08a6 - 0x004c08a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_004c08a6(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  int unaff_EBP;
  bool bVar5;
  undefined4 uVar6;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  bVar5 = DAT_00979178 == 0;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (bVar5) {
    iStack_34 = 1;
    puStack_38 = (undefined *)0x4c08d0;
    iVar1 = FUN_004c2076();
    if (iVar1 != 0) {
      iStack_34 = 0;
      puStack_38 = (undefined *)0x1f4;
      *(undefined4 *)(unaff_EBP + -0x10) = DAT_00978368;
      iStack_3c = 0x4c08ee;
      iVar1 = FUN_004becbc();
      if (iVar1 != 0) {
        iStack_34 = 0x4c0903;
        uVar2 = FUN_0045e4b8();
        if ((uVar2 & 1) == 0) {
LAB_004c0926:
          iStack_34 = 0x4c092b;
          FUN_00429303();
          iStack_34 = 0x4c0930;
          iVar1 = FUN_00429303();
          if ((iVar1 != 0) && (*(int *)(unaff_EBP + 8) != 0)) {
            iStack_34 = 0x4c093e;
            iVar1 = FUN_00429303();
            if (*(int *)(iVar1 + 0x128) != 0) goto LAB_004c0dc7;
          }
          iStack_34 = unaff_EBP + -0x28;
          puStack_38 = (undefined *)0x4c0959;
          iVar1 = FUN_00455c59();
          *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar1 + 4);
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            iStack_34 = 0;
            puStack_38 = (undefined *)0x4c096d;
            FUN_0045e7c2();
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
          }
          iStack_34 = *(undefined4 *)(extraout_ECX + 0x14);
          iStack_3c = unaff_EBP + -0x30;
          puStack_38 = *(undefined **)(extraout_ECX + 0x10);
          uStack_40 = 0x4c0981;
          iVar1 = FUN_00458c4f();
          iVar1 = *(int *)(iVar1 + 4);
          *(int *)(unaff_EBP + 8) = iVar1;
          iStack_34 = 0x4c098f;
          FUN_0046575e();
          if (iVar1 != 0) {
            iStack_34 = 0x4c09a2;
            (**(code **)(*DAT_00978358 + 4))();
            iStack_34 = 0x4c09a9;
            iVar3 = FUN_004bf0d4();
            if (iVar3 == 0) {
LAB_004c09f1:
              *(int *)(unaff_EBP + -0x14) = iVar1 + 0xc;
              iStack_34 = 0x4c09fe;
              iVar3 = FUN_0045e2eb();
              if ((((iVar3 != 0x10fae3) && (iVar3 != 0x10fae6)) && (iVar3 != 0x10fae7)) &&
                 (iVar3 != 0x10fae9)) {
                iStack_34 = 0x4c0a31;
                iVar3 = FUN_0045e2eb();
                if (((iVar3 != 0x3d83f9) && (iVar3 != 0x3d8390)) &&
                   ((iVar3 != 0x3d83f8 && (iVar3 != 0x3d838f)))) {
                  iStack_34 = 0x4c0a64;
                  iVar3 = FUN_0045e2eb();
                  if ((iVar3 != 0x3d838d) && (iVar3 != 0x3d838e)) {
                    iStack_34 = 0x4c0a81;
                    iVar3 = FUN_0045e2eb();
                    if (iVar3 / 10000 != 0xe0) {
                      iStack_34 = 0x4c0a9b;
                      iVar3 = FUN_0045e2eb();
                      if (iVar3 != 0x3cf1e5) {
                        iStack_34 = 0x4c0aad;
                        iVar3 = FUN_0045e2eb();
                        if ((((iVar3 == 0x3d837d) || (iVar3 == 0x3d837e)) || (iVar3 == 0x3d837f)) ||
                           (((iVar3 == 0x3d8380 || (iVar3 == 0x3d8381)) ||
                            ((iVar3 == 0x3d8382 || ((iVar3 == 0x3d8383 || (iVar3 == 0x3d8384))))))))
                        {
                          *(undefined4 *)(unaff_EBP + 8) = 0;
                          iStack_34 = 0x1054;
                          puStack_38 = (undefined *)(unaff_EBP + -0x18);
                          *(undefined4 *)(unaff_EBP + -4) = 0;
                          iStack_3c = 0x4c0b04;
                          puVar4 = (undefined4 *)FUN_00679d22();
                          iStack_34 = *puVar4;
                          iStack_3c = unaff_EBP + 8;
                          puStack_38 = &DAT_00964da0;
                          *(undefined1 *)(unaff_EBP + -4) = 1;
                          uStack_40 = 0x4c0b18;
                          FUN_00434e21();
                          *(undefined1 *)(unaff_EBP + -4) = 0;
                          iStack_34 = 0x4c0b26;
                          FUN_00414ebb();
                          if ((*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x4a7) != 0) &&
                             (*(short *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x4ab) + 0xc) == 3))
                          {
                            iStack_34 = 0x1055;
                            puStack_38 = (undefined *)(unaff_EBP + -0x1c);
                            iStack_3c = 0x4c0b4e;
                            puVar4 = (undefined4 *)FUN_00679d22();
                            iStack_34 = *puVar4;
                            puStack_38 = (undefined *)(unaff_EBP + 8);
                            *(undefined1 *)(unaff_EBP + -4) = 2;
                            iStack_3c = 0x4c0b5d;
                            FUN_00434e21();
                            *(undefined1 *)(unaff_EBP + -4) = 0;
                            iStack_34 = 0x4c0b6a;
                            FUN_00414ebb();
                          }
                          iStack_34 = 0;
                          puStack_38 = (undefined *)0x0;
                          iStack_3c = 0;
                          uStack_40 = 0;
                          *(uint **)(unaff_EBP + -0x20) = &uStack_44;
                          FUN_00450368(unaff_EBP + 8);
                          iVar1 = FUN_007db791();
                          bVar5 = iVar1 == 6;
                          if (bVar5) {
                            iStack_34 = 0x4c0ba5;
                            iStack_34 = FUN_0045e2eb();
                            puStack_38 = (undefined *)0x4c0bae;
                            FUN_0083ad96();
                          }
                          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                          iStack_34 = 0x4c0b96;
                          FUN_00414ebb();
                          goto LAB_004c0dc9;
                        }
                        iStack_34 = 0x4c0bc1;
                        iStack_34 = FUN_0045e2eb();
                        puStack_38 = (undefined *)0x4c0bc9;
                        iVar3 = FUN_005540b6();
                        uStack_44 = extraout_ECX_01;
                        if ((iVar3 == 0) &&
                           (uStack_44 = *(uint *)(iVar1 + 0x18) | *(uint *)(iVar1 + 0x1c),
                           uStack_44 == 0)) {
                          iStack_34 = 0x4c0be8;
                          iVar1 = FUN_0045e2eb();
                          if (iVar1 / 1000 != 0x107c) {
                            iStack_34 = 0x4c0c14;
                            iStack_34 = FUN_0045e2eb();
                            puStack_38 = (undefined *)0x4c0c1c;
                            iVar1 = FUN_0055443a();
                            if (iVar1 != 0) {
                              iStack_34 = 0x4c0c38;
                              uVar2 = FUN_0045e4b8();
                              if ((uVar2 & 1) != 0) {
                                iStack_34 = 0x4c0c4a;
                                uVar2 = FUN_0045e4b8();
                                if ((uVar2 & 0x10) == 0) goto LAB_004c0c8d;
                              }
                              iStack_34 = 0x4c0c53;
                              iVar1 = FUN_00429303();
                              if (iVar1 != 0) {
                                iStack_34 = 0x4c0c5c;
                                iVar1 = FUN_00429303();
                                if (*(int *)(iVar1 + 0x128) != 0) goto LAB_004c0dc7;
                              }
                              iStack_34 = 1;
                              puStack_38 = (undefined *)0x0;
                              iStack_3c = 0;
                              uStack_40 = 0;
                              *(uint **)(unaff_EBP + -0x1c) = &uStack_44;
                              FUN_00679d22(&uStack_44,0x362);
                              iVar1 = FUN_007db791();
                              if (iVar1 != 6) goto LAB_004c0dc7;
                            }
LAB_004c0c8d:
                            *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
                            iStack_34 = 0x4c0ca0;
                            iStack_34 = FUN_0045e2eb();
                            puStack_38 = (undefined *)0x4c0ca9;
                            iVar1 = FUN_005542d2();
                            if (iVar1 != 0) {
                              iStack_34 = 0x4c0cbb;
                              uVar2 = FUN_0045e4b8();
                              if ((uVar2 & 1) != 0) {
                                iStack_34 = 0x4c0ccd;
                                uVar2 = FUN_0045e4b8();
                                if ((uVar2 & 0x10) == 0) goto LAB_004c0d10;
                              }
                              iStack_34 = 0x4c0cd6;
                              iVar1 = FUN_00429303();
                              if (iVar1 != 0) {
                                iStack_34 = 0x4c0cdf;
                                iVar1 = FUN_00429303();
                                if (*(int *)(iVar1 + 0x128) != 0) goto LAB_004c0dc7;
                              }
                              iStack_34 = 1;
                              puStack_38 = (undefined *)0x0;
                              iStack_3c = 0;
                              uStack_40 = 0;
                              *(uint **)(unaff_EBP + -0x1c) = &uStack_44;
                              FUN_00679d22(&uStack_44,0x362);
                              iVar1 = FUN_007db791();
                              if (iVar1 != 6) goto LAB_004c0dc7;
                            }
LAB_004c0d10:
                            iStack_34 = 0x4c0d18;
                            iVar1 = (**(code **)(**(int **)(unaff_EBP + 8) + 4))();
                            if (iVar1 != 0) {
                              *(uint **)(unaff_EBP + 8) = &uStack_44;
                              uVar6 = 0xd12;
                              uStack_44 = extraout_ECX_02;
                              goto LAB_004c0dba;
                            }
                            iVar1 = 1;
                            iStack_34 = *(undefined4 *)(unaff_EBP + 8);
                            puStack_38 = (undefined *)0x4c0d3e;
                            iVar3 = FUN_004c24cb();
                            if (iVar3 == 0) {
                              iStack_34 = 0x4c0d4b;
                              iVar3 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x18))();
                              *(int *)(unaff_EBP + 8) = iVar3;
                              if (iVar3 < 2) goto LAB_004c0d8d;
                              iStack_34 = 0x364;
                              puStack_38 = (undefined *)(unaff_EBP + -0x20);
                              iStack_3c = 0x4c0d62;
                              puVar4 = (undefined4 *)FUN_00679d22();
                              iStack_34 = *(undefined4 *)(unaff_EBP + 8);
                              puStack_38 = (undefined *)*puVar4;
                              iVar3 = *(int *)(unaff_EBP + -0x18);
                              *(undefined4 *)(unaff_EBP + -4) = 3;
                              iStack_3c = 0x4c0d79;
                              iVar1 = FUN_004c1fa3();
                              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                              iStack_34 = 0x4c0d87;
                              FUN_00414ebb();
                              if (iVar1 < 1) goto LAB_004c0dc7;
                            }
                            else {
LAB_004c0d8d:
                              iVar3 = *(int *)(unaff_EBP + -0x18);
                            }
                            puStack_38 = (undefined *)0x0;
                            iStack_3c = *(undefined4 *)(iVar3 + 0x14);
                            uStack_40 = *(undefined4 *)(iVar3 + 0x10);
                            uStack_44 = 0x4c0da0;
                            iStack_34 = iVar1;
                            FUN_008347d4();
                            bVar5 = true;
                            goto LAB_004c0dc9;
                          }
                          uStack_44 = 1000;
                          *(uint **)(unaff_EBP + 8) = &uStack_44;
                        }
                        else {
                          *(uint **)(unaff_EBP + 8) = &uStack_44;
                        }
                        uVar6 = 0x35f;
                        goto LAB_004c0dba;
                      }
                    }
                  }
                }
              }
            }
            else {
              iStack_34 = 0x4c09b7;
              iVar3 = FUN_0045e2eb();
              if (iVar3 / 10000 != 0xbe) {
                iStack_34 = 0x4c09cd;
                iVar3 = FUN_0045e2eb();
                if (iVar3 / 10000 != 0xbf) goto LAB_004c09f1;
              }
              iStack_34 = 0x3ec;
              puStack_38 = (undefined *)0x4c09ec;
              FUN_007bd2b0();
            }
          }
        }
        else {
          iStack_34 = 0x4c090e;
          uVar2 = FUN_0045e4b8();
          if ((uVar2 & 0x10) == 0) goto LAB_004c0926;
          *(uint **)(unaff_EBP + 8) = &uStack_44;
          uVar6 = 0x35e;
          uStack_44 = extraout_ECX_00;
LAB_004c0dba:
          iStack_34 = 0;
          puStack_38 = (undefined *)0x0;
          iStack_3c = 0;
          uStack_40 = 0;
          FUN_00679d22(&uStack_44,uVar6);
          FUN_007db3ad();
        }
      }
    }
  }
LAB_004c0dc7:
  bVar5 = false;
LAB_004c0dc9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar5;
}


