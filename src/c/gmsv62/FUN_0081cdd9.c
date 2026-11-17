/* FUN_0081cdd9 - 0x0081cdd9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0081cdd9(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  int *piStack_13c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puStack_140 = &stack0xfffffec8;
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffec8;
  piStack_13c = (int *)0x8d7;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_144 = 0x81ce0e;
  FUN_00679e4e();
  piStack_13c = (int *)(unaff_EBP - 0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_140 = (undefined1 *)0x81ce1d;
  FUN_0040263d();
  puStack_140 = (undefined1 *)0x81ce24;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x578) != 0) {
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffed0;
    FUN_004125cc();
    iVar3 = FUN_0081f2c6();
    if (iVar3 != 0) {
      *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffed0;
      FUN_004125cc();
      iVar3 = FUN_0081f819();
      if (iVar3 != 0) {
        *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffed0;
        FUN_004125cc();
        iVar3 = FUN_0081f418();
        if (iVar3 != 0) {
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          iVar3 = extraout_ECX;
          while ((*(int *)(iVar3 + 0x584) != 0 &&
                 (piVar5 = *(int **)(unaff_EBP + -0x34),
                 piVar5 < *(int **)(*(int *)(iVar3 + 0x584) + -4)))) {
            iVar4 = *(int *)(unaff_EBP + -0x24) + *(int *)(iVar3 + 0x584);
            iVar3 = *(int *)(iVar4 + 0x20);
            *(int *)(unaff_EBP + -0x20) = iVar4;
            if ((iVar3 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x58c) != 0)) {
              *(undefined4 *)(unaff_EBP + -0x2c) = 0;
              FUN_00470891();
              *(undefined1 *)(unaff_EBP + -4) = 3;
              FUN_0087a1b0();
              iVar3 = *(int *)(unaff_EBP + -0x20);
              piStack_13c = (int *)0x81cf42;
              FUN_0087b818();
              *(undefined4 *)(unaff_EBP + -0x30) = 0;
              FUN_00470891();
              *(undefined1 *)(unaff_EBP + -4) = 4;
              FUN_0046febf();
              *(undefined1 *)(unaff_EBP + -4) = 3;
              piVar5 = extraout_ECX_00;
              if (*(int *)(unaff_EBP + -0x30) != 0) {
                piVar5 = (int *)(*(int *)(unaff_EBP + -0x30) + -0xc);
                FUN_00403384();
              }
              puStack_140 = (undefined1 *)&piStack_13c;
              *(int ***)(unaff_EBP + -0x14) = &piStack_13c;
              uStack_144 = 0x81cf9c;
              piStack_13c = piVar5;
              FUN_004489f5();
              puStack_140 = (undefined1 *)0x0;
              uStack_144 = 0;
              iStack_148 = unaff_EBP + -0x3c;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              uVar2 = FUN_004489f5();
              *(int **)(unaff_EBP + -0x18) = &iStack_148;
              *(undefined1 *)(unaff_EBP + -4) = 6;
              FUN_0048bccf(uVar2);
              *(undefined1 *)(unaff_EBP + -4) = 8;
              uVar2 = FUN_00411641(0);
              puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x68,uVar2);
              this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x24);
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar6);
              FUN_00412600();
              *(undefined1 *)(unaff_EBP + -4) = 3;
              FUN_00412600();
              FUN_00403191();
              *(undefined1 *)(unaff_EBP + -4) = 9;
              FUN_00403191();
              *(undefined1 *)(unaff_EBP + -4) = 10;
              FUN_004031b7();
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              FUN_004031b7();
              iVar3 = *(int *)this;
              *(undefined1 *)(unaff_EBP + -4) = 0xc;
              if (iVar3 == 0) {
                FUN_00878dfb();
              }
              piVar5 = (int *)FUN_00425067();
              iVar3 = *piVar5;
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              if (iVar3 == 0) {
                FUN_00878dfb();
              }
              iVar3 = *(int *)(unaff_EBP + -0x24);
              *(int *)(unaff_EBP + -0x18) = *piVar5;
              iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x584);
              if (*(int *)this == 0) {
                FUN_00878dfb();
              }
              piVar5 = (int *)FUN_00425067();
              *(int **)(unaff_EBP + -0x1c) = piVar5;
              iVar7 = *piVar5;
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              if (iVar7 == 0) {
                FUN_00878dfb();
              }
              iVar7 = *(int *)this;
              *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_EBP + -0x1c);
              if (iVar7 == 0) {
                FUN_00878dfb();
              }
              piVar5 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x24);
              *(int **)(unaff_EBP + -0x1c) = piVar5;
              iVar7 = FUN_0040eed0();
              *(int *)(unaff_EBP + -0x18) =
                   (*(int *)(*(int *)(unaff_EBP + -0x24) + 4 +
                            *(int *)(*(int *)(unaff_EBP + -0x10) + 0x584)) - iVar7) + 0x23;
              iVar7 = FUN_0040eea9();
              piStack_13c = *(int **)(unaff_EBP + -0xfc);
              iStack_148 = *(int *)(unaff_EBP + -200);
              uStack_144 = *(undefined4 *)(unaff_EBP + -0xc4);
              puStack_140 = *(undefined1 **)(unaff_EBP + -0xc0);
              iVar3 = (**(code **)(*piVar5 + 0x90))
                                (*(undefined4 *)(unaff_EBP + -0x1c),
                                 (*(int *)(iVar3 + iVar4) - iVar7) + 0xd,
                                 *(undefined4 *)(unaff_EBP + -0x18),
                                 *(undefined4 *)(unaff_EBP + -0xcc));
              if (iVar3 < 0) {
                FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
              }
              FUN_004125e6();
              FUN_004125e6();
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x11c);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 10;
              iVar3 = FUN_00402bc3(unaff_EBP + -300);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 9;
              iVar3 = FUN_00402bc3(unaff_EBP + -0xcc);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 3;
              iVar3 = FUN_00402bc3(unaff_EBP + -0xfc);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              FUN_004031b7(7000,3);
              iVar3 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x24);
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar5 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x24);
              iVar3 = *piVar5;
              *(int **)(unaff_EBP + -0x14) = piVar5;
              iVar3 = (**(code **)(iVar3 + 0x110))
                                (piVar5,0x20,*(undefined4 *)(unaff_EBP + -0xdc),
                                 *(undefined4 *)(unaff_EBP + -0xd8),
                                 *(undefined4 *)(unaff_EBP + -0xd4),
                                 *(undefined4 *)(unaff_EBP + -0xd0),
                                 *(undefined4 *)(unaff_EBP + -0xec),
                                 *(undefined4 *)(unaff_EBP + -0xe8),
                                 *(undefined4 *)(unaff_EBP + -0xe4),
                                 *(undefined4 *)(unaff_EBP + -0xe0));
              if (iVar3 < 0) {
                piStack_13c = (int *)0x81d24f;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              iVar3 = FUN_00402bc3();
              if (iVar3 < 0) {
                FUN_00878dfb();
              }
              piVar5 = (int *)(unaff_EBP - 0xec);
              *(undefined1 *)(unaff_EBP + -4) = 3;
              iVar3 = FUN_00402bc3();
              if (iVar3 < 0) {
                FUN_00878dfb();
                piVar5 = extraout_ECX_01;
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (*(int *)(unaff_EBP + -0x2c) != 0) {
                piVar5 = (int *)(*(int *)(unaff_EBP + -0x2c) - 0xc);
                FUN_00403384();
              }
            }
            iVar3 = *(int *)(unaff_EBP + -0x20);
            iVar4 = *(int *)(iVar3 + 0x18);
            if (iVar4 == 0) {
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                        ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1c),
                         (IBinding *)0x0);
            }
            else {
              if (iVar4 == 1) {
                puStack_140 = (undefined1 *)&piStack_13c;
                *(int ***)(unaff_EBP + -0x14) = &piStack_13c;
                uStack_144 = 0x81d40f;
                piStack_13c = piVar5;
                FUN_004489f5();
                puStack_140 = (undefined1 *)0x0;
                uStack_144 = 0;
                iStack_148 = unaff_EBP + -0x58;
                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                uVar2 = FUN_004489f5();
                *(int **)(unaff_EBP + -0x18) = &iStack_148;
                *(undefined1 *)(unaff_EBP + -4) = 0x12;
                iStack_148 = extraout_ECX_04;
                FUN_0048bccf(uVar2);
                *(undefined1 *)(unaff_EBP + -4) = 0x13;
                FUN_00679d86(unaff_EBP + -0x50,0x8cb);
                *(undefined1 *)(unaff_EBP + -4) = 0x16;
                uVar2 = FUN_00411641(0);
                puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x48,uVar2);
                _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                          ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1c),
                           (IBinding *)*puVar6);
                FUN_00412600();
                *(undefined1 *)(unaff_EBP + -4) = 0x15;
                FUN_00402676();
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_00412600();
              }
              else {
                if (iVar4 == 2) {
                  puStack_140 = (undefined1 *)&piStack_13c;
                  *(int ***)(unaff_EBP + -0x14) = &piStack_13c;
                  uStack_144 = 0x81d378;
                  piStack_13c = piVar5;
                  FUN_004489f5();
                  puStack_140 = (undefined1 *)0x0;
                  uStack_144 = 0;
                  iStack_148 = unaff_EBP + -0x44;
                  *(undefined1 *)(unaff_EBP + -4) = 0x17;
                  uVar2 = FUN_004489f5();
                  *(int **)(unaff_EBP + -0x18) = &iStack_148;
                  *(undefined1 *)(unaff_EBP + -4) = 0x18;
                  iStack_148 = extraout_ECX_03;
                  FUN_0048bccf(uVar2);
                  *(undefined1 *)(unaff_EBP + -4) = 0x19;
                  FUN_00679d86(unaff_EBP + -0x38,0x8cc);
                  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                  uVar2 = FUN_00411641(0);
                  puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x54,uVar2);
                  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1c),
                             (IBinding *)*puVar6);
                  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
                    (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
                  FUN_00402676();
                  piVar5 = *(int **)(unaff_EBP + -0x44);
                  *(undefined1 *)(unaff_EBP + -4) = 0;
                }
                else {
                  if (iVar4 != 3) goto LAB_0081d48a;
                  puStack_140 = (undefined1 *)&piStack_13c;
                  *(int ***)(unaff_EBP + -0x14) = &piStack_13c;
                  uStack_144 = 0x81d2d3;
                  piStack_13c = piVar5;
                  FUN_004489f5();
                  puStack_140 = (undefined1 *)0x0;
                  uStack_144 = 0;
                  iStack_148 = unaff_EBP + -0x5c;
                  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
                  uVar2 = FUN_004489f5();
                  *(int **)(unaff_EBP + -0x18) = &iStack_148;
                  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
                  iStack_148 = extraout_ECX_02;
                  FUN_0048bccf(uVar2);
                  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                  FUN_00679d86(unaff_EBP + -0x4c,0x8cd);
                  *(undefined1 *)(unaff_EBP + -4) = 0x22;
                  uVar2 = FUN_00411641(0);
                  puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x60,uVar2);
                  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1c),
                             (IBinding *)*puVar6);
                  if (*(int **)(unaff_EBP + -0x60) != (int *)0x0) {
                    (**(code **)(**(int **)(unaff_EBP + -0x60) + 8))();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x21;
                  FUN_00402676();
                  piVar5 = *(int **)(unaff_EBP + -0x5c);
                  *(undefined1 *)(unaff_EBP + -4) = 0;
                }
                if (piVar5 != (int *)0x0) {
                  (**(code **)(*piVar5 + 8))();
                }
              }
LAB_0081d48a:
              if (*(int *)(iVar3 + 0x1c) == 0) {
                FUN_00878dfb();
              }
              piVar5 = *(int **)(iVar3 + 0x1c);
              iVar4 = (**(code **)(*piVar5 + 0xe0))();
              if (iVar4 < 0) {
                uStack_144 = 0x81d4ba;
                puStack_140 = (undefined1 *)iVar4;
                piStack_13c = piVar5;
                FUN_00878e09();
              }
              piStack_13c = (int *)0x81d4c9;
              VariantInit((VARIANTARG *)(unaff_EBP + -0xac));
              piStack_13c = (int *)(unaff_EBP + -0xac);
              puStack_140 = (undefined1 *)0x81d4da;
              iVar4 = FUN_00402e32();
              if (iVar4 < 0) {
                piStack_13c = (int *)0x81d4e6;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x23;
              piStack_13c = (int *)0x81d4f3;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
              piStack_13c = (int *)(unaff_EBP + -0x8c);
              puStack_140 = (undefined1 *)0x81d504;
              iVar4 = FUN_00402e32();
              if (iVar4 < 0) {
                piStack_13c = (int *)0x81d510;
                FUN_00878dfb();
              }
              piStack_13c = (int *)0x0;
              *(undefined1 *)(unaff_EBP + -4) = 0x24;
              puStack_140 = (undefined1 *)0x81d51f;
              FUN_004031b7();
              piStack_13c = (int *)0x0;
              *(undefined1 *)(unaff_EBP + -4) = 0x25;
              puStack_140 = (undefined1 *)0x81d531;
              FUN_004031b7();
              iVar4 = *(int *)(iVar3 + 0x1c);
              *(undefined1 *)(unaff_EBP + -4) = 0x26;
              if (iVar4 == 0) {
                piStack_13c = (int *)0x81d544;
                FUN_00878dfb();
              }
              piStack_13c = (int *)(unaff_EBP + -0x28);
              puStack_140 = (undefined1 *)0x81d554;
              piVar5 = (int *)FUN_00425067();
              iVar4 = *piVar5;
              *(undefined1 *)(unaff_EBP + -4) = 0x27;
              if (iVar4 == 0) {
                piStack_13c = (int *)0x81d568;
                FUN_00878dfb();
              }
              iVar4 = *(int *)(unaff_EBP + -0x24);
              *(int *)(unaff_EBP + -0x18) = *piVar5;
              iVar7 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x584);
              if (*(int *)(iVar3 + 0x1c) == 0) {
                piStack_13c = (int *)0x81d588;
                FUN_00878dfb();
              }
              piStack_13c = (int *)(unaff_EBP + -100);
              puStack_140 = (undefined1 *)0x81d59b;
              piVar5 = (int *)FUN_00425067();
              *(int **)(unaff_EBP + -0x14) = piVar5;
              iVar1 = *piVar5;
              *(undefined1 *)(unaff_EBP + -4) = 0x28;
              if (iVar1 == 0) {
                piStack_13c = (int *)0x81d5b0;
                FUN_00878dfb();
              }
              iVar3 = *(int *)(iVar3 + 0x1c);
              *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_EBP + -0x14);
              if (iVar3 == 0) {
                piStack_13c = (int *)0x81d5c7;
                FUN_00878dfb();
              }
              piVar5 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x1c);
              *(int **)(unaff_EBP + -0x1c) = piVar5;
              iVar3 = FUN_0040eed0();
              *(int *)(unaff_EBP + -0x18) =
                   (*(int *)(*(int *)(unaff_EBP + -0x24) + 4 +
                            *(int *)(*(int *)(unaff_EBP + -0x10) + 0x584)) - iVar3) + 0x23;
              iVar3 = FUN_0040eea9();
              uStack_144 = *(undefined4 *)(unaff_EBP + -0xac);
              puStack_140 = *(undefined1 **)(unaff_EBP + -0xa8);
              piStack_13c = *(int **)(unaff_EBP + -0xa4);
              iStack_148 = *(int *)(unaff_EBP + -0x80);
              iVar3 = (**(code **)(*piVar5 + 0x90))
                                (*(undefined4 *)(unaff_EBP + -0x1c),
                                 (*(int *)(iVar4 + iVar7) - iVar3) + 0xd,
                                 *(undefined4 *)(unaff_EBP + -0x18),
                                 *(undefined4 *)(unaff_EBP + -0x8c),
                                 *(undefined4 *)(unaff_EBP + -0x88),
                                 *(undefined4 *)(unaff_EBP + -0x84));
              if (iVar3 < 0) {
                FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
              }
              piVar5 = *(int **)(unaff_EBP + -100);
              *(undefined1 *)(unaff_EBP + -4) = 0x27;
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 8))(piVar5);
              }
              piVar5 = *(int **)(unaff_EBP + -0x28);
              *(undefined1 *)(unaff_EBP + -4) = 0x26;
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 8))(piVar5);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x25;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x10c);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x24;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x7c);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x23;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x8c);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              iVar3 = FUN_00402bc3(unaff_EBP + -0xac);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
              iVar3 = FUN_00402e32(unaff_EBP + -0x9c,&DAT_00980690);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x29;
              VariantInit((VARIANTARG *)(unaff_EBP + -0xbc));
              iVar3 = FUN_00402e32(unaff_EBP + -0xbc,&DAT_00980690);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              iVar3 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x1c);
              *(undefined1 *)(unaff_EBP + -4) = 0x2a;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar5 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x1c);
              iVar3 = *piVar5;
              *(int **)(unaff_EBP + -0x14) = piVar5;
              iVar3 = (**(code **)(iVar3 + 0x110))
                                (piVar5,0x20,*(undefined4 *)(unaff_EBP + -0xbc),
                                 *(undefined4 *)(unaff_EBP + -0xb8),
                                 *(undefined4 *)(unaff_EBP + -0xb4),
                                 *(undefined4 *)(unaff_EBP + -0xb0),
                                 *(undefined4 *)(unaff_EBP + -0x9c),
                                 *(undefined4 *)(unaff_EBP + -0x98),
                                 *(undefined4 *)(unaff_EBP + -0x94),
                                 *(undefined4 *)(unaff_EBP + -0x90));
              if (iVar3 < 0) {
                piStack_13c = (int *)0x81d779;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x29;
              iVar3 = FUN_00402bc3();
              if (iVar3 < 0) {
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              iVar3 = FUN_00402bc3();
              if (iVar3 < 0) {
                FUN_00878dfb();
              }
            }
            *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x44;
            iVar3 = *(int *)(unaff_EBP + -0x10);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          uVar2 = 1;
          goto LAB_0081d7dc;
        }
      }
    }
  }
  FUN_004027eb();
  uVar2 = 0;
LAB_0081d7dc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


