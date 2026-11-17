/* FUN_006e8215 - 0x006e8215 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e8215(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  uint uVar6;
  int unaff_EBP;
  code *pcVar7;
  bool bVar8;
  int *piStack_2b0;
  undefined4 uStack_2ac;
  int *piStack_2a8;
  undefined1 *puStack_2a4;
  undefined *puStack_2a0;
  int *piStack_29c;
  int iStack_298;
  undefined4 *puStack_294;
  int *piStack_290;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(extraout_ECX + 0xa7c) + 0x34);
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0xa74) + 0x34);
  *(int *)(unaff_EBP + -0x34) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(uint *)(unaff_EBP + -0x40) = (uint)(iVar2 == 9);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00403191();
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x14) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x70))();
  if (iVar2 < 0) {
    piStack_290 = (int *)0x6e8357;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar3 + 0x78))();
  if (iVar2 < 0) {
    iStack_298 = 0x6e837e;
    puStack_294 = (undefined4 *)iVar2;
    piStack_290 = piVar3;
    FUN_00878e09();
  }
  iVar2 = *(int *)(unaff_EBP + -0x34);
  if (*(int *)(iVar2 + 0xdd8) != 0) {
    piStack_290 = (int *)0x6e8397;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0xdd8),(IBinding *)0x0);
  }
  uVar6 = 0;
  pcVar7 = VariantInit_exref;
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    if (iVar5 == 0) {
      if (0 < *(int *)(iVar2 + 0xdbc)) {
        piStack_290 = (int *)0x6e8a53;
        FUN_00403191();
        piStack_290 = (int *)0x0;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        puStack_294 = (undefined4 *)0x6e8a67;
        FUN_004031b7();
        bVar8 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (bVar8) {
          piStack_290 = (int *)0x6e8a7d;
          FUN_00878dfb();
        }
        piStack_290 = (int *)(unaff_EBP + -0x11c);
        puStack_294 = (undefined4 *)0x0;
        iStack_298 = 0;
        piStack_29c = (int *)0x0;
        puStack_2a0 = (undefined *)0x0;
        puStack_2a4 = (undefined1 *)0x0;
        piStack_2a8 = (int *)(unaff_EBP + -0x20);
        uStack_2ac = 0x6e8a9f;
        FUN_0042a39f();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_290 = (int *)0x6e8aaf;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_290 = (int *)0x6e8aba;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_290 = (int *)0x6e8aca;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_290 = (int *)0x6e8ad5;
          FUN_00878dfb();
        }
        piStack_290 = *(int **)(iVar2 + 0xabc);
        puStack_294 = (undefined4 *)0x6e8ae9;
        FUN_0040ee87();
        piVar3 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (piVar3 == (int *)0x0) {
          piStack_290 = (int *)0x6e8afe;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + -0x20);
        }
        iVar2 = *piVar3;
        iStack_298 = *(int *)(unaff_EBP + -0x13c);
        puStack_294 = *(undefined4 **)(unaff_EBP + -0x138);
        piStack_290 = *(int **)(unaff_EBP + -0x134);
        *(int **)(unaff_EBP + -0x14) = piVar3;
        puStack_2a0 = (undefined *)0x6e8b19;
        piStack_29c = piVar3;
        iVar2 = (**(code **)(iVar2 + 100))();
        if (iVar2 < 0) {
          puStack_2a0 = &DAT_00963de8;
          puStack_2a4 = *(undefined1 **)(unaff_EBP + -0x14);
          uStack_2ac = 0x6e8b2b;
          piStack_2a8 = (int *)iVar2;
          FUN_00878e09();
        }
        puStack_2a0 = (undefined *)(unaff_EBP + -0x13c);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puStack_2a4 = (undefined1 *)0x6e8b3b;
        puStack_2a0 = (undefined *)FUN_00402bc3();
        if ((int)puStack_2a0 < 0) {
          puStack_2a4 = (undefined1 *)0x6e8b46;
          FUN_00878dfb();
        }
        puStack_2a4 = *(undefined1 **)(*(int *)(unaff_EBP + -0x34) + 0xabc);
        puStack_2a0 = (undefined *)0x1;
        piStack_2a8 = (int *)0x6e8b5d;
        FUN_0040ee87();
        piStack_2b0 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (piStack_2b0 == (int *)0x0) {
          puStack_2a0 = (undefined *)0x80004003;
          puStack_2a4 = (undefined1 *)0x6e8b72;
          FUN_00878dfb();
          piStack_2b0 = *(int **)(unaff_EBP + -0x20);
        }
        iVar2 = *piStack_2b0;
        uStack_2ac = *(undefined4 *)(unaff_EBP + -0x22c);
        piStack_2a8 = *(int **)(unaff_EBP + -0x228);
        puStack_2a4 = *(undefined1 **)(unaff_EBP + -0x224);
        *(int **)(unaff_EBP + -0x14) = piStack_2b0;
        puStack_2a0 = *(undefined **)(unaff_EBP + -0x220);
        iVar2 = (**(code **)(iVar2 + 0xfc))();
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x22c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x68);
        iVar2 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + -0x20);
        uVar4 = FUN_004320e3();
        iVar2 = (**(code **)(*piVar3 + 0xb4))(piVar3,uVar4);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00412600();
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + -0x20);
        iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffffff);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
        }
        uVar6 = *(uint *)(*(int *)(unaff_EBP + -0x34) + 0xde8);
        while (uVar6 != 0) {
          iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
          *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(uVar6 + 4);
          FUN_006eabed();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_00403191(&DAT_00980690);
          iVar5 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (iVar5 == -1) {
            iVar5 = 0xff;
          }
          FUN_004031b7(iVar5,3);
          iVar5 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x50);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (iVar5 == -1) {
            iVar5 = 0xff;
          }
          FUN_004031b7(iVar5,3);
          uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x4c);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_004031b7(uVar4,3);
          uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (*(int *)(unaff_EBP + -0x20) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x24c,uVar4,unaff_EBP + -0x15c,unaff_EBP + -0x1dc,
                       unaff_EBP + -0x17c,unaff_EBP + -0xbc,unaff_EBP + -0xcc);
          iVar5 = FUN_00402bc3(unaff_EBP + -0x24c);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          iVar5 = FUN_00402bc3(unaff_EBP + -0x15c);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iVar5 = FUN_00402bc3(unaff_EBP + -0x1dc);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iVar5 = FUN_00402bc3(unaff_EBP + -0x17c);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iVar5 = FUN_00402bc3(unaff_EBP + -0xbc);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar5 = FUN_00402bc3(unaff_EBP + -0xcc);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00412d94();
          uVar6 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          FUN_00878dfb(0x80004003);
          if (*(int *)(unaff_EBP + -0x20) == 0) {
            FUN_00878dfb(0x80004003);
          }
        }
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + -0x20);
        *(int **)(unaff_EBP + -0x14) = piVar3;
        iVar2 = FUN_0042fb34();
        *(int *)(unaff_EBP + -0x28) = 0x91 - iVar2 / 2;
        iVar2 = FUN_0042fb0a();
        iVar2 = (**(code **)(*piVar3 + 0x90))
                          (*(undefined4 *)(unaff_EBP + -0x14),0x6e - iVar2 / 2,
                           *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0xec),
                           *(undefined4 *)(unaff_EBP + -0xe8),*(undefined4 *)(unaff_EBP + -0xe4),
                           *(undefined4 *)(unaff_EBP + -0xe0),*(undefined4 *)(unaff_EBP + -0x10c),
                           *(undefined4 *)(unaff_EBP + -0x108),*(undefined4 *)(unaff_EBP + -0x104),
                           *(undefined4 *)(unaff_EBP + -0x100));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iVar2 = FUN_00402bc3(unaff_EBP + -0xec);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x10c);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x34) + 0xdd8);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  (this,*(IBinding **)(unaff_EBP + -0x20));
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_00403191(&DAT_00980690);
        iVar2 = *(int *)this;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar3 = *(int **)(*(int *)(unaff_EBP + -0x34) + 0xdd8);
        iVar2 = *piVar3;
        *(int **)(unaff_EBP + -0x28) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x110))
                          (piVar3,0x20,*(undefined4 *)(unaff_EBP + -300),
                           *(undefined4 *)(unaff_EBP + -0x128),*(undefined4 *)(unaff_EBP + -0x124),
                           *(undefined4 *)(unaff_EBP + -0x120),*(undefined4 *)(unaff_EBP + -0x14c),
                           *(undefined4 *)(unaff_EBP + -0x148),*(undefined4 *)(unaff_EBP + -0x144),
                           *(undefined4 *)(unaff_EBP + -0x140));
        if (iVar2 < 0) {
          piStack_290 = *(int **)(unaff_EBP + -0x28);
          iStack_298 = 0x6e8f7c;
          puStack_294 = (undefined4 *)iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_290 = (int *)0x6e8f8c;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_290 = (int *)0x6e8f97;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_290 = (int *)0x6e8fa7;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_290 = (int *)0x6e8fb2;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00412600();
        iVar2 = *(int *)(unaff_EBP + -0x34);
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      piStack_290 = (int *)s_HP_______0096b120;
      puStack_294 = (undefined4 *)0x6e8fd4;
      FUN_00414edd();
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      piStack_290 = (int *)s_MP_______0096b114;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_294 = (undefined4 *)0x6e8feb;
      FUN_00414edd();
      iVar2 = *(int *)(iVar2 + 0xdbc);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (1 < iVar2) {
        puStack_294 = (undefined4 *)(unaff_EBP + -0x18);
        piStack_290 = (int *)s_HP____s_0096b10c;
        iStack_298 = 0x6e900c;
        FUN_00434e21();
        puStack_294 = (undefined4 *)(unaff_EBP + -0x30);
        piStack_290 = (int *)s_MP____s_0096b104;
        iStack_298 = 0x6e9023;
        FUN_00434e21();
      }
      piStack_290 = (int *)(unaff_EBP + -0x1c);
      puStack_294 = (undefined4 *)0x6e9031;
      FUN_007d4a9a();
      iStack_298 = unaff_EBP + -0x38;
      puStack_294 = (undefined4 *)0x4;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_29c = (int *)0x6e9040;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_290 = (int *)0x6e9053;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_290 = (int *)0x6e9066;
      puStack_294 = (undefined4 *)FUN_00449713();
      *(int ***)(unaff_EBP + -0x28) = &piStack_290;
      iStack_298 = 0x6e9072;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_294 = (undefined4 *)0x6e907e;
      FUN_0044974c();
      puStack_294 = (undefined4 *)0x6e9085;
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_290 = (int *)0x6e909a;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_290 = (int *)0x6e90a5;
        FUN_00878dfb();
      }
      piStack_290 = (int *)0x6e90b1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      piStack_290 = (int *)0x6e90c4;
      puStack_294 = (undefined4 *)FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_290;
      iStack_298 = 0x6e90d0;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_294 = (undefined4 *)0x6e90dc;
      FUN_0044974c();
      puStack_294 = (undefined4 *)0x6e90e3;
      sVar1 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_290 = (int *)0x6e90f5;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_290 = (int *)0x6e9100;
        FUN_00878dfb();
      }
      piStack_290 = (int *)0x6e910f;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      piStack_290 = (int *)0x6e911f;
      FUN_00403191();
      piStack_290 = (int *)(unaff_EBP + -0x1ac);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      puStack_294 = (undefined4 *)0x6e9139;
      puStack_294 = (undefined4 *)FUN_00449749();
      iStack_298 = 0x6e9142;
      piStack_29c = (int *)FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_298;
      puStack_2a0 = (undefined *)0x6e914e;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iVar5 = (int)(0xdc - (uint)(ushort)((short)uVar4 + sVar1 + 10)) / 2;
      piStack_29c = (int *)0x6e916d;
      FUN_0044974c();
      piStack_29c = (int *)0x6e9174;
      iVar2 = FUN_004a2734();
      piStack_29c = (int *)(0x11d - iVar2);
      puStack_2a4 = (undefined1 *)0x6e9187;
      puStack_2a0 = (undefined *)iVar5;
      FUN_004115d9();
      puStack_2a4 = (undefined1 *)0x6e918e;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      piStack_290 = (int *)0x6e919e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_290 = (int *)0x6e91a9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_290 = (int *)0x6e91b9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_290 = (int *)0x6e91c4;
        FUN_00878dfb();
      }
      piStack_290 = (int *)0x6e91d0;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_290 = (int *)0x6e91e0;
      FUN_00403191();
      piStack_290 = (int *)(unaff_EBP + -0x1ec);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      puStack_294 = (undefined4 *)0x6e91fa;
      puStack_294 = (undefined4 *)FUN_00449749();
      iStack_298 = 0x6e9203;
      piStack_29c = (int *)FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_298;
      puStack_2a0 = (undefined *)0x6e920f;
      iStack_298 = extraout_ECX_04;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      piStack_29c = (int *)0x6e921b;
      FUN_0044974c();
      piStack_29c = (int *)0x6e9222;
      iVar2 = FUN_004a2734();
      piStack_29c = (int *)(0x11d - iVar2);
      puStack_2a0 = (undefined *)(*(ushort *)(unaff_EBP + -0x28) + 10 + iVar5);
      puStack_2a4 = (undefined1 *)0x6e9236;
      FUN_004115d9();
      puStack_2a4 = (undefined1 *)0x6e923d;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_290 = (int *)0x6e924d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_290 = (int *)0x6e9258;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_290 = (int *)0x6e9268;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_290 = (int *)0x6e9273;
        FUN_00878dfb();
      }
      FUN_004497b5();
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        piStack_290 = (int *)0x6e9297;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        piStack_290 = (int *)0x6e92ac;
        FUN_00434e38();
      }
    }
    else if (iVar5 == 1) {
      if (*(int *)(iVar2 + 0xdcc) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(*(int *)(iVar2 + 0xdcc) + -4);
      }
      if (*(uint *)(iVar2 + 0x57c) < uVar6) {
        *(uint *)(unaff_EBP + -0x14) = *(int *)(iVar2 + 0xdcc) + *(uint *)(iVar2 + 0x57c) * 4;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        while ((iVar2 = **(int **)(unaff_EBP + -0x14), iVar2 != 0 &&
               (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar2 + -4)))) {
          *(undefined4 *)(unaff_EBP + -0x20) =
               *(undefined4 *)(iVar2 + *(uint *)(unaff_EBP + -0x18) * 8 + 4);
          FUN_006eac61();
          iVar2 = **(int **)(unaff_EBP + -0x20);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          if (iVar2 == 0) {
            piStack_290 = (int *)0x6e8971;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            piStack_290 = (int *)0x6e8981;
            FUN_00403191();
            piStack_290 = (int *)(unaff_EBP + -0xfc);
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            puStack_294 = (undefined4 *)0x6e899b;
            FUN_006eaa1c();
            puStack_294 = (undefined4 *)0x6e89a5;
            puStack_294 = (undefined4 *)FUN_00449749();
            iStack_298 = 0x6e89ae;
            FUN_006eaa1c();
            iStack_298 = 0x6e89b8;
            piStack_29c = (int *)FUN_00449713();
            *(int **)(unaff_EBP + -0x28) = &iStack_298;
            puStack_2a0 = (undefined *)0x6e89c4;
            iStack_298 = extraout_ECX_03;
            FUN_00448a17();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            piStack_29c = (int *)0x6e89d0;
            iVar2 = FUN_006eaa1c();
            piStack_29c = (int *)(*(int *)(iVar2 + 0x1c) + 0x2d);
            puStack_2a0 = (undefined *)0x6e89df;
            iVar2 = FUN_006eaa1c();
            puStack_2a0 = *(undefined **)(iVar2 + 0x18);
            puStack_2a4 = (undefined1 *)0x6e89ea;
            FUN_004115d9();
            puStack_2a4 = (undefined1 *)0x6e89f1;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            piStack_290 = (int *)0x6e8a01;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e8a0c;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
LAB_006e8a16:
            piStack_290 = (int *)0x6e8a1c;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e8a27;
              FUN_00878dfb();
            }
          }
          else if (iVar2 == 1) {
            piStack_290 = (int *)0xff;
            puStack_294 = (undefined4 *)0x6e88f1;
            FUN_004031b7();
            iVar2 = *(int *)(unaff_EBP + -0x20);
            *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 0x14);
            piVar3 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            if (piVar3 == (int *)0x0) {
              piStack_290 = (int *)0x6e8913;
              FUN_00878dfb();
              piVar3 = *(int **)(unaff_EBP + -0x10);
            }
            piStack_29c = *(int **)(unaff_EBP + -0x1c);
            iStack_298 = *(int *)(unaff_EBP + -0xac);
            puStack_294 = *(undefined4 **)(unaff_EBP + -0xa8);
            puStack_2a0 = (undefined *)(*(int *)(iVar2 + 0x1c) + 0x2d);
            *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar2 + 0x18);
            puStack_2a4 = *(undefined1 **)(unaff_EBP + -0x38);
            iVar2 = *piVar3;
            piStack_290 = *(int **)(unaff_EBP + -0xa4);
            *(int **)(unaff_EBP + -0x30) = piVar3;
            uStack_2ac = 0x6e8944;
            piStack_2a8 = piVar3;
            iVar2 = (**(code **)(iVar2 + 0x80))();
            if (iVar2 < 0) {
              piStack_290 = *(int **)(unaff_EBP + -0x30);
              iStack_298 = 0x6e8956;
              puStack_294 = (undefined4 *)iVar2;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            goto LAB_006e8a16;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_006eac7e();
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        }
      }
    }
    else if (iVar5 == 2) {
      if (*(int *)(iVar2 + 0xdd4) != 0) {
        uVar6 = *(uint *)(*(int *)(iVar2 + 0xdd4) + -4);
      }
      if (*(uint *)(iVar2 + 0x57c) < uVar6) {
        uVar6 = 0;
        *(uint *)(unaff_EBP + -0x14) = *(int *)(iVar2 + 0xdd4) + *(uint *)(iVar2 + 0x57c) * 4;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(int *)(unaff_EBP + -0x38) = iVar2 + 0xc58;
        while ((iVar2 = **(int **)(unaff_EBP + -0x14), iVar2 != 0 && (uVar6 < *(uint *)(iVar2 + -4))
               )) {
          iVar2 = *(int *)(iVar2 + uVar6 * 8 + 4);
          *(int *)(unaff_EBP + -0x6c) = iVar2;
          if (iVar2 != 0) {
            piStack_290 = (int *)0x6e8685;
            InterlockedIncrement((LONG *)(iVar2 + 4));
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          piStack_290 = (int *)0x6e8695;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          piStack_290 = (int *)0x6e86a5;
          FUN_00403191();
          piStack_290 = (int *)0x0;
          puStack_294 = (undefined4 *)(unaff_EBP + -0x21c);
          iStack_298 = unaff_EBP + -0x19c;
          puStack_2a4 = (undefined1 *)&piStack_29c;
          *(int ***)(unaff_EBP + -0x28) = &piStack_29c;
          puStack_2a0 = (undefined *)0xb12;
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          piStack_2a8 = (int *)0x6e86d1;
          FUN_00679e4e();
          puStack_2a0 = (undefined *)(unaff_EBP + -0x23c);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          puStack_2a4 = (undefined1 *)0x6e86e1;
          FUN_00405a1d();
          puStack_2a4 = (undefined1 *)0x6e86e8;
          FUN_00402660();
          puStack_2a4 = (undefined1 *)0x6e86ef;
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          puStack_294 = (undefined4 *)0x6e86fa;
          iVar2 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x7c) = iVar2;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (iVar2 != 0) {
            piStack_290 = (int *)0x6e8710;
            iVar2 = FUN_0041a581();
            if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
              piStack_290 = (int *)0x6e8721;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          piStack_290 = (int *)0x6e8731;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_290 = (int *)0x6e873c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          piStack_290 = (int *)0x6e874c;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_290 = (int *)0x6e8757;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piStack_290 = (int *)0x6e8767;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_290 = (int *)0x6e8772;
            FUN_00878dfb();
          }
          piStack_290 = (int *)0x7f;
          puStack_294 = (undefined4 *)0x6e8781;
          FUN_004031b7();
          piVar3 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          if (piVar3 == (int *)0x0) {
            piStack_290 = (int *)0x6e8796;
            FUN_00878dfb();
            piVar3 = *(int **)(unaff_EBP + -0x10);
          }
          puStack_2a0 = (undefined *)(*(undefined4 **)(unaff_EBP + -0x38))[1];
          piStack_29c = *(int **)(unaff_EBP + -0x1c);
          iStack_298 = *(int *)(unaff_EBP + -0xdc);
          puStack_294 = *(undefined4 **)(unaff_EBP + -0xd8);
          *(undefined4 *)(unaff_EBP + -0x30) = **(undefined4 **)(unaff_EBP + -0x38);
          puStack_2a4 = *(undefined1 **)(unaff_EBP + -0x30);
          iVar2 = *piVar3;
          piStack_290 = *(int **)(unaff_EBP + -0xd4);
          *(int **)(unaff_EBP + -0x20) = piVar3;
          uStack_2ac = 0x6e87c6;
          piStack_2a8 = piVar3;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            piStack_290 = *(int **)(unaff_EBP + -0x20);
            iStack_298 = 0x6e87d8;
            puStack_294 = (undefined4 *)iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piStack_290 = (int *)0x6e87e8;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_290 = (int *)0x6e87f5;
            FUN_00878dfb();
          }
          piVar3 = *(int **)(unaff_EBP + -0x38);
          piStack_290 = (int *)0x0;
          puStack_294 = (undefined4 *)0x0;
          iStack_298 = 0;
          piStack_29c = (int *)0x0;
          puStack_2a0 = (undefined *)0x0;
          puStack_2a4 = (undefined1 *)piVar3[3];
          piStack_2a8 = (int *)*piVar3;
          uStack_2ac = 0x6e880b;
          FUN_006ea9f5();
          uStack_2ac = 0x6e8815;
          uStack_2ac = thunk_FUN_0045e2eb();
          *(int ***)(unaff_EBP + -0x28) = &piStack_2b0;
          piStack_2b0 = extraout_ECX_02;
          FUN_0046fc23(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          FUN_0048b97b();
          FUN_005558b0();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
            piStack_290 = (int *)0x6e8846;
            (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x6c) != 0) {
            piStack_290 = (int *)0x6e8858;
            FUN_006eae3c();
            *(undefined4 *)(unaff_EBP + -0x6c) = 0;
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          uVar6 = *(uint *)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x38) = piVar3 + 4;
        }
      }
    }
    else if (iVar5 == 3) {
      if (*(int *)(iVar2 + 0xdd0) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(*(int *)(iVar2 + 0xdd0) + -4);
      }
      if (*(uint *)(iVar2 + 0x57c) < uVar6) {
        *(uint *)(unaff_EBP + -0x14) = *(int *)(iVar2 + 0xdd0) + *(uint *)(iVar2 + 0x57c) * 4;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = 0x2d;
        uVar6 = 0;
        while ((iVar2 = **(int **)(unaff_EBP + -0x14), iVar2 != 0 && (uVar6 < *(uint *)(iVar2 + -4))
               )) {
          iVar2 = *(int *)(iVar2 + uVar6 * 8 + 4);
          *(int *)(unaff_EBP + -0x38) = iVar2;
          iVar5 = 0;
          if (iVar2 != 0) {
            piStack_290 = (int *)0x6e842e;
            InterlockedIncrement((LONG *)(iVar2 + 4));
            iVar5 = *(int *)(unaff_EBP + -0x38);
          }
          iVar2 = *(int *)(iVar5 + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          if (iVar2 == 0) {
            piStack_290 = (int *)0x6e8529;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
            piStack_290 = (int *)(unaff_EBP + -0x50);
            puStack_294 = (undefined4 *)0x6e8533;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e853f;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            piStack_290 = (int *)0x6e8549;
            VariantInit((VARIANTARG *)(unaff_EBP + -100));
            piStack_290 = (int *)(unaff_EBP + -100);
            puStack_294 = (undefined4 *)0x6e8553;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e855f;
              FUN_00878dfb();
            }
            piStack_290 = (int *)(unaff_EBP + -100);
            iStack_298 = unaff_EBP + -0x78;
            puStack_294 = (undefined4 *)0x1;
            *(undefined1 *)(unaff_EBP + -4) = 0x3a;
            piStack_29c = (int *)0x6e8576;
            FUN_007d4a9a();
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            puStack_294 = (undefined4 *)0x6e8583;
            puStack_294 = (undefined4 *)FUN_00449749();
            iStack_298 = 0x6e858c;
            FUN_006eaa3b();
            iStack_298 = 0x6e8596;
            piStack_29c = (int *)FUN_00449713();
            *(int **)(unaff_EBP + -0x28) = &iStack_298;
            puStack_2a0 = (undefined *)0x6e85a2;
            iStack_298 = extraout_ECX_01;
            FUN_00448a17();
            piStack_29c = *(int **)(unaff_EBP + -0x18);
            puStack_2a0 = (undefined *)0x3c;
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            puStack_2a4 = (undefined1 *)0x6e85b3;
            FUN_004115d9();
            puStack_2a4 = (undefined1 *)0x6e85ba;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x3a;
            if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
              piStack_290 = (int *)0x6e85cb;
              (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            piStack_290 = (int *)0x6e85d8;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e85e3;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x34;
          }
          else {
            piStack_290 = (int *)0x6e8448;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
            piStack_290 = (int *)(unaff_EBP + -0x8c);
            puStack_294 = (undefined4 *)0x6e8455;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e8461;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x35;
            piStack_290 = (int *)0x6e846e;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
            piStack_290 = (int *)(unaff_EBP + -0x9c);
            puStack_294 = (undefined4 *)0x6e847b;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e8487;
              FUN_00878dfb();
            }
            piStack_290 = (int *)(unaff_EBP + -0x9c);
            iStack_298 = unaff_EBP + -0x74;
            puStack_294 = (undefined4 *)0x1f;
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            piStack_29c = (int *)0x6e84a4;
            FUN_007d4a9a();
            *(undefined1 *)(unaff_EBP + -4) = 0x37;
            puStack_294 = (undefined4 *)0x6e84b1;
            puStack_294 = (undefined4 *)FUN_00449749();
            iStack_298 = 0x6e84ba;
            FUN_006eaa3b();
            iStack_298 = 0x6e84c4;
            piStack_29c = (int *)FUN_00449713();
            *(int **)(unaff_EBP + -0x28) = &iStack_298;
            puStack_2a0 = (undefined *)0x6e84d0;
            iStack_298 = extraout_ECX_00;
            FUN_00448a17();
            piStack_29c = *(int **)(unaff_EBP + -0x18);
            puStack_2a0 = (undefined *)0x1e;
            *(undefined1 *)(unaff_EBP + -4) = 0x37;
            puStack_2a4 = (undefined1 *)0x6e84e1;
            FUN_004115d9();
            puStack_2a4 = (undefined1 *)0x6e84e8;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            if (*(int **)(unaff_EBP + -0x74) != (int *)0x0) {
              piStack_290 = (int *)0x6e84f9;
              (**(code **)(**(int **)(unaff_EBP + -0x74) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x35;
            piStack_290 = (int *)0x6e8509;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_290 = (int *)0x6e8514;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x34;
          }
          piStack_290 = (int *)0x6e85f0;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_290 = (int *)0x6e85fb;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            piStack_290 = (int *)0x6e860f;
            FUN_006eae99();
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x14;
          uVar6 = *(uint *)(unaff_EBP + -0x1c);
        }
      }
    }
    piStack_290 = (int *)(unaff_EBP + -0x40);
    puStack_294 = (undefined4 *)0x6e92b8;
    FUN_007d4a9a();
    pcVar7 = VariantInit_exref;
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_290 = (int *)0x6e92ca;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    piStack_290 = (int *)(unaff_EBP + -0x50);
    puStack_294 = (undefined4 *)0x6e92d4;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_290 = (int *)0x6e92e0;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_290 = (int *)0x6e92f6;
    puStack_294 = (undefined4 *)FUN_00449713();
    *(int ***)(unaff_EBP + -0x28) = &piStack_290;
    iStack_298 = 0x6e9302;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    puStack_294 = (undefined4 *)0x6e930e;
    FUN_0044974c();
    puStack_294 = (undefined4 *)0x6e9315;
    uVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_290 = (int *)0x6e9325;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_290 = (int *)0x6e9330;
      FUN_00878dfb();
    }
    piStack_290 = (int *)0x6e9336;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    piStack_290 = (int *)(unaff_EBP + -100);
    puStack_294 = (undefined4 *)0x6e9340;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_290 = (int *)0x6e934c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    piStack_290 = (int *)0x6e9356;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    piStack_290 = (int *)(unaff_EBP + -0x50);
    puStack_294 = (undefined4 *)0x6e9360;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_290 = (int *)0x6e936c;
      FUN_00878dfb();
    }
    piStack_290 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    puStack_294 = (undefined4 *)0x6e9380;
    puStack_294 = (undefined4 *)FUN_00449749();
    iStack_298 = 0x6e938c;
    piStack_29c = (int *)FUN_00449713();
    *(int **)(unaff_EBP + -0x68) = &iStack_298;
    puStack_2a0 = (undefined *)0x6e9398;
    iStack_298 = extraout_ECX_05;
    FUN_00448a17();
    piStack_29c = (int *)&DAT_0000000a;
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    puStack_2a0 = (undefined *)0x6e93a6;
    FUN_004115d9();
    puStack_2a0 = (undefined *)0x6e93ad;
    iVar5 = FUN_0040e48b();
    puStack_2a0 = (undefined *)(((uint)(iVar5 - *(int *)(unaff_EBP + -0x28)) >> 1) + 5);
    puStack_2a4 = (undefined1 *)0x6e93be;
    FUN_004115d9();
    puStack_2a4 = (undefined1 *)0x6e93c5;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    piStack_290 = (int *)0x6e93d2;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_290 = (int *)0x6e93dd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_290 = (int *)0x6e93ea;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_290 = (int *)0x6e93f5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      piStack_290 = (int *)0x6e9406;
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
  }
  piStack_290 = (int *)0x6e940c;
  (*pcVar7)();
  puStack_294 = (undefined4 *)(unaff_EBP + -0x50);
  piStack_290 = &DAT_00980690;
  iStack_298 = 0x6e9416;
  piStack_290 = (int *)FUN_00402e32();
  if ((int)piStack_290 < 0) {
    puStack_294 = (undefined4 *)0x6e9422;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(iVar2 + 0xabc);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (iVar2 == 0) {
    piStack_290 = (int *)0x80004003;
    puStack_294 = (undefined4 *)0x6e943b;
    FUN_00878dfb();
  }
  piStack_290 = (int *)(unaff_EBP + -0x50);
  puStack_294 = (undefined4 *)(unaff_EBP + -0x54);
  iStack_298 = 0x6e944a;
  FUN_00425067();
  piStack_290 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  puStack_294 = (undefined4 *)0x6e9457;
  piStack_290 = (int *)FUN_00402bc3();
  if ((int)piStack_290 < 0) {
    puStack_294 = (undefined4 *)0x6e9462;
    FUN_00878dfb();
  }
  piStack_290 = (int *)(unaff_EBP + -100);
  puStack_294 = (undefined4 *)0x6e9468;
  (*pcVar7)();
  iStack_298 = unaff_EBP + -100;
  puStack_294 = &DAT_00980690;
  piStack_29c = (int *)0x6e9472;
  puStack_294 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_294 < 0) {
    iStack_298 = 0x6e947e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  if (*(int *)(unaff_EBP + -0x54) == 0) {
    puStack_294 = (undefined4 *)0x80004003;
    iStack_298 = 0x6e9492;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x54);
  puStack_2a4 = *(undefined1 **)(unaff_EBP + -0x10);
  puStack_2a0 = *(undefined **)(unaff_EBP + -100);
  piStack_29c = *(int **)(unaff_EBP + -0x60);
  piStack_2a8 = (int *)0x0;
  iStack_298 = *(int *)(unaff_EBP + -0x5c);
  uStack_2ac = 0;
  puStack_294 = *(undefined4 **)(unaff_EBP + -0x58);
  piStack_2b0 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x80))();
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iVar2 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar3 = *(int **)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


