/* FUN_0073eee4 - 0x0073eee4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073eee4(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int iStack_314;
  undefined1 *puStack_310;
  int iStack_30c;
  int *piStack_308;
  int *piStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int *piStack_2f4;
  undefined *puStack_2f0;
  int *piStack_2ec;
  undefined4 *puStack_2e8;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0xc78);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  if (iVar3 == 0) goto LAB_0073fff4;
  puStack_2e8 = &DAT_00980690;
  piStack_2ec = (int *)0x73ef1d;
  FUN_00403191();
  puStack_2e8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_2ec = (int *)0x73ef2c;
  FUN_00403191();
  puStack_2e8 = (undefined4 *)0x0;
  piStack_2ec = (int *)0x0;
  puStack_2f0 = (undefined *)(unaff_EBP + -0xb4);
  piStack_2f4 = (int *)(unaff_EBP + -0x134);
  piStack_300 = &iStack_2f8;
  *(int **)(unaff_EBP + -0x34) = &iStack_2f8;
  iStack_2fc = 0x949;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  iStack_2fc = unaff_EBP + -0x284;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_300 = (int *)0x73ef66;
  FUN_00405a1d();
  piStack_300 = (int *)0x73ef6d;
  FUN_00402660();
  piStack_300 = (int *)0x73ef74;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_2f0 = (undefined *)0x73ef7f;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar3 != 0) {
    puStack_2e8 = (undefined4 *)(unaff_EBP + -0x3c);
    piStack_2ec = (int *)0x73ef95;
    puStack_2e8 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_2e8 < 0) && (puStack_2e8 != (undefined4 *)0x80004002)) {
      piStack_2ec = (int *)0x73efa6;
      FUN_00878dfb();
    }
  }
  puStack_2e8 = (undefined4 *)(unaff_EBP + -0x284);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_2ec = (int *)0x73efb6;
  puStack_2e8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2e8 < 0) {
    piStack_2ec = (int *)0x73efc1;
    FUN_00878dfb();
  }
  puStack_2e8 = (undefined4 *)(unaff_EBP + -0x134);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_2ec = (int *)0x73efd1;
  puStack_2e8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2e8 < 0) {
    piStack_2ec = (int *)0x73efdc;
    FUN_00878dfb();
  }
  puStack_2e8 = (undefined4 *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_2ec = (int *)0x73efec;
  puStack_2e8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2e8 < 0) {
    piStack_2ec = (int *)0x73eff7;
    FUN_00878dfb();
  }
  puStack_2e8 = *(undefined4 **)(unaff_EBP + 0xc);
  piStack_2ec = *(int **)(unaff_EBP + 8);
  puStack_2f0 = (undefined *)0x73f004;
  iVar3 = FUN_007467b1();
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  if (iVar3 == -1) {
    puStack_2e8 = (undefined4 *)0x73f014;
    FUN_004027eb();
    goto LAB_0073fff4;
  }
  puStack_2e8 = (undefined4 *)(unaff_EBP + -0x38);
  piStack_2ec = (int *)0x73f028;
  iVar3 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar3 + 4);
  puStack_2e8 = (undefined4 *)0x73f036;
  FUN_0045e4a2();
  puStack_2e8 = *(undefined4 **)(unaff_EBP + -0x1c);
  piStack_2ec = (int *)0x73f044;
  uVar4 = FUN_0051c36a();
  puStack_2e8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
  piStack_2ec = (int *)0x73f053;
  FUN_00403191();
  puStack_2e8 = (undefined4 *)0x3;
  piStack_2ec = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2f0 = (undefined *)0x73f065;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (bVar7) {
    puStack_2e8 = (undefined4 *)0x80004003;
    piStack_2ec = (int *)0x73f07b;
    FUN_00878dfb();
  }
  puStack_2e8 = (undefined4 *)(unaff_EBP + -0xd4);
  piStack_2ec = (int *)(unaff_EBP + -0x1d4);
  puStack_2f0 = (undefined *)0x0;
  piStack_2f4 = (int *)0x0;
  iStack_2f8 = 0;
  iStack_2fc = 0;
  piStack_300 = (int *)0x0;
  piStack_308 = (int *)0x73f09d;
  FUN_0042a39f();
  puStack_2e8 = (undefined4 *)(unaff_EBP + -0x1d4);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_2ec = (int *)0x73f0ad;
  puStack_2e8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2e8 < 0) {
    piStack_2ec = (int *)0x73f0b8;
    FUN_00878dfb();
  }
  puStack_2e8 = (undefined4 *)(unaff_EBP + -0xd4);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_2ec = (int *)0x73f0c8;
  puStack_2e8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2e8 < 0) {
    piStack_2ec = (int *)0x73f0d3;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_2e8 = (undefined4 *)0x80004003;
    piStack_2ec = (int *)0x73f0e2;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x14);
  puStack_2e8 = (undefined4 *)0x80ffffff;
  puStack_2f0 = (undefined *)0x73f0f3;
  piStack_2ec = piVar6;
  iVar3 = (**(code **)(*piVar6 + 0xe0))();
  if (iVar3 < 0) {
    puStack_2f0 = &DAT_00963df8;
    iStack_2fc = 0x73f103;
    iStack_2f8 = iVar3;
    piStack_2f4 = piVar6;
    FUN_00878e09();
  }
  puStack_2f0 = (undefined *)(unaff_EBP + -0x18);
  piStack_2f4 = (int *)0x73f10f;
  puVar5 = (undefined4 *)FUN_004489f5();
  piStack_2f4 = (int *)*puVar5;
  puStack_2f0 = (undefined *)0x1;
  iStack_2f8 = 0x73f11c;
  FUN_0040ee87();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar6 == (int *)0x0) {
    puStack_2f0 = (undefined *)0x80004003;
    piStack_2f4 = (int *)0x73f131;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar6;
  iStack_2fc = *(undefined4 *)(unaff_EBP + -0x5c);
  iStack_2f8 = *(int *)(unaff_EBP + -0x58);
  piStack_2f4 = *(int **)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + -0x28) = piVar6;
  puStack_2f0 = *(undefined **)(unaff_EBP + -0x50);
  piStack_300 = piVar6;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    piStack_308 = *(int **)(unaff_EBP + -0x28);
    puStack_310 = (undefined1 *)0x73f15b;
    iStack_30c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_308 = (int *)0x73f168;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_308 = (int *)0x73f175;
    FUN_00878dfb();
  }
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  pbVar2 = *(byte **)(unaff_EBP + -0x24);
  bVar1 = *pbVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (bVar1 == 1) {
    piStack_308 = *(int **)(pbVar2 + 1);
    if (((int)piStack_308 / 1000) % 10 != 0) {
      iStack_30c = *(int *)(unaff_EBP + -0x30);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      puStack_310 = (undefined1 *)0x73fcec;
      iVar3 = FUN_00650dae();
      if (0 < iVar3) {
        piStack_308 = (int *)0x73fd05;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0x90));
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_308 = (int *)0x73fd1a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_308 = (int *)0x73fd2a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          piStack_308 = (int *)0x73fd3a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          piStack_308 = (int *)0x73fd4a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          piStack_308 = (int *)0x73fd5a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_308 = (int *)0x73fd6e;
            FUN_00878dfb();
          }
          piStack_308 = (int *)(unaff_EBP + -0x1a4);
          iStack_30c = unaff_EBP + -0x184;
          puStack_310 = (undefined1 *)(unaff_EBP + -0x164);
          iStack_314 = unaff_EBP + -0x144;
          FUN_004250ac(unaff_EBP + -0x2e4,*(undefined4 *)(unaff_EBP + -0x10));
          piStack_308 = (int *)0x73fdaf;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73fdba;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          piStack_308 = (int *)0x73fdca;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73fdd5;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          piStack_308 = (int *)0x73fde5;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73fdf0;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          piStack_308 = (int *)0x73fe00;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73fe0b;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_308 = (int *)0x73fe1b;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73fe26;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_308 = (int *)0x73fe36;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73fe41;
            FUN_00878dfb();
          }
          piStack_308 = (int *)0x73fe4d;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          piStack_308 = (int *)0x73fe5d;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_308 = (int *)0x73fe6c;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_308 = (int *)0x73fe77;
              FUN_00878dfb();
            }
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_308 = (int *)0x73fe88;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          iVar3 = FUN_0040eed0();
          *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar3) + 0x10;
          iVar3 = FUN_0040eea9();
          puStack_310 = *(undefined1 **)(unaff_EBP + -0x204);
          iStack_30c = *(int *)(unaff_EBP + -0x200);
          piStack_308 = *(int **)(unaff_EBP + -0x1fc);
          iStack_314 = *(int *)(unaff_EBP + -0x1d8);
          iVar3 = (**(code **)(*piVar6 + 0x90))
                            (piVar6,(*(int *)(unaff_EBP + 8) - iVar3) + -0x10,
                             *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x1e4),
                             *(undefined4 *)(unaff_EBP + -0x1e0),*(undefined4 *)(unaff_EBP + -0x1dc)
                            );
          if (iVar3 < 0) {
            puStack_310 = (undefined1 *)0x73feed;
            iStack_30c = iVar3;
            piStack_308 = piVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          piStack_308 = (int *)0x73fefd;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73ff08;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_308 = (int *)0x73ff18;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73ff23;
            FUN_00878dfb();
          }
          piStack_308 = (int *)0x73ff2f;
          puVar5 = (undefined4 *)FUN_004029b9();
          *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          if (puVar5 == (undefined4 *)0x0) {
LAB_0073ff73:
            iVar3 = *(int *)(unaff_EBP + -0x20);
          }
          else {
            uVar4 = **(undefined4 **)(unaff_EBP + -0x18);
            piStack_308 = (int *)0x73ff4b;
            FUN_00611607();
            iVar3 = *(int *)(unaff_EBP + -0x20);
            puVar5[5] = 0;
            puVar5[6] = 0xffffffff;
            puVar5[7] = 0xffffffff;
            puVar5[4] = uVar4;
            puVar5[8] = -(uint)(iVar3 != 0) & iVar3 + 4U;
            *puVar5 = &PTR_FUN_008efcdc;
          }
LAB_0073ff78:
          piStack_308 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 4U);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_30c = 0x73ff94;
          FUN_0081820c();
          goto LAB_0073ff94;
        }
      }
    }
  }
  else if (1 < bVar1) {
    if (bVar1 < 4) {
LAB_0073f9a6:
      iVar3 = *(int *)(pbVar2 + 1);
      *(int *)(unaff_EBP + -0x1c) = iVar3 / 1000000;
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x3e3 + (iVar3 / 1000000) * 4);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + -4);
      }
      *(int *)(unaff_EBP + -0x24) = iVar3 + -1;
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      if (0 < iVar3 + -1) {
        do {
          piStack_308 = *(int **)(unaff_EBP + -0x1c);
          iStack_30c = unaff_EBP + -100;
          puStack_310 = (undefined1 *)0x73f9ef;
          iVar3 = FUN_00458c4f();
          iVar3 = *(int *)(iVar3 + 4);
          FUN_0046575e();
          if ((iVar3 != 0) && (iVar3 = FUN_0045e2eb(), iVar3 == *(int *)(pbVar2 + 1))) {
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              piStack_308 = (int *)0x0;
              iStack_30c = *(int *)(pbVar2 + 1);
              puStack_310 = (undefined1 *)(unaff_EBP + -0x34);
              iStack_314 = 0x73fa3b;
              puVar5 = (undefined4 *)FUN_005536ce();
              piStack_308 = (int *)0x73fa45;
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                        ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                         (IBinding *)*puVar5);
              FUN_004125e6();
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                piStack_308 = (int *)0x73fa62;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x10;
                piStack_308 = (int *)0x73fa72;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                piStack_308 = (int *)0x73fa82;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x12;
                piStack_308 = (int *)0x73fa92;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x13;
                piStack_308 = (int *)0x73faa2;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x14;
                if (*(int *)(unaff_EBP + -0x14) == 0) {
                  piStack_308 = (int *)0x73fab6;
                  FUN_00878dfb();
                }
                piStack_308 = (int *)(unaff_EBP + -0xc4);
                iStack_30c = unaff_EBP + -0xa4;
                puStack_310 = (undefined1 *)(unaff_EBP + -0x224);
                iStack_314 = unaff_EBP + -0x1b4;
                FUN_004250ac(unaff_EBP + -0x2c4,*(undefined4 *)(unaff_EBP + -0x10));
                piStack_308 = (int *)0x73faf7;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fb02;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x13;
                piStack_308 = (int *)0x73fb12;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fb1d;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x12;
                piStack_308 = (int *)0x73fb2d;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fb38;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                piStack_308 = (int *)0x73fb48;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fb53;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x10;
                piStack_308 = (int *)0x73fb63;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fb6e;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xf;
                piStack_308 = (int *)0x73fb7e;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fb89;
                  FUN_00878dfb();
                }
                piStack_308 = (int *)0x73fb95;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x15;
                piStack_308 = (int *)0x73fba5;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0x16;
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  piStack_308 = (int *)0x73fbb4;
                  FUN_00878dfb();
                  if (*(int *)(unaff_EBP + -0x10) == 0) {
                    piStack_308 = (int *)0x73fbbf;
                    FUN_00878dfb();
                  }
                }
                if (*(int *)(unaff_EBP + -0x14) == 0) {
                  piStack_308 = (int *)0x73fbce;
                  FUN_00878dfb();
                }
                piVar6 = *(int **)(unaff_EBP + -0x14);
                iVar3 = FUN_0040eed0();
                *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar3) + 0x10;
                iVar3 = FUN_0040eea9();
                puStack_310 = *(undefined1 **)(unaff_EBP + -0x124);
                iStack_30c = *(int *)(unaff_EBP + -0x120);
                piStack_308 = *(int **)(unaff_EBP + -0x11c);
                iStack_314 = *(int *)(unaff_EBP + -0xf8);
                iVar3 = (**(code **)(*piVar6 + 0x90))
                                  (piVar6,(*(int *)(unaff_EBP + 8) - iVar3) + -0x10,
                                   *(undefined4 *)(unaff_EBP + 0xc),
                                   *(undefined4 *)(unaff_EBP + -0x104),
                                   *(undefined4 *)(unaff_EBP + -0x100),
                                   *(undefined4 *)(unaff_EBP + -0xfc));
                if (iVar3 < 0) {
                  puStack_310 = (undefined1 *)0x73fc32;
                  iStack_30c = iVar3;
                  piStack_308 = piVar6;
                  FUN_00878e09();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x15;
                piStack_308 = (int *)0x73fc42;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fc4d;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xf;
                piStack_308 = (int *)0x73fc5d;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_308 = (int *)0x73fc68;
                  FUN_00878dfb();
                }
                piStack_308 = (int *)0x73fc74;
                puVar5 = (undefined4 *)FUN_004029b9();
                *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                if (puVar5 == (undefined4 *)0x0) goto LAB_0073ff73;
                piStack_308 = (int *)0x73fc8f;
                FUN_00611607();
                uVar4 = *(undefined4 *)(unaff_EBP + -0x1c);
                puVar5[6] = 0;
                puVar5[4] = uVar4;
                puVar5[5] = *(undefined4 *)(unaff_EBP + -0x18);
                iVar3 = *(int *)(unaff_EBP + -0x20);
                puVar5[7] = -(uint)(iVar3 != 0) & iVar3 + 4U;
                *puVar5 = &PTR_FUN_008ea2a8;
                goto LAB_0073ff78;
              }
            }
            break;
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        } while (*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + -0x24));
      }
    }
    else if (bVar1 < 7) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      piStack_308 = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_30c = 0x73f602;
      puVar5 = (undefined4 *)FUN_00679d22();
      piStack_308 = (int *)*puVar5;
      iStack_30c = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      puStack_310 = (undefined1 *)0x73f615;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      FUN_00414ebb();
      piStack_308 = (int *)0x0;
      iStack_30c = -1;
      puStack_310 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_314 = 0;
      (*DAT_0097b4c8)(0);
      FUN_0087a1b0();
      piStack_308 = (int *)0x0;
      iStack_30c = -1;
      iStack_314 = 0x73f64f;
      puStack_310 = (undefined1 *)&piStack_300;
      iStack_314 = FUN_00449713();
      puStack_310 = (undefined1 *)FUN_00456ad5();
      *(int **)(unaff_EBP + -0x30) = &iStack_30c;
      iStack_314 = 0x73f662;
      FUN_004033a1();
      puStack_310 = (undefined1 *)(unaff_EBP + -0x294);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_314 = 0x73f675;
      FUN_0040263d();
      iStack_314 = 0x73f67c;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      iStack_30c = 0x73f687;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x44) = uVar4;
      piStack_308 = (int *)0x73f696;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_308 = (int *)0x73f6a7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      piStack_308 = (int *)0x73f6b7;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_308 = (int *)0x73f6c2;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00414ebb();
      }
      else {
        piStack_308 = (int *)0x73f6e7;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
        piStack_308 = (int *)(unaff_EBP + -0x84);
        iStack_30c = 0x73f6f4;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f700;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        piStack_308 = (int *)0x73f710;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        piStack_308 = (int *)0x73f720;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        piStack_308 = (int *)0x73f730;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        piStack_308 = (int *)0x73f740;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_308 = (int *)0x73f753;
          FUN_00878dfb();
        }
        piStack_308 = (int *)(unaff_EBP + -0x244);
        iStack_30c = unaff_EBP + -0x194;
        puStack_310 = (undefined1 *)(unaff_EBP + -0x264);
        iStack_314 = unaff_EBP + -0x174;
        FUN_004250ac(unaff_EBP + -0x2a4,*(undefined4 *)(unaff_EBP + -0x10));
        piStack_308 = (int *)0x73f794;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f79f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        piStack_308 = (int *)0x73f7af;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f7ba;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        piStack_308 = (int *)0x73f7ca;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f7d5;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        piStack_308 = (int *)0x73f7e5;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f7f0;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        piStack_308 = (int *)0x73f800;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f80b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        piStack_308 = (int *)0x73f81b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f826;
          FUN_00878dfb();
        }
        piStack_308 = (int *)0x73f82c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        piStack_308 = (int *)(unaff_EBP + -0x5c);
        iStack_30c = 0x73f836;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f842;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        piStack_308 = (int *)0x73f84c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
        piStack_308 = (int *)(unaff_EBP + -0x74);
        iStack_30c = 0x73f856;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f862;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_308 = (int *)0x73f876;
          FUN_00878dfb();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_308 = (int *)0x73f881;
            FUN_00878dfb();
          }
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_308 = (int *)0x73f88f;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x14);
        iVar3 = FUN_0040eed0();
        *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar3) + 0x10;
        iVar3 = FUN_0040eea9();
        puStack_310 = *(undefined1 **)(unaff_EBP + -0x5c);
        iStack_30c = *(int *)(unaff_EBP + -0x58);
        piStack_308 = *(int **)(unaff_EBP + -0x54);
        iStack_314 = *(int *)(unaff_EBP + -0x68);
        iVar3 = (**(code **)(*piVar6 + 0x90))
                          (piVar6,(*(int *)(unaff_EBP + 8) - iVar3) + -0x10,
                           *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x74),
                           *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c));
        if (iVar3 < 0) {
          puStack_310 = (undefined1 *)0x73f8ed;
          iStack_30c = iVar3;
          piStack_308 = piVar6;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        piStack_308 = (int *)0x73f8fa;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f905;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        piStack_308 = (int *)0x73f912;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f91d;
          FUN_00878dfb();
        }
        piStack_308 = (int *)0x73f929;
        puVar5 = (undefined4 *)FUN_004029b9();
        *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        if (puVar5 == (undefined4 *)0x0) {
          iVar3 = *(int *)(unaff_EBP + -0x20);
        }
        else {
          uVar4 = *(undefined4 *)(*(byte **)(unaff_EBP + -0x24) + 1);
          bVar1 = **(byte **)(unaff_EBP + -0x24);
          piStack_308 = (int *)0x73f949;
          FUN_00611607();
          iVar3 = *(int *)(unaff_EBP + -0x1c);
          puVar5[4] = (uint)bVar1;
          puVar5[5] = uVar4;
          *puVar5 = &PTR_FUN_008efcd0;
          puVar5[6] = (uint)(0x5a < iVar3);
          iVar3 = *(int *)(unaff_EBP + -0x20);
          puVar5[7] = -(uint)(iVar3 != 0) & iVar3 + 4U;
        }
        piStack_308 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 4U);
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        iStack_30c = 0x73f995;
        FUN_0081820c();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00414ebb();
LAB_0073ff94:
        piStack_308 = (int *)(unaff_EBP + 0xc);
        iStack_30c = 0x73ffa7;
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        piStack_308 = (int *)0x73ffb2;
        FUN_007d3cdd();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00402676();
      }
    }
    else {
      if (bVar1 == 7) goto LAB_0073f9a6;
      if (bVar1 == 8) {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(pbVar2 + 1);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        piStack_308 = (int *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_30c = 0x73f1d7;
        puVar5 = (undefined4 *)FUN_00679d22();
        piStack_308 = (int *)*puVar5;
        iStack_30c = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        puStack_310 = (undefined1 *)0x73f1e8;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (*(int *)(unaff_EBP + -0x40) != 0) {
          piStack_308 = (int *)0x73f1ff;
          FUN_00434e38();
        }
        piStack_308 = (int *)0x73f20c;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        piStack_308 = (int *)0x73f21c;
        FUN_00403191();
        piStack_308 = (int *)0x0;
        iStack_30c = -1;
        puStack_310 = *(undefined1 **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iStack_314 = 0;
        (*DAT_0097b4c8)(0);
        FUN_0087a1b0();
        piStack_308 = (int *)0x0;
        iStack_30c = unaff_EBP + -0xf4;
        puStack_310 = (undefined1 *)(unaff_EBP + -0x234);
        iStack_314 = -1;
        uVar4 = FUN_00449713(&piStack_300);
        uVar4 = FUN_00456ad5(uVar4);
        *(int **)(unaff_EBP + -0x1c) = &iStack_314;
        FUN_004033a1(uVar4);
        iVar3 = unaff_EBP + -0x2d4;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00405a1d(iVar3);
        FUN_00402660();
        FUN_00404a02(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iStack_30c = 0x73f295;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x48) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        if (iVar3 != 0) {
          piStack_308 = (int *)0x73f2ab;
          iVar3 = FUN_0041a581();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            piStack_308 = (int *)0x73f2bc;
            FUN_00878dfb();
          }
        }
        piStack_308 = (int *)0x73f2c7;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   *(IBinding **)(unaff_EBP + -0x28));
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        piStack_308 = (int *)0x73f2df;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f2ea;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        piStack_308 = (int *)0x73f2fa;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f305;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_308 = (int *)0x73f315;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_308 = (int *)0x73f320;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_308 = (int *)0x73f34f;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          piStack_308 = (int *)0x73f35f;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          piStack_308 = (int *)0x73f36f;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          piStack_308 = (int *)0x73f37f;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_308 = (int *)0x73f38f;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_308 = (int *)0x73f3a3;
            FUN_00878dfb();
          }
          piStack_308 = (int *)(unaff_EBP + -0x94);
          iStack_30c = unaff_EBP + -0x254;
          puStack_310 = (undefined1 *)(unaff_EBP + -0x114);
          iStack_314 = unaff_EBP + -500;
          FUN_004250ac(unaff_EBP + -0x2b4,*(undefined4 *)(unaff_EBP + -0x10));
          piStack_308 = (int *)0x73f3e4;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f3ef;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_308 = (int *)0x73f3ff;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f40a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          piStack_308 = (int *)0x73f41a;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f425;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          piStack_308 = (int *)0x73f435;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f440;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          piStack_308 = (int *)0x73f450;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f45b;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          piStack_308 = (int *)0x73f46b;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f476;
            FUN_00878dfb();
          }
          piStack_308 = (int *)0x73f482;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          piStack_308 = (int *)0x73f492;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_308 = (int *)0x73f4a1;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_308 = (int *)0x73f4ac;
              FUN_00878dfb();
            }
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_308 = (int *)0x73f4bd;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          iVar3 = FUN_0040eed0();
          *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar3) + 0x10;
          iVar3 = FUN_0040eea9();
          puStack_310 = *(undefined1 **)(unaff_EBP + -0x274);
          iStack_30c = *(int *)(unaff_EBP + -0x270);
          piStack_308 = *(int **)(unaff_EBP + -0x26c);
          iStack_314 = *(int *)(unaff_EBP + -0x148);
          iVar3 = (**(code **)(*piVar6 + 0x90))
                            (piVar6,(*(int *)(unaff_EBP + 8) - iVar3) + -0x10,
                             *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x154),
                             *(undefined4 *)(unaff_EBP + -0x150),*(undefined4 *)(unaff_EBP + -0x14c)
                            );
          if (iVar3 < 0) {
            puStack_310 = (undefined1 *)0x73f522;
            iStack_30c = iVar3;
            piStack_308 = piVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          piStack_308 = (int *)0x73f532;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f53d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          piStack_308 = (int *)0x73f54d;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_308 = (int *)0x73f558;
            FUN_00878dfb();
          }
          piStack_308 = (int *)0x73f564;
          puVar5 = (undefined4 *)FUN_004029b9();
          *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          if (puVar5 == (undefined4 *)0x0) {
            iVar3 = *(int *)(unaff_EBP + -0x20);
          }
          else {
            piStack_308 = (int *)0x73f57b;
            FUN_00611607();
            uVar4 = *(undefined4 *)(unaff_EBP + -0x24);
            puVar5[6] = 0xffffffff;
            puVar5[7] = 0xffffffff;
            puVar5[4] = uVar4;
            iVar3 = *(int *)(unaff_EBP + -0x20);
            puVar5[5] = 1;
            puVar5[8] = -(uint)(iVar3 != 0) & iVar3 + 4U;
            *puVar5 = &PTR_FUN_008efcdc;
          }
          piStack_308 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 4U);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iStack_30c = 0x73f5ca;
          FUN_0081820c();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            piStack_308 = (int *)0x73f5e2;
            FUN_00434e38();
          }
          goto LAB_0073ff94;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_308 = (int *)0x73f33d;
          FUN_00434e38();
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_308 = (int *)0x73ffd2;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_308 = (int *)0x73ffe3;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_308 = (int *)0x73fff4;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
LAB_0073fff4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


