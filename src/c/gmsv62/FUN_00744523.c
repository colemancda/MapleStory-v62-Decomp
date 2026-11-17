/* FUN_00744523 - 0x00744523 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00744523(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar7;
  undefined4 uStack_318;
  int iStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined1 *puStack_304;
  undefined4 uStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined4 *puStack_2d8;
  int *piStack_2d4;
  int iStack_2d0;
  undefined1 *puStack_2cc;
  int *piStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int *piStack_2a4;
  
  FUN_00879bb8();
  iVar2 = DAT_0097be44;
  bVar7 = DAT_0097be44 == 0;
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (bVar7) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar2 + -4);
  }
  iVar2 = *(int *)(extraout_ECX + 0xaa0);
  if (*(int *)(iVar2 + 0x3c) == 0) {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + -1;
  }
  else {
    *(int *)(unaff_EBP + -0x40) =
         *(int *)(unaff_EBP + -0x40) + (*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x3c));
  }
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xc24);
  if (*(int *)(extraout_ECX + 0xc24) != 0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar1 = (undefined4 *)FUN_0042a39f();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
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
  if (*(int *)this == 0) {
    FUN_00878dfb();
  }
  iVar2 = (**(code **)(**(int **)this + 0xe0))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87();
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0xc24);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x20) = piVar6;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_00412600();
  iVar2 = *(int *)(unaff_EBP + -0x24);
  FUN_0040ee87();
  iVar2 = *(int *)(iVar2 + 0xc24);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0xc24);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x20) = piVar6;
  iVar2 = (**(code **)(iVar2 + 0xfc))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x24) + 0xc24);
  if (*(int *)(*(int *)(unaff_EBP + -0x24) + 0xc24) == 0) {
    FUN_00878dfb();
  }
  iVar2 = (**(code **)(*(int *)*piVar6 + 0xb4))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_00403191();
  iVar2 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0xc24);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x20) = piVar6;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  iVar2 = *(int *)(unaff_EBP + -0x24);
  iVar3 = *(int *)(iVar2 + 0xc24);
  *(undefined4 *)(unaff_EBP + -4) = 7;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  if (piVar6 == (int *)0x0) {
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x10);
  }
  *(int **)(unaff_EBP + -0x20) = piVar6;
  iVar3 = (**(code **)(*piVar6 + 0x8c))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  iVar3 = (**(code **)(*piVar6 + 0x8c))();
  if (iVar3 < 0) {
    iStack_2ac = 0x74491e;
    iStack_2a8 = iVar3;
    piStack_2a4 = piVar6;
    FUN_00878e09();
  }
  iVar3 = *(int *)(iVar2 + 0xc6c);
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (0 < iVar3) {
    do {
      uVar4 = *(int *)(unaff_EBP + -0x40) - *(int *)(unaff_EBP + -0x30);
      if (((-1 < (int)uVar4) && (DAT_0097be44 != 0)) && (uVar4 < *(uint *)(DAT_0097be44 + -4))) {
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(DAT_0097be44 + uVar4 * 8 + 4);
        FUN_00748841();
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar3 != 0) {
          piStack_2a4 = (int *)0x744982;
          FUN_00403191();
          piStack_2a4 = (int *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_2a8 = 0x744994;
          FUN_004031b7();
          piStack_2a4 = (int *)(unaff_EBP + -0xf8);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_2a8 = 0x7449ae;
          FUN_0074883d();
          iStack_2a8 = 0x7449b5;
          FUN_0073eaf2();
          iStack_2a8 = 0x7449c1;
          iStack_2a8 = FUN_00449749();
          iStack_2ac = 0x7449ca;
          FUN_0074883d();
          iStack_2ac = 0x7449d4;
          iStack_2b0 = FUN_00411641();
          *(int **)(unaff_EBP + -0x14) = &iStack_2ac;
          iStack_2b4 = 0x7449e0;
          FUN_004033a1();
          iStack_2b0 = *(int *)(iVar2 + 0xc64) + (*(int *)(unaff_EBP + -0x30) + 1) * -0xd;
          iStack_2b4 = 3;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_2b8 = 0x7449fe;
          FUN_004115d9();
          iStack_2b8 = 0x744a05;
          uVar5 = FUN_00448e3a();
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          piStack_2a4 = (int *)0x744a18;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_2a4 = (int *)0x744a23;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          piStack_2a4 = (int *)0x744a33;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_2a4 = (int *)0x744a3e;
            FUN_00878dfb();
          }
          if (*(int *)(iVar2 + 0xc68) == 3) {
            iVar3 = *(int *)(unaff_EBP + -0x18) + 1;
          }
          else {
            iVar3 = *(int *)(iVar2 + 0xc64);
          }
          *(int *)(unaff_EBP + -0x3c) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_2a4 = (int *)0x744a6b;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x1c);
          piStack_2a4 = *(int **)(unaff_EBP + -0x3c);
          iVar3 = *(int *)(iVar2 + 0xc68);
          *(int *)(unaff_EBP + -0x34) = 0x236 - *(int *)(iVar2 + 3000);
          iStack_2a8 = *(undefined4 *)(unaff_EBP + -0x34);
          iStack_2ac = ((-1 - *(int *)(unaff_EBP + -0x30)) * 0xd -
                       (((iVar3 != 3) - 1 & 0xfffffff7) + 10)) + *(int *)(iVar2 + 0xc64);
          iStack_2b0 = 0;
          iStack_2b4 = *(int *)(unaff_EBP + -0x10);
          *(int **)(unaff_EBP + -0x1c) = *(int **)(unaff_EBP + -0x10);
          iStack_2b8 = 0x744ac2;
          iStack_2a8 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))();
          if (iStack_2a8 < 0) {
            piStack_2a4 = *(int **)(unaff_EBP + -0x1c);
            iStack_2ac = 0x744ad4;
            FUN_00878e09();
          }
        }
        piStack_2a4 = (int *)(*(int *)(unaff_EBP + -0x28) + 0x10);
        iStack_2a8 = 0x744ae3;
        iVar3 = FUN_00413367();
        if (iVar3 == 0xe) {
LAB_00744b1a:
          if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x28) == 0) goto LAB_007455c9;
          *(uint *)(unaff_EBP + -0x34) =
               (*(int *)(unaff_EBP + -0x30) * -0xd - (-(uint)(*(int *)(iVar2 + 0xc68) != 3) & 5)) +
               -0xf + *(int *)(iVar2 + 0xc64);
          piStack_2a4 = (int *)0x3a;
          iStack_2a8 = 0x744b56;
          uVar5 = FUN_005e312e();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
          piStack_2a4 = (int *)(unaff_EBP + -100);
          iStack_2a8 = 0x744b6a;
          FUN_0046fcad();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_2a4 = (int *)(unaff_EBP + -0x20);
          iStack_2a8 = 0x744b90;
          FUN_005c1cfb();
          piStack_2a4 = (int *)(*(int *)(unaff_EBP + -0x28) + 0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_2a8 = 0x744ba3;
          uVar5 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
          piStack_2a4 = (int *)0x744bb4;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          piStack_2a4 = (int *)0x744bc7;
          iStack_2a8 = FUN_00411641();
          *(int ***)(unaff_EBP + -0x14) = &piStack_2a4;
          iStack_2ac = 0x744bd3;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          *(int *)(unaff_EBP + -0x18) = iVar2 + 0xb60 + *(int *)(unaff_EBP + -0x1c) * 4;
          iStack_2a8 = 0x744be9;
          FUN_0044974c();
          iStack_2a8 = 0x744bf0;
          uVar5 = FUN_00448ebb();
          *(undefined4 *)(unaff_EBP + -0x3c) = uVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_2a4 = (int *)0x744c03;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2a4 = (int *)0x744c0e;
            FUN_00878dfb();
          }
          piStack_2a4 = (int *)0x744c1a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          piStack_2a4 = (int *)0x744c2a;
          FUN_00403191();
          piStack_2a4 = (int *)(unaff_EBP + -0xd8);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_2a8 = 0x744c44;
          iStack_2a8 = FUN_00449749();
          iStack_2ac = 0x744c4d;
          iStack_2b0 = FUN_00411641();
          *(int **)(unaff_EBP + -0x14) = &iStack_2ac;
          iStack_2b4 = 0x744c59;
          FUN_004033a1();
          iStack_2b0 = *(undefined4 *)(unaff_EBP + -0x34);
          iStack_2b4 = 3;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_2b8 = 0x744c6a;
          FUN_004115d9();
          iStack_2b8 = 0x744c71;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          piStack_2a4 = (int *)0x744c81;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2a4 = (int *)0x744c8c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_2a4 = (int *)0x744c9c;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2a4 = (int *)0x744ca7;
            FUN_00878dfb();
          }
          piStack_2a4 = (int *)0x744cb3;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          piStack_2a4 = (int *)0x744cc3;
          FUN_00403191();
          piStack_2a4 = (int *)(unaff_EBP + -0x1c8);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          iStack_2a8 = 0x744cdd;
          iStack_2a8 = FUN_00449749();
          iStack_2ac = 0x744ce6;
          iStack_2b0 = FUN_00411641();
          *(int **)(unaff_EBP + -0x1c) = &iStack_2ac;
          iStack_2b4 = 0x744cf2;
          FUN_004033a1();
          iStack_2b0 = *(undefined4 *)(unaff_EBP + -0x34);
          iStack_2b4 = *(int *)(unaff_EBP + -0x3c) + 0x27;
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          *(int *)(unaff_EBP + -0x14) = iStack_2b4;
          iStack_2b8 = 0x744d0b;
          FUN_004115d9();
          iStack_2b8 = 0x744d12;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          piStack_2a4 = (int *)0x744d22;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2a4 = (int *)0x744d2d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_2a4 = (int *)0x744d3d;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2a4 = (int *)0x744d48;
            FUN_00878dfb();
          }
          if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x30) != 0) {
            *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
            FUN_0045e2eb();
            piStack_2a4 = (int *)(unaff_EBP + -0xa4);
            iStack_2a8 = 0x744d78;
            piVar6 = (int *)FUN_0045a1d8();
            iStack_2ac = *piVar6;
            piStack_2a4 = (int *)0x0;
            iStack_2a8 = 0xffffffff;
            iStack_2b0 = 0;
            iStack_2b4 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            iStack_2b8 = 0x744d8b;
            (*DAT_0097b4c8)();
            iStack_2b8 = 0x744d98;
            FUN_0087a1b0();
            *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
            *(int **)(unaff_EBP + -0x18) = &iStack_2b4;
            iStack_2b8 = 0x744db2;
            iStack_2b8 = FUN_0045e2eb();
            iStack_2bc = unaff_EBP + -0x98;
            iStack_2c0 = 0x744dc2;
            puVar1 = (undefined4 *)FUN_0045a1d8();
            iStack_2c4 = *puVar1;
            iStack_2b8 = 0x3fffffff;
            iStack_2bc = *(undefined4 *)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            iStack_2c0 = -1;
            piStack_2c8 = (int *)0x0;
            puStack_2cc = (undefined1 *)0x0;
            iStack_2d0 = 0x744ddb;
            (*DAT_0097b4c8)();
            piStack_2a4 = *(int **)(unaff_EBP + -0x18);
            *(undefined4 *)(unaff_EBP + -0x58) = 0;
            iStack_2a8 = 0x744deb;
            FUN_004184ca();
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            if (*(int *)(unaff_EBP + -0x98) != 0) {
              piStack_2a4 = (int *)0x744e02;
              FUN_00434e38();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (*(int *)(unaff_EBP + -0xa4) != 0) {
              piStack_2a4 = (int *)0x744e1a;
              FUN_00434e38();
            }
            piStack_2a4 = (int *)&DAT_0096b6dc;
            *(undefined4 *)(unaff_EBP + -0x60) = 0;
            iStack_2a8 = 0x744e2d;
            FUN_004184ca();
            *(undefined4 *)(unaff_EBP + -0x44) = 0;
            piStack_2a4 = (int *)(unaff_EBP + -0x8c);
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            iStack_2a8 = 0x744e4a;
            puVar1 = (undefined4 *)FUN_00679d86();
            iStack_2a8 = *puVar1;
            piStack_2a4 = *(int **)(unaff_EBP + -0x58);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iStack_2ac = unaff_EBP + -0x44;
            iStack_2b0 = 0x744e62;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            if (*(int *)(unaff_EBP + -0x8c) != 0) {
              piStack_2a4 = (int *)0x744e7c;
              FUN_00403384();
            }
            piStack_2a4 = (int *)(unaff_EBP + -0x90);
            iStack_2a8 = 0x744e90;
            FUN_0046fc68();
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            piStack_2a4 = (int *)0x744e9d;
            FUN_00419192();
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            if (*(int *)(unaff_EBP + -0x90) != 0) {
              piStack_2a4 = (int *)0x744eb4;
              FUN_00403384();
            }
            piStack_2a4 = (int *)0x744ec1;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            piStack_2a4 = (int *)0x744ed1;
            FUN_00403191();
            piStack_2a4 = (int *)(unaff_EBP + -0x1b8);
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            iStack_2a8 = 0x744eee;
            iStack_2a8 = FUN_00449749();
            iStack_2ac = 0x744ef7;
            iStack_2b0 = FUN_00411641();
            *(int **)(unaff_EBP + -0x1c) = &iStack_2ac;
            iStack_2b4 = 0x744f03;
            FUN_004033a1();
            iStack_2b0 = *(undefined4 *)(unaff_EBP + -0x34);
            iStack_2b4 = *(int *)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            iStack_2b8 = 0x744f15;
            FUN_004115d9();
            iStack_2b8 = 0x744f1c;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            piStack_2a4 = (int *)0x744f2c;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_2a4 = (int *)0x744f37;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            piStack_2a4 = (int *)0x744f47;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_2a4 = (int *)0x744f52;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            if (*(int *)(unaff_EBP + -0x44) != 0) {
              piStack_2a4 = (int *)0x744f66;
              FUN_00403384();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (*(int *)(unaff_EBP + -0x60) != 0) {
              piStack_2a4 = (int *)0x744f7b;
              FUN_00403384();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            if (*(int *)(unaff_EBP + -0x58) != 0) {
              piStack_2a4 = (int *)0x744f90;
              FUN_00403384();
            }
          }
          *(undefined4 *)(unaff_EBP + -0x54) = 0;
          *(undefined4 *)(unaff_EBP + -0x48) = 0;
          piStack_2a4 = (int *)(unaff_EBP + -0xa0);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iStack_2a8 = 0x744fbe;
          puVar1 = (undefined4 *)FUN_00679d22();
          piStack_2a4 = (int *)*puVar1;
          iStack_2a8 = unaff_EBP + -0x48;
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          iStack_2ac = 0x744fcf;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          if (*(int *)(unaff_EBP + -0xa0) != 0) {
            piStack_2a4 = (int *)0x744fe9;
            FUN_00434e38();
          }
          piStack_2a4 = (int *)0x744ff6;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          piStack_2a4 = (int *)0x745006;
          FUN_00403191();
          piStack_2a4 = (int *)0x0;
          iStack_2a8 = -1;
          iStack_2ac = *(int *)(unaff_EBP + -0x48);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          iStack_2b0 = 0;
          iStack_2b4 = 0;
          iStack_2b8 = 0x745019;
          (*DAT_0097b4c8)();
          iStack_2b8 = 0x745026;
          FUN_0087a1b0();
          iStack_2b8 = 0;
          iStack_2bc = 0;
          iStack_2c0 = unaff_EBP + -0x108;
          iStack_2c4 = unaff_EBP + -0xe8;
          piStack_2c8 = (int *)0xffffffff;
          iStack_2d0 = 0x745043;
          puStack_2cc = (undefined1 *)&iStack_2b4;
          iStack_2d0 = FUN_00449713();
          piStack_2d4 = (int *)0x745049;
          puStack_2cc = (undefined1 *)FUN_00456ad5();
          *(int ***)(unaff_EBP + -0x14) = &piStack_2c8;
          iStack_2d0 = 0x745056;
          FUN_004033a1();
          puStack_2cc = (undefined1 *)(unaff_EBP + -0x1e8);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          iStack_2d0 = 0x745066;
          FUN_00405a1d();
          iStack_2d0 = 0x74506d;
          FUN_00402660();
          iStack_2d0 = 0x745074;
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          iStack_2c0 = 0x74507f;
          uVar5 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0xb8) = uVar5;
          iStack_2b8 = unaff_EBP + -0xb8;
          iStack_2bc = 0x745094;
          iStack_2b8 = FUN_0041a581();
          if ((iStack_2b8 < 0) && (iStack_2b8 != -0x7fffbffe)) {
            iStack_2bc = 0x7450a5;
            FUN_00878dfb();
          }
          iStack_2b8 = unaff_EBP + -0x1e8;
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          iStack_2bc = 0x7450b5;
          iStack_2b8 = FUN_00402bc3();
          if (iStack_2b8 < 0) {
            iStack_2bc = 0x7450c0;
            FUN_00878dfb();
          }
          iStack_2b8 = unaff_EBP + -0xe8;
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          iStack_2bc = 0x7450d0;
          iStack_2b8 = FUN_00402bc3();
          if (iStack_2b8 < 0) {
            iStack_2bc = 0x7450db;
            FUN_00878dfb();
          }
          iStack_2b8 = unaff_EBP + -0x108;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iStack_2bc = 0x7450eb;
          iStack_2b8 = FUN_00402bc3();
          if (iStack_2b8 < 0) {
            iStack_2bc = 0x7450f6;
            FUN_00878dfb();
          }
          iStack_2b8 = 3;
          iStack_2bc = 0xff;
          iStack_2c0 = 0x745108;
          FUN_004031b7();
          piVar6 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          if (piVar6 == (int *)0x0) {
            iStack_2b8 = 0x80004003;
            iStack_2bc = 0x74511d;
            FUN_00878dfb();
            piVar6 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar6;
          piStack_2c8 = *(int **)(unaff_EBP + -0x54);
          iStack_2c4 = *(undefined4 *)(unaff_EBP + -0x128);
          puStack_2cc = (undefined1 *)(*(int *)(unaff_EBP + -0x34) + 2);
          iStack_2c0 = *(int *)(unaff_EBP + -0x124);
          iStack_2bc = *(undefined4 *)(unaff_EBP + -0x120);
          iStack_2d0 = *(int *)(unaff_EBP + -0x3c) + 4;
          *(int **)(unaff_EBP + -0x14) = piVar6;
          iStack_2b8 = *(undefined4 *)(unaff_EBP + -0x11c);
          puStack_2d8 = (undefined4 *)0x74514c;
          piStack_2d4 = piVar6;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            puStack_2d8 = (undefined4 *)&DAT_00963cc8;
            iStack_2dc = *(undefined4 *)(unaff_EBP + -0x14);
            uStack_2e4 = 0x74515e;
            iStack_2e0 = iVar2;
            FUN_00878e09();
          }
          puStack_2d8 = (undefined4 *)(unaff_EBP + -0x128);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iStack_2dc = 0x74516e;
          puStack_2d8 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_2d8 < 0) {
            iStack_2dc = 0x745179;
            FUN_00878dfb();
          }
          iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x20);
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
          puStack_2d8 = (undefined4 *)0xb25;
          iStack_2dc = unaff_EBP + -0x94;
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          iStack_2e0 = 0x74519d;
          puVar1 = (undefined4 *)FUN_00679d22();
          iStack_2dc = *puVar1;
          puStack_2d8 = (undefined4 *)((iVar2 + 1) / 10);
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          iStack_2e0 = unaff_EBP + -0x38;
          uStack_2e4 = 0x7451b6;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          puStack_2d8 = (undefined4 *)0x7451c8;
          FUN_00414ebb();
          puStack_2d8 = &DAT_00980690;
          iStack_2dc = 0x7451d9;
          FUN_00403191();
          puStack_2d8 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          iStack_2dc = 0x7451e9;
          FUN_00403191();
          puStack_2d8 = (undefined4 *)0x0;
          iStack_2dc = 0;
          iStack_2e0 = -1;
          uStack_2e4 = *(undefined4 *)(unaff_EBP + -0x38);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          uStack_2e8 = 0;
          uStack_2ec = 0;
          (*DAT_0097b4c8)();
          FUN_0087a1b0();
          iStack_2f4 = 0;
          iStack_2f8 = unaff_EBP + -0x168;
          iStack_2fc = unaff_EBP + -0x148;
          uStack_300 = 0xffffffff;
          iStack_308 = 0x745226;
          puStack_304 = (undefined1 *)&uStack_2ec;
          iStack_308 = FUN_00449713();
          uStack_30c = 0x74522c;
          puStack_304 = (undefined1 *)FUN_00456ad5();
          *(undefined4 **)(unaff_EBP + -0x14) = &uStack_300;
          iStack_308 = 0x745239;
          FUN_004033a1();
          puStack_304 = (undefined1 *)(unaff_EBP + -0x1f8);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          iStack_308 = 0x745249;
          FUN_00405a1d();
          iStack_308 = 0x745250;
          FUN_00402660();
          iStack_308 = 0x745257;
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          iStack_2f8 = 0x745262;
          iVar2 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x88) = iVar2;
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
          if (iVar2 != 0) {
            iStack_2f4 = 0x74527e;
            iVar2 = FUN_0041a581();
            if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
              iStack_2f4 = 0x74528f;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          iStack_2f4 = 0x74529f;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_2f4 = 0x7452aa;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          iStack_2f4 = 0x7452ba;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_2f4 = 0x7452c5;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          iStack_2f4 = 0x7452d5;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_2f4 = 0x7452e0;
            FUN_00878dfb();
          }
          iStack_2f4 = unaff_EBP + -0x9c;
          iStack_2f8 = 0x7452f6;
          puVar1 = (undefined4 *)FUN_00679d22();
          iStack_2f4 = *puVar1;
          iStack_2f8 = unaff_EBP + -0x38;
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          iStack_2fc = 0x74530f;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          FUN_00414ebb();
          iStack_2f4 = 0x74532d;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
          iStack_2f4 = unaff_EBP + -0x74;
          iStack_2f8 = 0x745337;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_2f4 = 0x745343;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          iStack_2f4 = 0x745350;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
          iStack_2f4 = unaff_EBP + -0x84;
          iStack_2f8 = 0x74535d;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_2f4 = 0x745369;
            FUN_00878dfb();
          }
          iStack_2f4 = 0;
          iStack_2f8 = 0xffffffff;
          iStack_2fc = *(undefined4 *)(unaff_EBP + -0x38);
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          uStack_300 = 0;
          puStack_304 = (undefined1 *)0x0;
          iStack_308 = 0x74537c;
          (*DAT_0097b4c8)();
          iStack_308 = 0x745389;
          FUN_0087a1b0();
          iStack_308 = 0;
          uStack_30c = 0;
          iStack_310 = unaff_EBP + -0x74;
          iStack_314 = unaff_EBP + -0x84;
          uStack_318 = 0xffffffff;
          uVar5 = FUN_00449713(&puStack_304);
          uVar5 = FUN_00456ad5(uVar5);
          *(undefined4 **)(unaff_EBP + -0x14) = &uStack_318;
          FUN_004033a1(uVar5);
          iVar2 = unaff_EBP + -0x208;
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          FUN_00405a1d(iVar2);
          FUN_00402660();
          FUN_00404a02(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          iStack_310 = 0x7453df;
          iVar2 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x5c) = iVar2;
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
          if (iVar2 != 0) {
            iStack_308 = unaff_EBP + -0x5c;
            uStack_30c = 0x7453f5;
            iStack_308 = FUN_0041a581();
            if ((iStack_308 < 0) && (iStack_308 != -0x7fffbffe)) {
              uStack_30c = 0x745406;
              FUN_00878dfb();
            }
          }
          iStack_308 = unaff_EBP + -0x208;
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          uStack_30c = 0x745416;
          iStack_308 = FUN_00402bc3();
          if (iStack_308 < 0) {
            uStack_30c = 0x745421;
            FUN_00878dfb();
          }
          iStack_308 = unaff_EBP + -0x84;
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          uStack_30c = 0x745431;
          iStack_308 = FUN_00402bc3();
          if (iStack_308 < 0) {
            uStack_30c = 0x74543c;
            FUN_00878dfb();
          }
          iStack_308 = unaff_EBP + -0x74;
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          uStack_30c = 0x745449;
          iStack_308 = FUN_00402bc3();
          if (iStack_308 < 0) {
            uStack_30c = 0x745454;
            FUN_00878dfb();
          }
          iStack_308 = 3;
          uStack_30c = 0xff;
          iStack_310 = 0x745466;
          FUN_004031b7();
          piVar6 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          if (piVar6 == (int *)0x0) {
            iStack_308 = 0x80004003;
            uStack_30c = 0x74547b;
            FUN_00878dfb();
            piVar6 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar6;
          uStack_318 = *(undefined4 *)(unaff_EBP + -0x50);
          iStack_314 = *(undefined4 *)(unaff_EBP + -0x188);
          iVar3 = *(int *)(unaff_EBP + -0x34) + 4;
          iStack_310 = *(undefined4 *)(unaff_EBP + -0x184);
          *(int *)(unaff_EBP + -0x1c) = iVar3;
          uStack_30c = *(undefined4 *)(unaff_EBP + -0x180);
          *(int **)(unaff_EBP + -0x14) = piVar6;
          iStack_308 = *(undefined4 *)(unaff_EBP + -0x17c);
          iVar2 = (**(code **)(iVar2 + 0x80))(piVar6,*(int *)(unaff_EBP + -0x3c) + 0xf,iVar3);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x188);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_004031b7(0xff,3);
          piVar6 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          if (piVar6 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar6 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar6;
          *(int **)(unaff_EBP + -0x14) = piVar6;
          iVar2 = (**(code **)(iVar2 + 0x80))
                            (piVar6,*(int *)(unaff_EBP + -0x3c) + 0x14,
                             *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x4c),
                             *(undefined4 *)(unaff_EBP + -0x1a8),*(undefined4 *)(unaff_EBP + -0x1a4)
                             ,*(undefined4 *)(unaff_EBP + -0x1a0),
                             *(undefined4 *)(unaff_EBP + -0x19c));
          if (iVar2 < 0) {
            piStack_2a4 = *(int **)(unaff_EBP + -0x14);
            iStack_2ac = 0x74553e;
            iStack_2a8 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          piStack_2a4 = (int *)0x74554e;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2a4 = (int *)0x745559;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
            piStack_2a4 = (int *)0x74556a;
            (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
            piStack_2a4 = (int *)0x74557b;
            (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
            piStack_2a4 = (int *)0x7455a4;
            (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00402676();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_00402676();
          iVar2 = *(int *)(unaff_EBP + -0x24);
        }
        else {
          piStack_2a4 = (int *)(*(int *)(unaff_EBP + -0x28) + 0x10);
          iStack_2a8 = 0x744af9;
          iVar3 = FUN_00413367();
          if (iVar3 == 0xf) goto LAB_00744b1a;
          piStack_2a4 = (int *)(*(int *)(unaff_EBP + -0x28) + 0x10);
          iStack_2a8 = 0x744b0f;
          iVar3 = FUN_00413367();
          if (iVar3 == 0x11) goto LAB_00744b1a;
LAB_007455c9:
          piStack_2a4 = (int *)0x7455d6;
          VariantInit((VARIANTARG *)(unaff_EBP + -200));
          piStack_2a4 = (int *)(unaff_EBP + -200);
          iStack_2a8 = 0x7455e3;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_2a4 = (int *)0x7455ef;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          piStack_2a4 = (int *)0x745600;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
          piStack_2a4 = (int *)(unaff_EBP + -0xb4);
          iStack_2a8 = 0x74560d;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_2a4 = (int *)0x745619;
            FUN_00878dfb();
          }
          piStack_2a4 = (int *)(unaff_EBP + -0xb4);
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          iStack_2a8 = 0x745633;
          FUN_0074883d();
          iStack_2a8 = 0x74563a;
          FUN_0073eaf2();
          iStack_2a8 = 0x745646;
          iStack_2a8 = FUN_00449749();
          iStack_2ac = 0x74564f;
          FUN_0074883d();
          iStack_2ac = 0x745659;
          iStack_2b0 = FUN_00411641();
          *(int **)(unaff_EBP + -0x14) = &iStack_2ac;
          iStack_2b4 = 0x745665;
          iStack_2ac = extraout_ECX_00;
          FUN_004033a1();
          iStack_2b0 = (*(int *)(unaff_EBP + -0x30) * -0xd -
                       (-(uint)(*(int *)(iVar2 + 0xc68) != 3) & 5)) + -0xf + *(int *)(iVar2 + 0xc64)
          ;
          iStack_2b4 = 3;
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          iStack_2b8 = 0x745696;
          FUN_004115d9();
          iStack_2b8 = 0x74569d;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          piStack_2a4 = (int *)0x7456ad;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_2a4 = (int *)0x7456b8;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          piStack_2a4 = (int *)0x7456c8;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_2a4 = (int *)0x7456d3;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          piStack_2a4 = (int *)0x7456e5;
          FUN_00748869();
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
        }
      }
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
    } while (*(int *)(unaff_EBP + -0x30) < *(int *)(iVar2 + 0xc6c));
  }
  if (*(int *)(iVar2 + 0xc28) != 0) {
    piStack_2a4 = (int *)0x745715;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
    piStack_2a4 = (int *)(unaff_EBP + -0xb4);
    iStack_2a8 = 0x745727;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_2a4 = (int *)0x745733;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    piStack_2a4 = (int *)0x745740;
    VariantInit((VARIANTARG *)(unaff_EBP + -200));
    piStack_2a4 = (int *)(unaff_EBP + -200);
    iStack_2a8 = 0x74574d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_2a4 = (int *)0x745759;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0xc28);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    if (iVar2 == 0) {
      piStack_2a4 = (int *)0x745772;
      FUN_00878dfb();
    }
    piStack_2c8 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0xc28);
    iStack_2ac = *(int *)(unaff_EBP + -0xb4);
    iStack_2a8 = *(int *)(unaff_EBP + -0xb0);
    iVar2 = *piStack_2c8;
    piStack_2a4 = *(int **)(unaff_EBP + -0xac);
    iStack_2bc = *(undefined4 *)(unaff_EBP + -200);
    iStack_2b8 = *(undefined4 *)(unaff_EBP + -0xc4);
    iStack_2c0 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0xc74) + -5;
    iStack_2b4 = *(int *)(unaff_EBP + -0xc0);
    iStack_2c4 = 0;
    *(int **)(unaff_EBP + -0x5c) = piStack_2c8;
    iStack_2b0 = *(int *)(unaff_EBP + -0xbc);
    puStack_2cc = (undefined1 *)0x7457b0;
    iVar2 = (**(code **)(iVar2 + 0x90))();
    if (iVar2 < 0) {
      piStack_2a4 = *(int **)(unaff_EBP + -0x5c);
      iStack_2ac = 0x7457c2;
      iStack_2a8 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    piStack_2a4 = (int *)0x7457d2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_2a4 = (int *)0x7457dd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_2a4 = (int *)0x7457ed;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_2a4 = (int *)0x7457f8;
      FUN_00878dfb();
    }
  }
  piStack_2a4 = (int *)0x745801;
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_2a4 = (int *)0x745812;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


