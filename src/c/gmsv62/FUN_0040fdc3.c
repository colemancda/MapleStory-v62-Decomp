/* FUN_0040fdc3 - 0x0040fdc3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040fdc3(void)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined1 *puVar6;
  int unaff_EBP;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  puVar6 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined **)(unaff_EBP + -0x1c) = &DAT_00978678 + (int)puVar6 * 0x18;
  puStack_e0 = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_e4 = (undefined1 *)0x40fe07;
  iVar1 = FUN_004084c5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00412817();
  FUN_00412829();
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar1 + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00412829();
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0xc);
    FUN_004125cc();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if ((*(int *)(unaff_EBP + 0x18) == 0) || (*(int *)(unaff_EBP + 0x18) / 100000 != 0x11)) {
LAB_00410039:
      if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 8) == 0) {
        puStack_e4 = &stack0xffffff24;
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff24;
        piStack_e8 = (int *)0x4102ee;
        puStack_e0 = puVar6;
        FUN_004833ff();
        puStack_e0 = (undefined1 *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_e4 = (undefined1 *)0x410300;
        FUN_0040263d();
        puStack_e4 = (undefined1 *)0x410307;
        FUN_004048a4();
        puStack_e0 = (undefined1 *)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_e4 = (undefined1 *)0x410315;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        puStack_e0 = (undefined1 *)0x410324;
        iVar1 = FUN_0041a425();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          puStack_e0 = (undefined1 *)0x410335;
          FUN_00878dfb();
        }
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_e0 = (undefined1 *)0x41034a;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          puStack_e0 = (undefined1 *)0x410355;
          FUN_00878dfb();
        }
      }
      else {
        puStack_e0 = (undefined1 *)(unaff_EBP + 0x18);
        puStack_e4 = (undefined1 *)0x410058;
        puVar4 = (undefined4 *)FUN_00679e4e();
        piVar8 = (int *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (piVar8 == (int *)0x0) {
          puStack_e4 = (undefined1 *)0x0;
        }
        else {
          puStack_e4 = (undefined1 *)*piVar8;
        }
        puStack_e0 = (undefined1 *)(unaff_EBP + -0x10);
        piStack_e8 = (int *)0x410075;
        FUN_004172fb();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00402fa6();
        piVar8 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x14);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        for (puVar6 = (undefined1 *)0x0;
            (iVar1 = *piVar8, iVar1 != 0 && (puVar6 < *(undefined1 **)(iVar1 + -4)));
            puVar6 = puVar6 + 1) {
          *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff24;
          puStack_e0 = *(undefined1 **)(unaff_EBP + -0x1c);
          puStack_e4 = (undefined1 *)0x4100ae;
          FUN_0040810c();
          puStack_e0 = (undefined1 *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          puStack_e4 = (undefined1 *)0x4100be;
          FUN_0040263d();
          puStack_e4 = (undefined1 *)0x4100c5;
          FUN_004048a4();
          puStack_e0 = (undefined1 *)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          puStack_e4 = (undefined1 *)0x4100d3;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          puStack_e0 = (undefined1 *)0x4100e2;
          FUN_00417232();
          FUN_004027b3();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_e0 = (undefined1 *)0x4100f7;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            puStack_e0 = (undefined1 *)0x410102;
            FUN_00878dfb();
          }
          if (((*(int *)(unaff_EBP + 0x10) < 2000) || (2999 < *(int *)(unaff_EBP + 0x10))) &&
             (puVar7 = puVar6, *(int *)(unaff_EBP + 0x18) != 0)) {
LAB_004101b6:
            FUN_0087a1b0();
            puStack_e0 = (undefined1 *)0x0;
            uStack_ec = 0x4101cb;
            piStack_e8 = (int *)puVar7;
            puStack_e4 = &stack0xffffff28;
            piStack_e8 = (int *)FUN_00412335();
            *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e4;
            uStack_ec = 0x4101d7;
            FUN_004033a1();
            piStack_e8 = (int *)(unaff_EBP + -0x48);
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            uStack_ec = 0x4101e7;
            FUN_0040263d();
            uStack_ec = 0x4101ee;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            puStack_e4 = (undefined1 *)0x4101f9;
            iVar1 = FUN_004032b4();
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            *(int *)(unaff_EBP + -0x38) = iVar1;
            if (iVar1 != 0) {
              puStack_e0 = (undefined1 *)0x410210;
              iVar1 = FUN_00404b30();
              if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                puStack_e0 = (undefined1 *)0x410221;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            puStack_e0 = (undefined1 *)0x41022e;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              puStack_e0 = (undefined1 *)0x410239;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              puStack_e0 = *(undefined1 **)(unaff_EBP + -0x18);
              puStack_e4 = (undefined1 *)0x41024c;
              FUN_0040ee87();
              *(undefined1 *)(unaff_EBP + -4) = 0x1e;
              FUN_0087a1b0();
              piStack_e8 = (int *)0x410265;
              puStack_e4 = puVar6;
              puStack_e0 = &stack0xffffff28;
              puStack_e4 = (undefined1 *)FUN_00412335();
              *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e0;
              piStack_e8 = (int *)0x410271;
              FUN_004033a1();
              *(undefined1 *)(unaff_EBP + -4) = 0x1e;
              puStack_e4 = (undefined1 *)0x41027d;
              FUN_0040263d();
              puStack_e4 = (undefined1 *)0x410284;
              FUN_0040bfd0();
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              puStack_e0 = (undefined1 *)0x410291;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                puStack_e0 = (undefined1 *)0x41029c;
                FUN_00878dfb();
              }
            }
            FUN_004027eb();
          }
          else {
            puStack_e0 = (undefined1 *)0x410128;
            puVar4 = (undefined4 *)FUN_00416f08();
            puStack_e4 = &stack0xffffff24;
            *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff24;
            puStack_e0 = (undefined1 *)*puVar4;
            piStack_e8 = (int *)0x410136;
            FUN_004833ff();
            puStack_e0 = (undefined1 *)(unaff_EBP + -0x98);
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            puStack_e4 = (undefined1 *)0x41014b;
            FUN_0040263d();
            puStack_e4 = (undefined1 *)0x410152;
            FUN_004048a4();
            puStack_e0 = (undefined1 *)(unaff_EBP + -0x28);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            puStack_e4 = (undefined1 *)0x410160;
            FUN_00412348();
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            puStack_e0 = (undefined1 *)0x41016f;
            iVar1 = FUN_0041a425();
            if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
              puStack_e0 = (undefined1 *)0x410180;
              FUN_00878dfb();
            }
            FUN_004027b3();
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            puStack_e0 = (undefined1 *)0x410198;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              puStack_e0 = (undefined1 *)0x4101a3;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + 0x18) != 0) {
              puVar7 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 4 + *piVar8);
              goto LAB_004101b6;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_004027eb();
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x20;
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_e0 = (undefined1 *)0x4102ca;
          FUN_00878dfb();
        }
        iVar1 = FUN_0040cf4d();
        if (iVar1 == 0) {
          puStack_e0 = (undefined1 *)0x4102df;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)0x0);
        }
      }
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        if ((1999 < *(int *)(unaff_EBP + 0x10)) && (*(int *)(unaff_EBP + 0x10) < 3000)) {
          puStack_e0 = (undefined1 *)FUN_0040cf4d();
          puStack_e4 = (undefined1 *)0x4103a3;
          FUN_00416f7b();
        }
        puStack_e0 = (undefined1 *)0x4103b0;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_e0 = (undefined1 *)0x4103c3;
          FUN_00878dfb();
        }
        puStack_e0 = (undefined1 *)0x4103cf;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        puStack_e0 = (undefined1 *)0x4103dc;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
          puStack_e0 = (undefined1 *)0x4103ed;
          (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
        }
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x34) == 0) {
            puStack_e0 = (undefined1 *)0x4103ff;
            FUN_00878dfb();
          }
          piStack_e8 = *(int **)(unaff_EBP + -0x34);
          puStack_e0 = (undefined1 *)(unaff_EBP + -0xa8);
          puStack_e4 = (undefined1 *)0x1;
          uStack_ec = 0x410415;
          iVar1 = (**(code **)(*piStack_e8 + 0xc))();
          if (iVar1 != 0) break;
          puStack_e0 = (undefined1 *)(unaff_EBP + -0x14);
          puStack_e4 = (undefined1 *)0x41042d;
          FUN_00405a23();
          puStack_e0 = (undefined1 *)(unaff_EBP + -0x14);
          *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff24;
          puStack_e4 = (undefined1 *)0x41043e;
          FUN_0040810c();
          puStack_e0 = (undefined1 *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          puStack_e4 = (undefined1 *)0x41044e;
          FUN_0040263d();
          puStack_e4 = (undefined1 *)0x410455;
          FUN_004048a4();
          puStack_e0 = (undefined1 *)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          puStack_e4 = (undefined1 *)0x410463;
          FUN_00412348();
          puStack_e4 = (undefined1 *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          piStack_e8 = (int *)0x410470;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            puStack_e0 = (undefined1 *)0x41047d;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            FUN_00402fa6();
          }
          else {
            puStack_e0 = (undefined1 *)0x4104a6;
            uVar2 = FUN_0087a208();
            *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
            puStack_e0 = (undefined1 *)0x4104b6;
            FUN_00417232();
            puStack_e0 = (undefined1 *)0x4104c0;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            if (*(int *)(unaff_EBP + -0x1c) == 0) {
              puStack_e0 = (undefined1 *)0x4104d3;
              FUN_00878dfb();
            }
            puStack_e0 = (undefined1 *)0x4104e2;
            FUN_00404960();
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            puStack_e0 = (undefined1 *)0x4104ef;
            FUN_004035f5();
            *(undefined1 *)(unaff_EBP + -4) = 0x30;
            if (*(int **)(unaff_EBP + -0x88) != (int *)0x0) {
              puStack_e0 = (undefined1 *)0x410503;
              (**(code **)(**(int **)(unaff_EBP + -0x88) + 8))();
            }
            *(undefined4 *)(unaff_EBP + -0x80) = 0;
            while( true ) {
              if (*(int *)(unaff_EBP + -0x28) == 0) {
                puStack_e0 = (undefined1 *)0x410515;
                FUN_00878dfb();
              }
              piStack_e8 = *(int **)(unaff_EBP + -0x28);
              puStack_e0 = (undefined1 *)(unaff_EBP + -0x58);
              puStack_e4 = (undefined1 *)0x1;
              uStack_ec = 0x410528;
              iVar1 = (**(code **)(*piStack_e8 + 0xc))();
              if (iVar1 != 0) break;
              puStack_e0 = (undefined1 *)(unaff_EBP + -0x18);
              puStack_e4 = (undefined1 *)0x41053d;
              FUN_00405a23();
              *(undefined4 *)(unaff_EBP + 0x18) = 0;
              puStack_e0 = (undefined1 *)(unaff_EBP + -0x68);
              *(undefined1 *)(unaff_EBP + -4) = 0x32;
              puStack_e4 = (undefined1 *)0x410559;
              FUN_00679e4e();
              puStack_e0 = (undefined1 *)0x410562;
              iVar1 = FUN_00410919();
              FUN_00402fa6();
              if (iVar1 == 0) {
                *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff24;
                puStack_e0 = (undefined1 *)0x410613;
                FUN_00408b49();
                puStack_e0 = (undefined1 *)(unaff_EBP + -200);
                *(undefined1 *)(unaff_EBP + -4) = 0x32;
                puStack_e4 = (undefined1 *)0x410626;
                FUN_0040263d();
                puStack_e4 = (undefined1 *)0x41062d;
                FUN_004048a4();
                puStack_e0 = (undefined1 *)(unaff_EBP + -100);
                *(undefined1 *)(unaff_EBP + -4) = 0x37;
                puStack_e4 = (undefined1 *)0x41063b;
                FUN_00412348();
                *(undefined1 *)(unaff_EBP + -4) = 0x38;
                puStack_e0 = (undefined1 *)0x41064a;
                FUN_00417232();
                *(undefined1 *)(unaff_EBP + -4) = 0x3b;
                if (*(int **)(unaff_EBP + -100) != (int *)0x0) {
                  puStack_e0 = (undefined1 *)0x41065b;
                  (**(code **)(**(int **)(unaff_EBP + -100) + 8))();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x3a;
                puStack_e0 = (undefined1 *)0x41066b;
                iVar1 = FUN_00402bc3();
                if (iVar1 < 0) {
                  puStack_e0 = (undefined1 *)0x410676;
                  FUN_00878dfb();
                }
                if (*(int *)(unaff_EBP + 0x10) == 0) {
                  puStack_e0 = (undefined1 *)0x410685;
                  FUN_00878dfb();
                }
                uVar5 = FUN_0040cf4d();
                if (*(uint *)(unaff_EBP + 0xc) < uVar5) {
                  FUN_0087a1b0();
                  puStack_e0 = *(undefined1 **)(unaff_EBP + 0xc);
                  puStack_e4 = (undefined1 *)0x41073d;
                  puStack_e0 = (undefined1 *)FUN_00412335();
                  *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff24;
                  puStack_e4 = (undefined1 *)0x41074b;
                  FUN_00402e8e();
                  puStack_e0 = (undefined1 *)(unaff_EBP + -0xd8);
                  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
                  puStack_e4 = (undefined1 *)0x41075e;
                  FUN_0040263d();
                  puStack_e4 = (undefined1 *)0x410765;
                  FUN_004048a4();
                  puStack_e0 = (undefined1 *)(unaff_EBP + -0x84);
                  *(undefined1 *)(unaff_EBP + -4) = 0x40;
                  puStack_e4 = (undefined1 *)0x410776;
                  FUN_00412348();
                  *(undefined1 *)(unaff_EBP + -4) = 0x41;
                  puStack_e0 = (undefined1 *)0x410785;
                  iVar1 = FUN_0041a485();
                  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                    puStack_e0 = (undefined1 *)0x410796;
                    FUN_00878dfb();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x40;
                  if (*(int **)(unaff_EBP + -0x84) != (int *)0x0) {
                    puStack_e0 = (undefined1 *)0x4107aa;
                    (**(code **)(**(int **)(unaff_EBP + -0x84) + 8))();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
                }
                else {
                  FUN_0087a1b0();
                  puStack_e0 = (undefined1 *)0x4106a9;
                  FUN_0040263d();
                  puStack_e0 = (undefined1 *)0x4106b0;
                  iVar1 = FUN_0040cf4d();
                  puStack_e0 = (undefined1 *)(iVar1 + -1);
                  puStack_e4 = (undefined1 *)0x4106b7;
                  puStack_e0 = (undefined1 *)FUN_00412335();
                  *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff24;
                  puStack_e4 = (undefined1 *)0x4106c5;
                  FUN_00402e8e();
                  puStack_e0 = (undefined1 *)(unaff_EBP + -0xb8);
                  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
                  puStack_e4 = (undefined1 *)0x4106d8;
                  FUN_0040263d();
                  puStack_e4 = (undefined1 *)0x4106df;
                  FUN_004048a4();
                  puStack_e0 = (undefined1 *)(unaff_EBP + -0x7c);
                  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
                  puStack_e4 = (undefined1 *)0x4106ed;
                  FUN_00412348();
                  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
                  puStack_e0 = (undefined1 *)0x4106fc;
                  iVar1 = FUN_0041a485();
                  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                    puStack_e0 = (undefined1 *)0x41070d;
                    FUN_00878dfb();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
                  if (*(int **)(unaff_EBP + -0x7c) != (int *)0x0) {
                    puStack_e0 = (undefined1 *)0x41071e;
                    (**(code **)(**(int **)(unaff_EBP + -0x7c) + 8))();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
                }
                puStack_e0 = (undefined1 *)0x4107ba;
                iVar1 = FUN_00402bc3();
                if (iVar1 < 0) {
                  puStack_e0 = (undefined1 *)0x4107c5;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x32;
                if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
                  puStack_e0 = (undefined1 *)0x4107d6;
                  (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
                }
              }
              else {
                *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff24;
                puStack_e0 = (undefined1 *)0x410587;
                FUN_00408b49();
                puStack_e0 = (undefined1 *)(unaff_EBP + -0x98);
                *(undefined1 *)(unaff_EBP + -4) = 0x32;
                puStack_e4 = (undefined1 *)0x41059a;
                FUN_0040263d();
                puStack_e4 = (undefined1 *)0x4105a1;
                FUN_004048a4();
                puStack_e0 = (undefined1 *)(unaff_EBP + -0x5c);
                *(undefined1 *)(unaff_EBP + -4) = 0x34;
                puStack_e4 = (undefined1 *)0x4105af;
                FUN_00412348();
                *(undefined1 *)(unaff_EBP + -4) = 0x35;
                puStack_e0 = (undefined1 *)0x4105be;
                iVar1 = FUN_0041a485();
                if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                  puStack_e0 = (undefined1 *)0x4105cf;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x34;
                if (*(int **)(unaff_EBP + -0x5c) != (int *)0x0) {
                  puStack_e0 = (undefined1 *)0x4105e0;
                  (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x32;
                puStack_e0 = (undefined1 *)0x4105f0;
                iVar1 = FUN_00402bc3();
                if (iVar1 < 0) {
                  puStack_e0 = (undefined1 *)0x4105ff;
                  FUN_00878dfb();
                }
              }
              piVar8 = (int *)0x0;
              if (*(int *)(unaff_EBP + 0x18) != 0) {
                puVar4 = *(undefined4 **)(*(int *)(unaff_EBP + -0x2c) + 0x14);
                if (puVar4 == (undefined4 *)0x0) {
                  puStack_e0 = (undefined1 *)0x0;
                }
                else {
                  puStack_e0 = (undefined1 *)*puVar4;
                }
                piVar8 = *(int **)(*(int *)(unaff_EBP + -0x2c) + 0x10);
                if (piVar8 == (int *)0x0) {
                  puStack_e4 = (undefined1 *)0x0;
                }
                else {
                  puStack_e4 = (undefined1 *)*piVar8;
                }
                piStack_e8 = (int *)0x41080d;
                FUN_00402444();
                piVar8 = *(int **)(unaff_EBP + 0x18);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x31;
              if (piVar8 != (int *)0x0) {
                puStack_e0 = (undefined1 *)0x41081e;
                (**(code **)(*piVar8 + 8))();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x30;
              if (*(int *)(unaff_EBP + -0x18) != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x18) = 0;
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
              puStack_e0 = (undefined1 *)0x41084b;
              (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            puStack_e0 = (undefined1 *)0x410858;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              puStack_e0 = (undefined1 *)0x410863;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
              puStack_e0 = (undefined1 *)0x410874;
              (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
              puStack_e0 = (undefined1 *)0x410885;
              (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            if (*(int *)(unaff_EBP + -0x14) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
            }
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
          puStack_e0 = (undefined1 *)0x4108b2;
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_e0 = (undefined1 *)0x4108c2;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          puStack_e0 = (undefined1 *)0x4108cd;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          puStack_e0 = (undefined1 *)0x4108de;
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          puStack_e0 = (undefined1 *)0x4108f0;
          FUN_00412f17();
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          puStack_e0 = (undefined1 *)0x410904;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        goto LAB_00410904;
      }
    }
    else {
      puStack_e0 = (undefined1 *)(unaff_EBP + -0x14);
      puStack_e4 = (undefined1 *)0x40fe74;
      FUN_0054e2c6();
      psVar3 = *(short **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) {
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      else {
        puStack_e0 = (undefined1 *)0x40fe9d;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_e0 = (undefined1 *)0x40feaa;
        FUN_00403191();
        puStack_e0 = (undefined1 *)0x0;
        puStack_e4 = (undefined1 *)(unaff_EBP + -0x48);
        piStack_e8 = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        uStack_ec = 0x40fec0;
        uVar2 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_ec;
        uStack_ec = extraout_ECX;
        FUN_004033a1(uVar2);
        iVar1 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00405a1d(iVar1);
        FUN_00402660();
        FUN_00404a02(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_e4 = (undefined1 *)0x40fef5;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x24) = iVar1;
        *(undefined4 *)(unaff_EBP + 0x18) = 0;
        if (iVar1 != 0) {
          puStack_e0 = (undefined1 *)0x40ff0b;
          iVar1 = FUN_00404b30();
          if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
            puStack_e0 = (undefined1 *)0x40ff1c;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        puStack_e0 = (undefined1 *)0x40ff2c;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          puStack_e0 = (undefined1 *)0x40ff37;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_e0 = (undefined1 *)0x40ff44;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          puStack_e0 = (undefined1 *)0x40ff4f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_e0 = (undefined1 *)0x40ff5c;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          puStack_e0 = (undefined1 *)0x40ff67;
          FUN_00878dfb();
        }
        FUN_0087a1b0();
        puStack_e0 = *(undefined1 **)(unaff_EBP + 0x10);
        puStack_e4 = (undefined1 *)0x40ff7a;
        puStack_e0 = (undefined1 *)FUN_0044dddc();
        puStack_e4 = (undefined1 *)0x40ff81;
        puStack_e0 = (undefined1 *)FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff24;
        puStack_e4 = (undefined1 *)0x40ff8f;
        FUN_00402e8e();
        puStack_e0 = (undefined1 *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_e4 = (undefined1 *)0x40ff9f;
        FUN_0040263d();
        puStack_e4 = (undefined1 *)0x40ffa6;
        FUN_004048a4();
        puStack_e0 = (undefined1 *)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_e4 = (undefined1 *)0x40ffb4;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_e0 = (undefined1 *)0x40ffc3;
        iVar1 = FUN_0041a425();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          puStack_e0 = (undefined1 *)0x40ffd4;
          FUN_00878dfb();
        }
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_e0 = (undefined1 *)0x40ffe9;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          puStack_e0 = (undefined1 *)0x40fff4;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_004027eb();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            puStack_e0 = (undefined1 *)0x410038;
            FUN_00403384();
          }
          goto LAB_00410039;
        }
        FUN_004027eb();
        psVar3 = *(short **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      if (psVar3 != (short *)0x0) {
        puStack_e0 = (undefined1 *)0x410019;
        FUN_00403384();
      }
    }
    FUN_004027eb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412829();
  FUN_004027eb();
LAB_00410904:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


