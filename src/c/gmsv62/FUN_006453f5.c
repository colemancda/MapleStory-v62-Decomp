/* FUN_006453f5 - 0x006453f5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006453f5(void)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  int iStack_10c;
  undefined4 *puStack_108;
  int iStack_104;
  code *pcStack_100;
  int iStack_fc;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0xb4) = uVar2;
  uVar3 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x20) = uVar3 & 0xffff;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar4 = extraout_ECX;
  if ((uVar3 & 0xffff) != 0) {
    do {
      FUN_00645bb2();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0042459a();
      iStack_fc = 0x645457;
      FUN_0045e3a0();
      uVar2 = FUN_0042459a();
      *(undefined8 *)(unaff_EBP + -0x54) = 0;
      *(undefined4 *)(unaff_EBP + -0x5c) = uVar2;
      iVar4 = FUN_0045e2eb();
      if ((iVar4 / 10000 == 0xcf) || (iVar4 / 10000 == 0xe9)) {
        iStack_fc = unaff_EBP + -0x54;
        pcStack_100 = (code *)0x645491;
        FUN_004245d2();
      }
      else {
        sVar1 = FUN_00424561();
        *(int *)(unaff_EBP + -0x44) = (int)sVar1;
      }
      sVar1 = FUN_00424561();
      *(int *)(unaff_EBP + -0x4c) = (int)sVar1;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      FUN_0045e2eb();
      iStack_fc = unaff_EBP + -0x8c;
      pcStack_100 = (code *)0x6454cd;
      iVar4 = FUN_00554ef3();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0052e11f();
      FUN_0046575e();
      iVar4 = *(int *)(iVar4 + 4);
      *(int *)(unaff_EBP + -0x3c) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0046575e();
      if (iVar4 == 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0x21000003;
        *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
        iStack_fc = unaff_EBP + 8;
        *(undefined1 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
        pcStack_100 = FUN_00645bb2;
        __CxxThrowException_8();
      }
      FUN_0045e2eb();
      iStack_fc = unaff_EBP + -0x24;
      pcStack_100 = (code *)0x645521;
      puVar5 = (undefined4 *)FUN_0045a1d8();
      iStack_104 = *puVar5;
      iStack_fc = 0;
      pcStack_100 = (code *)0xffffffff;
      puStack_108 = (undefined4 *)0x0;
      iStack_10c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      uVar2 = FUN_0045e2eb();
      puVar5 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x30,uVar2);
      uVar2 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      (*DAT_0097b4c8)(0,0,uVar2,0xffffffff,&iStack_10c,0x3fffffff);
      iStack_fc = 0x64557d;
      FUN_00402e8e();
      iStack_fc = 0x645589;
      FUN_00402f41();
      FUN_00402fa6();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        iStack_fc = 0x6455a5;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        iStack_fc = 0x6455b9;
        FUN_00434e38();
      }
      iStack_fc = 1;
      pcStack_100 = (code *)0x6455cb;
      pcStack_100 = (code *)FUN_0045e2eb();
      iStack_104 = unaff_EBP + -0x28;
      puStack_108 = (undefined4 *)0x6455d7;
      puVar5 = (undefined4 *)FUN_005536ce();
      iStack_fc = 0x6455e1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x60),
                 (IBinding *)*puVar5);
      FUN_004125e6();
      iVar4 = FUN_0045e2eb();
      if ((iVar4 / 10000 == 0xcf) || (iVar4 / 10000 == 0xe9)) {
        iStack_fc = 0x645617;
        FUN_006496e3();
        iStack_fc = 0x645622;
        FUN_00645c3d();
      }
      if (*(int *)(unaff_EBP + -0x5c) != 0) {
        iStack_fc = 0x64563b;
        FUN_006496e3();
        iStack_fc = 0x645646;
        FUN_00645c3d();
        FUN_0045e2eb();
        iStack_fc = 0x64565c;
        iVar4 = FUN_0054e7b3();
        *(int *)(unaff_EBP + -0x2c) = iVar4;
        if (iVar4 != 0) {
          iStack_fc = 0x645676;
          iVar4 = FUN_00455c59();
          iVar4 = *(int *)(iVar4 + 4);
          FUN_0045e4a2();
          iStack_fc = iVar4 + 0x33;
          pcStack_100 = (code *)0x64568d;
          uVar3 = FUN_0045f03e();
          pcStack_100 = *(code **)(iVar4 + 0x3d);
          *(uint *)(unaff_EBP + -0x14) = uVar3 & 0xff;
          iStack_104 = iVar4 + 0x39;
          puStack_108 = (undefined4 *)0x64569f;
          sVar1 = FUN_0045f084();
          iVar6 = FUN_0045e2eb();
          *(int *)(unaff_EBP + -0x1c) = iVar6;
          if (iVar6 / 1000000 == 1) {
            *(int *)(unaff_EBP + -0x1c) = (*(int *)(unaff_EBP + -0x1c) / 1000) % 10;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x1c) = 2;
          }
          iStack_fc = *(int *)(unaff_EBP + -0x2c) + 0x60;
          pcStack_100 = (code *)0x6456ff;
          iVar6 = FUN_00413367();
          if (*(int *)(unaff_EBP + -0x14) - iVar6 < 6) {
            iStack_fc = *(int *)(unaff_EBP + -0x2c) + 0x60;
            pcStack_100 = (code *)0x64571e;
            iVar6 = FUN_00413367();
            if (iVar6 - *(int *)(unaff_EBP + -0x14) < 6) {
              iStack_fc = *(int *)(unaff_EBP + -0x2c) + 0x54;
              *(int *)(unaff_EBP + -0x14) = iStack_fc;
              pcStack_100 = (code *)0x64573a;
              iVar6 = FUN_00413367();
              if (iVar6 != 0) {
                iStack_fc = *(int *)(unaff_EBP + -0x14);
                pcStack_100 = (code *)0x64574e;
                uVar3 = FUN_00413367();
                if ((-(uint)((int)sVar1 / 100 != 0) & 1 << ((char)((int)sVar1 / 100) - 1U & 0x1f) &
                    uVar3) == 0) goto LAB_006457a1;
              }
              if ((*(int *)(unaff_EBP + -0x1c) == 2) ||
                 (*(uint *)(unaff_EBP + -0x1c) == (uint)*(byte *)(iVar4 + 0x11))) {
                iVar4 = *(int *)(unaff_EBP + -0x10);
                iStack_fc = 0x645773;
                FUN_006496e3();
                iStack_fc = 0x64577e;
                FUN_00645c3d();
                iVar4 = *(int *)(iVar4 + 0xbc);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + -4);
                }
                iStack_fc = 0x64579f;
                piVar7 = (int *)FUN_0045f1e3();
                *piVar7 = iVar4 + -1;
              }
            }
          }
        }
      }
LAB_006457a1:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00645bc9();
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x20));
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  if ((*(int *)(iVar4 + 0xc0) != 0) && (*(int *)(*(int *)(iVar4 + 0xc0) + -4) != 0)) {
    iStack_fc = 0x6457e5;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
    iStack_fc = unaff_EBP + -0x94;
    pcStack_100 = (code *)0x6457f7;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_fc = 0x645803;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_fc = 0x645813;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
    iStack_fc = unaff_EBP + -0x84;
    puVar5 = &DAT_00980690;
    pcStack_100 = (code *)0x645820;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_fc = 0x64582c;
      FUN_00878dfb();
      puVar5 = extraout_ECX_00;
    }
    iStack_fc = 0;
    pcStack_100 = (code *)(unaff_EBP + -0x94);
    iStack_104 = unaff_EBP + -0x84;
    *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_108;
    iStack_10c = 0xa42;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_108 = puVar5;
    FUN_00679e4e(&puStack_108);
    iStack_10c = unaff_EBP + -0xf4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    pcStack_100 = (code *)0x64587f;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar4 != 0) {
      iStack_fc = 0x645895;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_fc = 0x6458a6;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_fc = 0x6458b6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_fc = 0x6458c1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_fc = 0x6458d1;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_fc = 0x6458dc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_fc = 0x6458ec;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_fc = 0x6458f7;
      FUN_00878dfb();
    }
    iStack_fc = 0x645900;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
    iStack_fc = unaff_EBP + -0xa4;
    pcStack_100 = (code *)0x64590d;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_fc = 0x645919;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_fc = 0x645926;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
    iStack_fc = unaff_EBP + -0xb4;
    puVar5 = &DAT_00980690;
    pcStack_100 = (code *)0x645933;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_fc = 0x64593f;
      FUN_00878dfb();
      puVar5 = extraout_ECX_01;
    }
    iStack_fc = 0;
    pcStack_100 = (code *)(unaff_EBP + -0xa4);
    iStack_104 = unaff_EBP + -0xb4;
    *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_108;
    iStack_10c = 0xa43;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_108 = puVar5;
    FUN_00679e4e(&puStack_108);
    iStack_10c = unaff_EBP + -0xc4;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    pcStack_100 = (code *)0x645992;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar4;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar4 != 0) {
      iStack_fc = 0x6459a8;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_fc = 0x6459b9;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_fc = 0x6459c9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_fc = 0x6459d4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_fc = 0x6459e4;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_fc = 0x6459ef;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_fc = 0x6459ff;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_fc = 0x645a0a;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    iStack_fc = 0;
    iStack_104 = 1;
    puStack_108 = (undefined4 *)0x645a20;
    pcStack_100 = (code *)&stack0xffffff0c;
    iStack_104 = FUN_0048b981();
    *(code ***)(unaff_EBP + -0x14) = &pcStack_100;
    puStack_108 = (undefined4 *)0x645a2c;
    FUN_00448a17();
    iStack_104 = unaff_EBP + -0xd4;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_108 = (undefined4 *)0x645a3f;
    FUN_0040263d();
    puStack_108 = (undefined4 *)0x645a46;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    pcStack_100 = (code *)0x645a51;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
    FUN_0087a1b0();
    iStack_fc = 0;
    iStack_104 = 1;
    puStack_108 = (undefined4 *)0x645a67;
    pcStack_100 = (code *)&stack0xffffff0c;
    iStack_104 = FUN_0048b981();
    *(code ***)(unaff_EBP + -0x14) = &pcStack_100;
    puStack_108 = (undefined4 *)0x645a73;
    FUN_00448a17();
    iStack_104 = unaff_EBP + -0xe4;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_108 = (undefined4 *)0x645a86;
    FUN_0040263d();
    puStack_108 = (undefined4 *)0x645a8d;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    pcStack_100 = (code *)0x645a98;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
    pcStack_100 = (code *)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + -0x14) = &iStack_fc;
    iStack_104 = 0x645aab;
    FUN_0048bb05();
    iStack_104 = unaff_EBP + -0x30;
    *(code ***)(unaff_EBP + -0x34) = &pcStack_100;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_108 = (undefined4 *)0x645abe;
    FUN_0048bb05();
    iVar4 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_104 = 0x645ad0;
    FUN_0048b99c();
    iStack_104 = 0x645ad7;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_fc = 0x645ae7;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_fc = 0x645af2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_fc = 0x645b02;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_fc = 0x645b0d;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(iVar4 + 0x94);
    *(undefined4 *)(iVar4 + 0x34) = 1;
    *(undefined4 *)(iVar4 + 0x38) = 0x32;
    iStack_fc = 0x645b2d;
    FUN_004b2699();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_fc = 0x645b3e;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_fc = 0x645b4f;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
  }
  iStack_fc = 0;
  pcStack_100 = (code *)0x645b61;
  FUN_00646c88();
  FUN_00646f8b();
  FUN_0064700c();
  FUN_006470f3();
  iStack_fc = 0x645b7e;
  FUN_008161f1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


