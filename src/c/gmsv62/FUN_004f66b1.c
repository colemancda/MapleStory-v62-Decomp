/* FUN_004f66b1 - 0x004f66b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f66b1(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  bool bVar9;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined **ppuStack_e4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  FUN_004eb96a();
  if (*(int *)(extraout_ECX + 0x730) != 0) {
    iVar2 = *(int *)(extraout_ECX + 0x734);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x734);
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x2c) = this;
    if (iVar2 == 0) {
      if (*(int *)(extraout_ECX + 0x730) == 0) {
        FUN_00878dfb();
      }
      iVar2 = FUN_00432a57();
      if (iVar2 == 0) {
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00403191();
        iVar2 = *(int *)(extraout_ECX + 0x730);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar2 == 0) {
          FUN_00878dfb();
        }
        bVar9 = DAT_0097c1ac == 0;
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x730);
        if (bVar9) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x20) = DAT_0097c1ac;
        FUN_004320e3();
        ppuStack_e4 = (undefined **)0x4f6795;
        puVar3 = (undefined4 *)FUN_0042a39f();
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
        FUN_00412600();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        FUN_0040ee87();
        iVar2 = *(int *)this;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (iVar2 == 0) {
          FUN_00878dfb();
        }
        iVar2 = **(int **)this;
        *(int **)(unaff_EBP + -0x10) = *(int **)this;
        iVar2 = (**(code **)(iVar2 + 100))();
        if (iVar2 < 0) {
          ppuStack_e4 = (undefined **)0x4f6826;
          FUN_00878e09();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        piVar8 = *(int **)(unaff_EBP + -0x2c);
        if (*piVar8 == 0) {
          FUN_00878dfb();
        }
        piVar1 = (int *)*piVar8;
        iStack_e8 = (**(code **)(*piVar1 + 0xe0))();
        if (iStack_e8 < 0) {
          uStack_ec = 0x4f686d;
          ppuStack_e4 = (undefined **)piVar1;
          FUN_00878e09();
        }
        ppuStack_e4 = (undefined **)0x0;
        iStack_e8 = 0x4f687e;
        FUN_004031b7();
        iVar2 = *piVar8;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (iVar2 == 0) {
          ppuStack_e4 = (undefined **)0x4f6890;
          FUN_00878dfb();
        }
        ppuStack_e4 = (undefined **)(unaff_EBP + -0x24);
        iStack_e8 = 0x4f68a4;
        FUN_00425067();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        ppuStack_e4 = (undefined **)0x4f68b4;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          ppuStack_e4 = (undefined **)0x4f68bf;
          FUN_00878dfb();
        }
        ppuStack_e4 = (undefined **)(unaff_EBP + -0x1c);
        iStack_e8 = 0x4f68ca;
        FUN_007d4a9a();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar2 = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = 0x68;
        while( true ) {
          iVar7 = *(int *)(unaff_EBP + -0x28);
          if ((*(int *)(iVar7 + 0x728) == 0) ||
             (*(uint *)(*(int *)(iVar7 + 0x728) + -4) <= *(uint *)(unaff_EBP + -0x20))) break;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          ppuStack_e4 = (undefined **)0x4f690c;
          FUN_004f5e7e();
          iStack_e8 = unaff_EBP + -0x14;
          ppuStack_e4 = &PTR_LAB_00964ee0;
          uStack_ec = 0x4f691b;
          FUN_0041354c();
          ppuStack_e4 = (undefined **)0x4f6927;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          ppuStack_e4 = (undefined **)0x4f6934;
          FUN_00403191();
          ppuStack_e4 = (undefined **)(unaff_EBP + -0x3c);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iStack_e8 = 0x4f6948;
          iStack_e8 = FUN_00449749();
          uStack_ec = 0x4f6951;
          uStack_f0 = FUN_00411641();
          *(undefined4 **)(unaff_EBP + -0x10) = &uStack_ec;
          iStack_f4 = 0x4f695d;
          FUN_004033a1();
          uStack_f0 = *(undefined4 *)(unaff_EBP + -0x18);
          iStack_f4 = 0x3f;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          uStack_f8 = 0x4f696e;
          FUN_004115d9();
          uStack_f8 = 0x4f6975;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          ppuStack_e4 = (undefined **)0x4f6982;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            ppuStack_e4 = (undefined **)0x4f698d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          ppuStack_e4 = (undefined **)0x4f699a;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            ppuStack_e4 = (undefined **)0x4f69a5;
            FUN_00878dfb();
          }
          uStack_ec = *(undefined4 *)(*(int *)(iVar7 + 0x728) + iVar2);
          ppuStack_e4 = (undefined **)0x0;
          iStack_e8 = 0xffffffff;
          uStack_f0 = 0;
          iStack_f4 = 0;
          uStack_f8 = 0x4f69bd;
          (*DAT_0097b4c8)();
          uStack_f8 = 0x4f69ca;
          FUN_0087a1b0();
          uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x728) + iVar2);
          *(int **)(unaff_EBP + -0x10) = &iStack_f4;
          uStack_f8 = 0x3fffffff;
          (*DAT_0097b4c8)(0,0,uVar5,0xffffffff,*(undefined4 *)(unaff_EBP + -0x10));
          iStack_e8 = unaff_EBP + -0x14;
          ppuStack_e4 = &PTR_LAB_00964ed8;
          uStack_ec = 0x4f69fc;
          FUN_0041354c();
          ppuStack_e4 = (undefined **)0x4f6a08;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          ppuStack_e4 = (undefined **)0x4f6a18;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          ppuStack_e4 = (undefined **)0x4f6a28;
          FUN_00403191();
          ppuStack_e4 = (undefined **)(unaff_EBP + -0xc0);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_e8 = 0x4f6a3f;
          iStack_e8 = FUN_00449749();
          uStack_ec = 0x4f6a48;
          uStack_f0 = FUN_00411641();
          *(undefined4 **)(unaff_EBP + -0x10) = &uStack_ec;
          iStack_f4 = 0x4f6a54;
          FUN_004033a1();
          uStack_f0 = *(undefined4 *)(unaff_EBP + -0x18);
          iStack_f4 = unaff_EBP + -0xa0;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          uStack_f8 = 0x4f6a6a;
          uVar5 = FUN_00411641();
          *(undefined4 **)(unaff_EBP + -0x50) = &uStack_f8;
          FUN_004033a1(uVar5);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_0044974c();
          uVar6 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_f4 = 0x8c - (uVar6 >> 1);
          uStack_f8 = 0x4f6a9f;
          FUN_004115d9();
          uStack_f8 = 0x4f6aa6;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          ppuStack_e4 = (undefined **)0x4f6ab6;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            ppuStack_e4 = (undefined **)0x4f6ac1;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          ppuStack_e4 = (undefined **)0x4f6ad1;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            ppuStack_e4 = (undefined **)0x4f6adc;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          ppuStack_e4 = (undefined **)0x4f6ae9;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            ppuStack_e4 = (undefined **)0x4f6af4;
            FUN_00878dfb();
          }
          iStack_e8 = unaff_EBP + -0x14;
          ppuStack_e4 = &PTR_LAB_00964ee0;
          uStack_ec = 0x4f6b0c;
          FUN_0041354c();
          ppuStack_e4 = (undefined **)0x4f6b18;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          ppuStack_e4 = (undefined **)0x4f6b25;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          ppuStack_e4 = (undefined **)0x4f6b35;
          FUN_00403191();
          ppuStack_e4 = (undefined **)(unaff_EBP + -0x70);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_e8 = 0x4f6b49;
          iStack_e8 = FUN_00449749();
          uStack_ec = 0x4f6b52;
          uStack_f0 = FUN_00411641();
          *(undefined4 **)(unaff_EBP + -0x50) = &uStack_ec;
          iStack_f4 = 0x4f6b5e;
          uStack_ec = extraout_ECX_00;
          FUN_004033a1();
          uStack_f0 = *(undefined4 *)(unaff_EBP + -0x18);
          iStack_f4 = unaff_EBP + -0x90;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          uStack_f8 = 0x4f6b74;
          uVar5 = FUN_00411641();
          *(undefined4 **)(unaff_EBP + -0x10) = &uStack_f8;
          FUN_004033a1(uVar5);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_0044974c();
          uVar6 = FUN_00448ebb();
          iStack_f4 = 0xeb - (uVar6 >> 1);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          uStack_f8 = 0x4f6ba9;
          FUN_004115d9();
          uStack_f8 = 0x4f6bb0;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          ppuStack_e4 = (undefined **)0x4f6bc0;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            ppuStack_e4 = (undefined **)0x4f6bcb;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          ppuStack_e4 = (undefined **)0x4f6bd8;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            ppuStack_e4 = (undefined **)0x4f6be3;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          ppuStack_e4 = (undefined **)0x4f6bf0;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            ppuStack_e4 = (undefined **)0x4f6bfb;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_00402676();
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x1a;
          iVar2 = iVar2 + 0xc;
        }
        ppuStack_e4 = (undefined **)0x4f6c22;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
        ppuStack_e4 = (undefined **)(unaff_EBP + -0x3c);
        iStack_e8 = 0x4f6c2c;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          ppuStack_e4 = (undefined **)0x4f6c38;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        ppuStack_e4 = (undefined **)0x4f6c42;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        ppuStack_e4 = (undefined **)(unaff_EBP + -0x4c);
        iStack_e8 = 0x4f6c4c;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          ppuStack_e4 = (undefined **)0x4f6c58;
          FUN_00878dfb();
        }
        iVar2 = **(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (iVar2 == 0) {
          ppuStack_e4 = (undefined **)0x4f6c6e;
          FUN_00878dfb();
        }
        ppuStack_e4 = (undefined **)0x4f6c79;
        piVar8 = (int *)FUN_004113e5();
        iVar2 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (iVar2 == 0) {
          ppuStack_e4 = (undefined **)0x4f6c8e;
          FUN_00878dfb();
        }
        piVar8 = (int *)*piVar8;
        uStack_ec = *(undefined4 *)(unaff_EBP + -0x3c);
        iStack_e8 = *(undefined4 *)(unaff_EBP + -0x38);
        ppuStack_e4 = *(undefined ***)(unaff_EBP + -0x34);
        iVar2 = *piVar8;
        uStack_f8 = *(undefined4 *)(unaff_EBP + -0x48);
        iStack_f4 = *(int *)(unaff_EBP + -0x44);
        uStack_f0 = *(undefined4 *)(unaff_EBP + -0x40);
        *(int **)(unaff_EBP + -0x28) = piVar8;
        iVar2 = (**(code **)(iVar2 + 0x90))(piVar8,0,0,*(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
        }
        piVar8 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_00403191(&DAT_00980690);
        piVar8 = *(int **)(unaff_EBP + -0x2c);
        iVar2 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar2 = FUN_0042a378();
        FUN_004031b7(iVar2 + 1000,3);
        iVar2 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar8 = (int *)FUN_004113e5(unaff_EBP + -0x10);
        iVar2 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar8 = (int *)*piVar8;
        iVar2 = (**(code **)(*piVar8 + 0x90))
                          (piVar8,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x60),
                           *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x70),
                           *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                           *(undefined4 *)(unaff_EBP + -100));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar8,&DAT_00963de8);
        }
        piVar8 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        piVar8 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
        piVar8 = *(int **)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


