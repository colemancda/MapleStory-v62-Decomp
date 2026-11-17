/* FUN_005cef6f - 0x005cef6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005cef6f(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  bool bVar10;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  
  FUN_00879bb8();
  iVar8 = *(int *)(extraout_ECX + 0x440);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  if (iVar8 == 0) {
    piStack_d8 = (int *)0x5cef9c;
    FUN_00878dfb();
  }
  uVar1 = FUN_0042503d();
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffff;
  iVar8 = *(int *)(extraout_ECX + 0x90);
  *(uint *)(unaff_EBP + -0x30) = uVar1 & 0xffffff;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  iVar5 = extraout_ECX;
  if (iVar8 != 0) {
    do {
      iVar5 = *(int *)((-(uint)(iVar8 != 0) & iVar8 - 0x10U) + 4);
      iVar2 = *(int *)(iVar8 + 4);
      *(int *)(unaff_EBP + -0x2c) = iVar8;
      *(uint *)(unaff_EBP + -0x44) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
      if (iVar2 != 0) {
        if (iVar2 == *(int *)(unaff_EBP + 8) || iVar2 - *(int *)(unaff_EBP + 8) < 0) {
          if (iVar2 == 0) goto LAB_005cf626;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          piVar7 = *(int **)(unaff_EBP + -0x2c);
          iVar8 = *piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (iVar8 / 1000000 == 0) {
            piStack_d8 = (int *)0x5cf04e;
            iVar2 = FUN_00651eaf();
            iVar5 = *(int *)(unaff_EBP + -0x20);
            *(int *)(unaff_EBP + -0x1c) = (iVar8 >> 0x10) * 0x5c + -0x5c + *(int *)(iVar2 + 4);
            piStack_d8 = (int *)(*(int *)(iVar5 + 0x15c) + 0xc);
            piStack_dc = (int *)0x5cf070;
            uVar1 = FUN_004b8c9b();
            if (2 < uVar1 % 8800000) {
              piStack_d8 = (int *)(*(int *)(iVar5 + 0x15c) + 0xc);
              piStack_dc = (int *)0x5cf094;
              uVar1 = FUN_004b8c9b();
              if (10 < uVar1 % 8800000) goto LAB_005cf09f;
LAB_005cf0e0:
              FUN_00402fa6();
              FUN_004027eb();
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (*(int *)(unaff_EBP + -0x24) != 0) {
                piStack_d8 = (int *)0x5cf104;
                FUN_00403384();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_00412600();
              goto LAB_005cf70b;
            }
LAB_005cf09f:
            piStack_d8 = (int *)(*(int *)(iVar5 + 0x15c) + 0xc);
            piStack_dc = (int *)0x5cf0b1;
            uVar1 = FUN_004b8c9b();
            if (4 < uVar1 % 0x866e10) {
              piStack_d8 = (int *)(*(int *)(iVar5 + 0x15c) + 0xc);
              piStack_dc = (int *)0x5cf0d5;
              uVar1 = FUN_004b8c9b();
              if (uVar1 % 0x866e10 < 0x15) goto LAB_005cf0e0;
            }
            piStack_d8 = (int *)0x5cf122;
            piVar9 = (int *)FUN_005cf85c();
            if ((int *)*piVar9 == (int *)0x0) {
              uVar1 = 0;
            }
            else {
              iVar8 = *(int *)*piVar9;
              if (iVar8 == 0) {
                uVar1 = 0;
              }
              else {
                uVar1 = *(uint *)(iVar8 + -4) >> 1;
              }
            }
            FUN_00402fa6();
            if (uVar1 != 0) {
              piStack_d8 = (int *)0x5cf155;
              FUN_005cf85c();
              piStack_d8 = (int *)0x5cf15e;
              FUN_00402f41();
              goto LAB_005cf18a;
            }
          }
          else {
            piStack_d8 = (int *)0x5cf16f;
            iVar8 = FUN_0064d61f();
            if (iVar8 != 0) {
              piStack_d8 = (int *)0x5cf17e;
              FUN_005cf836();
              piStack_d8 = (int *)0x5cf187;
              FUN_00402f41();
LAB_005cf18a:
              FUN_00402fa6();
            }
          }
          piVar9 = *(int **)(unaff_EBP + -0x18);
          piVar7[2] = 0;
          piVar7[1] = 0;
          if ((piVar9 == (int *)0x0) || (iVar8 = *piVar9, iVar8 == 0)) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(uint *)(iVar8 + -4) >> 1;
          }
          if (uVar1 != 0) {
            *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
            do {
              if (-1 < *(int *)(unaff_EBP + -0x1c)) {
                FUN_0087a1b0();
                piStack_dc = *(int **)(unaff_EBP + -0x1c);
                piStack_e0 = (int *)0x5cf1d5;
                piStack_d8 = (int *)&stack0xffffff30;
                FUN_0087a25a();
              }
              if (*(undefined4 **)(unaff_EBP + -0x18) == (undefined4 *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = **(undefined4 **)(unaff_EBP + -0x18);
              }
              piStack_d8 = (int *)(unaff_EBP + -0x5c);
              piStack_dc = (int *)0x5cf201;
              puVar3 = (undefined4 *)FUN_00679d86();
              piStack_dc = (int *)*puVar3;
              piStack_e0 = (int *)(unaff_EBP + -0x24);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              piStack_e4 = (int *)0x5cf213;
              piStack_d8 = (int *)uVar4;
              FUN_0041354c();
              *(undefined1 *)(unaff_EBP + -4) = 3;
              FUN_00402676();
              piStack_d8 = (int *)0x5cf233;
              FUN_00403191();
              *(undefined1 *)(unaff_EBP + -4) = 5;
              piStack_d8 = (int *)0x5cf243;
              FUN_00403191();
              piStack_d8 = (int *)0x0;
              piStack_dc = (int *)(unaff_EBP + -0xc0);
              piStack_e0 = (int *)(unaff_EBP + -0xb0);
              *(undefined1 *)(unaff_EBP + -4) = 6;
              piStack_e4 = (int *)0x5cf25f;
              uVar4 = FUN_00411641();
              *(int ***)(unaff_EBP + -0x3c) = &piStack_e4;
              piStack_e4 = extraout_ECX_00;
              FUN_004033a1(uVar4);
              iVar8 = unaff_EBP + -0xd0;
              *(undefined1 *)(unaff_EBP + -4) = 6;
              FUN_00405a1d(iVar8);
              FUN_00402660();
              FUN_00404a02(iVar8);
              *(undefined1 *)(unaff_EBP + -4) = 8;
              piStack_dc = (int *)0x5cf294;
              uVar4 = FUN_004032b4();
              *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
              piStack_d8 = (int *)0x5cf2a3;
              iVar8 = FUN_00404b30();
              if ((iVar8 < 0) && (iVar8 != -0x7fffbffe)) {
                piStack_d8 = (int *)0x5cf2b4;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 6;
              piStack_d8 = (int *)0x5cf2c4;
              iVar8 = FUN_00402bc3();
              if (iVar8 < 0) {
                piStack_d8 = (int *)0x5cf2cf;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              piStack_d8 = (int *)0x5cf2df;
              iVar8 = FUN_00402bc3();
              if (iVar8 < 0) {
                piStack_d8 = (int *)0x5cf2ea;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 3;
              piStack_d8 = (int *)0x5cf2fa;
              iVar8 = FUN_00402bc3();
              if (iVar8 < 0) {
                piStack_d8 = (int *)0x5cf305;
                FUN_00878dfb();
              }
              if (*(int *)(unaff_EBP + -0x28) == 0) break;
              iVar8 = *(int *)(unaff_EBP + -0x20);
              piStack_d8 = (int *)0x0;
              piStack_dc = (int *)0x0;
              piStack_e0 = (int *)0x5cf31b;
              piStack_e0 = (int *)FUN_005c5474();
              piStack_e4 = (int *)0x5cf324;
              uVar4 = FUN_00411641();
              *(int ***)(unaff_EBP + -0x3c) = &piStack_e4;
              piStack_e4 = extraout_ECX_01;
              FUN_004033a1(uVar4);
              puVar3 = (undefined4 *)FUN_005ca3b4(unaff_EBP + -0x4c);
              piStack_d8 = (int *)0x5cf345;
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                        ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                         (IBinding *)*puVar3);
              if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
                piStack_d8 = (int *)0x5cf352;
                (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
              }
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                iVar5 = FUN_00432a57();
                if (iVar5 == 0) {
                  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
                  piStack_d8 = (int *)0x5cf37d;
                  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                            (p_Var6,*(IBinding **)(unaff_EBP + -0x10));
                  iVar8 = *(int *)(unaff_EBP + -0x2c);
                  *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
                  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(iVar8 + 8) = p_Var6;
                  *(undefined4 *)(iVar8 + 0xc) = 1;
                }
                else {
                  if (*(int *)(iVar8 + 200) != 0) {
                    piStack_d8 = (int *)0x5cf3ad;
                    VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
                    piStack_d8 = (int *)(unaff_EBP + -0xa0);
                    piStack_dc = (int *)0x5cf3bf;
                    iVar8 = FUN_00402e32();
                    if (iVar8 < 0) {
                      piStack_d8 = (int *)0x5cf3cb;
                      FUN_00878dfb();
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 9;
                    piStack_d8 = (int *)0x5cf3d5;
                    VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
                    piStack_d8 = (int *)(unaff_EBP + -0x70);
                    piStack_dc = (int *)0x5cf3df;
                    iVar8 = FUN_00402e32();
                    if (iVar8 < 0) {
                      piStack_d8 = (int *)0x5cf3eb;
                      FUN_00878dfb();
                    }
                    iVar8 = **(int **)(*(int *)(unaff_EBP + -0x20) + 0xd0);
                    *(undefined1 *)(unaff_EBP + -4) = 10;
                    if (iVar8 == 0) {
                      piStack_d8 = (int *)0x5cf407;
                      FUN_00878dfb();
                    }
                    piStack_d8 = (int *)0x5cf414;
                    piVar7 = (int *)FUN_004113e5();
                    iVar8 = *piVar7;
                    *(undefined1 *)(unaff_EBP + -4) = 0xb;
                    if (iVar8 == 0) {
                      piStack_d8 = (int *)0x5cf429;
                      FUN_00878dfb();
                    }
                    piVar7 = (int *)*piVar7;
                    piStack_e0 = *(int **)(unaff_EBP + -0xa0);
                    piStack_dc = *(int **)(unaff_EBP + -0x9c);
                    iVar8 = *piVar7;
                    piStack_d8 = *(int **)(unaff_EBP + -0x98);
                    *(int **)(unaff_EBP + -0x3c) = piVar7;
                    piStack_e4 = *(int **)(unaff_EBP + -100);
                    iVar8 = (**(code **)(iVar8 + 0x90))
                                      (piVar7,0,0,*(undefined4 *)(unaff_EBP + -0x70),
                                       *(undefined4 *)(unaff_EBP + -0x6c),
                                       *(undefined4 *)(unaff_EBP + -0x68));
                    if (iVar8 < 0) {
                      FUN_00878e09(iVar8,*(undefined4 *)(unaff_EBP + -0x3c),&DAT_00963de8);
                    }
                    piVar7 = *(int **)(unaff_EBP + -0x58);
                    *(undefined1 *)(unaff_EBP + -4) = 10;
                    if (piVar7 != (int *)0x0) {
                      (**(code **)(*piVar7 + 8))(piVar7);
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 9;
                    iVar8 = FUN_00402bc3(unaff_EBP + -0x70);
                    if (iVar8 < 0) {
                      FUN_00878dfb(iVar8);
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 3;
                    iVar8 = FUN_00402bc3(unaff_EBP + -0xa0);
                    if (iVar8 < 0) {
                      FUN_00878dfb(iVar8);
                    }
                    VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
                    iVar8 = FUN_00402e32(unaff_EBP + -0x80,&DAT_00980690);
                    if (iVar8 < 0) {
                      FUN_00878dfb(iVar8);
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0xc;
                    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
                    iVar8 = FUN_00402e32(unaff_EBP + -0x90,&DAT_00980690);
                    if (iVar8 < 0) {
                      FUN_00878dfb(iVar8);
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0xd;
                    if (*(int *)(unaff_EBP + -0x10) == 0) {
                      FUN_00878dfb(0x80004003);
                    }
                    piVar7 = (int *)FUN_004113e5(unaff_EBP + -0x40);
                    iVar8 = *piVar7;
                    *(undefined1 *)(unaff_EBP + -4) = 0xe;
                    if (iVar8 == 0) {
                      FUN_00878dfb(0x80004003);
                    }
                    piVar7 = (int *)*piVar7;
                    piVar9 = (int *)(**(code **)(*piVar7 + 0x90))
                                              (piVar7,0,0,*(undefined4 *)(unaff_EBP + -0x90),
                                               *(undefined4 *)(unaff_EBP + -0x8c),
                                               *(undefined4 *)(unaff_EBP + -0x88),
                                               *(undefined4 *)(unaff_EBP + -0x84),
                                               *(undefined4 *)(unaff_EBP + -0x80),
                                               *(undefined4 *)(unaff_EBP + -0x7c),
                                               *(undefined4 *)(unaff_EBP + -0x78),
                                               *(undefined4 *)(unaff_EBP + -0x74));
                    if ((int)piVar9 < 0) {
                      piStack_e0 = (int *)0x5cf562;
                      piStack_dc = piVar9;
                      piStack_d8 = piVar7;
                      FUN_00878e09();
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0xd;
                    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
                      piStack_d8 = (int *)0x5cf573;
                      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0xc;
                    piStack_d8 = (int *)0x5cf583;
                    iVar8 = FUN_00402bc3();
                    if (iVar8 < 0) {
                      piStack_d8 = (int *)0x5cf58e;
                      FUN_00878dfb();
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 3;
                    piStack_d8 = (int *)0x5cf59b;
                    iVar8 = FUN_00402bc3();
                    if (iVar8 < 0) {
                      piStack_d8 = (int *)0x5cf5a6;
                      FUN_00878dfb();
                    }
                  }
                  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
                  piStack_d8 = (int *)0x5cf5c0;
                  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                            (p_Var6,*(IBinding **)(unaff_EBP + -0x10));
                  iVar8 = *(int *)(unaff_EBP + -0x2c);
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(iVar8 + 8) = p_Var6;
                }
                piStack_d8 = (int *)0x5cf5d8;
                FUN_005cfb64();
              }
              *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
            } while (*(int *)(unaff_EBP + -0x1c) < 0x65);
          }
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
            piStack_d8 = (int *)0x5cf609;
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00402676();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            piStack_d8 = (int *)0x5cf626;
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          goto LAB_005cf626;
        }
        goto LAB_005cf70b;
      }
LAB_005cf626:
      iVar8 = **(int **)(unaff_EBP + -0x2c);
      if (iVar8 < 0x21bcbb) {
        if (iVar8 == 0x21bcba) goto LAB_005cf6fd;
        if (iVar8 < 0x205d2c) {
          if (iVar8 == 0x205d2b) {
LAB_005cf6f4:
            *(undefined4 *)(unaff_EBP + -0x14) = 0xffa0a0;
          }
          else if (0x127a7c < iVar8) {
            if (iVar8 < 0x127a7f) goto LAB_005cf6fd;
            if (((iVar8 == 0x200f0d) || (iVar8 == 0x20361b)) || (iVar8 == 0x20361e)) {
              *(undefined4 *)(unaff_EBP + -0x14) = 0x5b8f3b;
            }
          }
          goto LAB_005cf70b;
        }
        if (iVar8 == 0x205d2d) goto LAB_005cf6fd;
        if (iVar8 != 0x205d2e) {
          bVar10 = iVar8 == 0x2195ac;
          goto LAB_005cf6f0;
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0x999999;
LAB_005cf704:
        *(undefined4 *)(unaff_EBP + -0x34) = 1;
      }
      else {
        if (0x30fefb < iVar8) {
          if (iVar8 != 0x31260d) {
            if (iVar8 == 0x4f837c) goto LAB_005cf6f4;
            bVar10 = iVar8 == 0x4f837d;
LAB_005cf6f0:
            if (!bVar10) goto LAB_005cf70b;
          }
LAB_005cf6fd:
          *(undefined **)(unaff_EBP + -0x14) = &DAT_00a9ddfe;
          goto LAB_005cf704;
        }
        if ((iVar8 == 0x30fefb) || (iVar8 == 0x21bcbe)) goto LAB_005cf6fd;
        if (iVar8 == 0x21e3cb) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0xc0ff;
        }
        else {
          if (iVar8 == 0x21e3cf) goto LAB_005cf6fd;
          if ((iVar8 == 0x23435d) && (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x274) != 0)) {
            piStack_d8 = (int *)0x5cf6d6;
            FUN_005cdce1();
          }
        }
      }
LAB_005cf70b:
      if (*(int *)(unaff_EBP + -0x44) == 0) goto code_r0x005cf715;
      iVar8 = *(int *)(unaff_EBP + -0x44);
    } while( true );
  }
LAB_005cf71d:
  if (*(int *)(unaff_EBP + -0x30) != *(int *)(unaff_EBP + -0x14)) {
    if (*(int *)(iVar5 + 0x440) == 0) {
      piStack_d8 = (int *)0x5cf738;
      FUN_00878dfb();
    }
    piStack_d8 = (int *)0x5cf747;
    piVar7 = (int *)FUN_005cf882();
    iVar8 = *piVar7;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    if (iVar8 == 0) {
      piStack_d8 = (int *)0x5cf75b;
      FUN_00878dfb();
    }
    piVar7 = (int *)*piVar7;
    piStack_d8 = (int *)((*(uint *)(unaff_EBP + -0x14) >> 0x10) -
                        (*(uint *)(unaff_EBP + -0x30) >> 0x10));
    piStack_e0 = (int *)0x5cf774;
    piStack_dc = piVar7;
    iVar8 = (**(code **)(*piVar7 + 0x44))();
    if (iVar8 < 0) {
      piStack_e0 = (int *)&DAT_00963d08;
      piStack_e4 = piVar7;
      FUN_00878e09(iVar8);
    }
    piStack_e0 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_e0 != (int *)0x0) {
      piStack_e4 = (int *)0x5cf795;
      (**(code **)(*piStack_e0 + 8))();
    }
    if (*(int *)(iVar5 + 0x440) == 0) {
      piStack_e0 = (int *)0x80004003;
      piStack_e4 = (int *)0x5cf7a4;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x40);
    piStack_e4 = (int *)0x5cf7b3;
    piVar7 = (int *)FUN_005cf8b7();
    iVar8 = *piVar7;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    if (iVar8 == 0) {
      piStack_e0 = (int *)0x80004003;
      piStack_e4 = (int *)0x5cf7c7;
      FUN_00878dfb();
    }
    piVar7 = (int *)*piVar7;
    piStack_e0 = (int *)((*(uint *)(unaff_EBP + -0x14) & 0xff) -
                        (*(uint *)(unaff_EBP + -0x30) & 0xff));
    piStack_e4 = (int *)((uint)*(byte *)(unaff_EBP + -0x13) - (uint)*(byte *)(unaff_EBP + -0x2f));
    piVar9 = (int *)(**(code **)(*piVar7 + 0x44))(piVar7);
    if ((int)piVar9 < 0) {
      piStack_e0 = (int *)0x5cf7fe;
      piStack_dc = piVar9;
      piStack_d8 = piVar7;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      piStack_d8 = (int *)0x5cf80f;
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
  }
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    FUN_005cf8ec();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x34);
code_r0x005cf715:
  iVar5 = *(int *)(unaff_EBP + -0x20);
  goto LAB_005cf71d;
}


