/* FUN_006c8345 - 0x006c8345 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c8345(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int iStack_2e4;
  undefined1 *puStack_2e0;
  int iStack_2dc;
  int *piStack_2d8;
  int *piStack_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  int *piStack_2c4;
  undefined *puStack_2c0;
  int *piStack_2bc;
  undefined4 *puStack_2b8;
  
  FUN_00879bb8();
  puStack_2b8 = *(undefined4 **)(unaff_EBP + 0xc);
  piStack_2bc = *(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  puStack_2c0 = (undefined *)0x6c8368;
  iVar2 = FUN_006c69a5();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  if (iVar2 == -1) goto LAB_006c933d;
  puStack_2b8 = (undefined4 *)(unaff_EBP + -0x40);
  piStack_2bc = (int *)0x6c8385;
  iVar3 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar3 + 4);
  puStack_2b8 = (undefined4 *)0x6c8393;
  FUN_0045e4a2();
  if (iVar2 < 0x5b) {
    if (iVar2 == 0x36) {
      iVar2 = 0x2a;
    }
    puVar4 = (undefined4 *)(iVar2 * 5 + 4 + DAT_00979110);
  }
  else {
    if (*(int *)(extraout_ECX + 0x568 + iVar2 * 0xc) != 0) goto LAB_006c933d;
    puVar4 = (undefined4 *)(extraout_ECX + iVar2 * 0xc + 0x560);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *puVar4;
  puStack_2b8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(puVar4 + 1);
  piStack_2bc = (int *)0x6c83de;
  FUN_00403191();
  puStack_2b8 = (undefined4 *)0x3;
  piStack_2bc = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_2c0 = (undefined *)0x6c83f1;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar7) {
    puStack_2b8 = (undefined4 *)0x80004003;
    piStack_2bc = (int *)0x6c8407;
    FUN_00878dfb();
  }
  puStack_2b8 = (undefined4 *)(unaff_EBP + -0x1a4);
  piStack_2bc = (int *)(unaff_EBP + -0x124);
  puStack_2c0 = (undefined *)0x0;
  piStack_2c4 = (int *)0x0;
  iStack_2c8 = 0;
  uStack_2cc = 0;
  piStack_2d0 = (int *)0x0;
  piStack_2d8 = (int *)0x6c8429;
  FUN_0042a39f();
  puStack_2b8 = (undefined4 *)(unaff_EBP + -0x124);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_2bc = (int *)0x6c8439;
  puStack_2b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2b8 < 0) {
    piStack_2bc = (int *)0x6c8444;
    FUN_00878dfb();
  }
  puStack_2b8 = (undefined4 *)(unaff_EBP + -0x1a4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_2bc = (int *)0x6c8454;
  puStack_2b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2b8 < 0) {
    piStack_2bc = (int *)0x6c845f;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_2b8 = (undefined4 *)0x80004003;
    piStack_2bc = (int *)0x6c846e;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x14);
  puStack_2b8 = (undefined4 *)0x80ffffff;
  puStack_2c0 = (undefined *)0x6c847f;
  piStack_2bc = piVar5;
  iVar2 = (**(code **)(*piVar5 + 0xe0))();
  if (iVar2 < 0) {
    puStack_2c0 = &DAT_00963df8;
    uStack_2cc = 0x6c848f;
    iStack_2c8 = iVar2;
    piStack_2c4 = piVar5;
    FUN_00878e09();
  }
  puStack_2c0 = (undefined *)(unaff_EBP + -0x30);
  piStack_2c4 = (int *)0x6c849b;
  puVar4 = (undefined4 *)FUN_004489f5();
  piStack_2c4 = (int *)*puVar4;
  puStack_2c0 = (undefined *)0x1;
  iStack_2c8 = 0x6c84a8;
  FUN_0040ee87();
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar5 == (int *)0x0) {
    puStack_2c0 = (undefined *)0x80004003;
    piStack_2c4 = (int *)0x6c84bd;
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piVar5;
  uStack_2cc = *(undefined4 *)(unaff_EBP + -0x5c);
  iStack_2c8 = *(undefined4 *)(unaff_EBP + -0x58);
  piStack_2c4 = *(int **)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + -0x2c) = piVar5;
  puStack_2c0 = *(undefined **)(unaff_EBP + -0x50);
  piStack_2d0 = piVar5;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    piStack_2d8 = *(int **)(unaff_EBP + -0x2c);
    puStack_2e0 = (undefined1 *)0x6c84e7;
    iStack_2dc = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_2d8 = (int *)0x6c84f4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_2d8 = (int *)0x6c8501;
    FUN_00878dfb();
  }
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  bVar1 = *(byte *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (bVar1 == 1) {
    if ((*(int *)(unaff_EBP + -0x23) / 1000) % 10 != 0) {
      piStack_2d8 = *(int **)(unaff_EBP + -0x23);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iStack_2dc = *(int *)(unaff_EBP + -0x34);
      puStack_2e0 = (undefined1 *)0x6c9046;
      iVar2 = FUN_00650dae();
      if (0 < iVar2) {
        piStack_2d8 = (int *)0x6c905f;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0x90));
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_2d8 = (int *)0x6c9074;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          piStack_2d8 = (int *)0x6c9084;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_2d8 = (int *)0x6c9094;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          piStack_2d8 = (int *)0x6c90a4;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          piStack_2d8 = (int *)0x6c90b4;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_2d8 = (int *)0x6c90c8;
            FUN_00878dfb();
          }
          piStack_2d8 = (int *)(unaff_EBP + -0x194);
          iStack_2dc = unaff_EBP + -0x174;
          puStack_2e0 = (undefined1 *)(unaff_EBP + -0x154);
          iStack_2e4 = unaff_EBP + -0x134;
          FUN_004250ac(unaff_EBP + -0x2b4,*(undefined4 *)(unaff_EBP + -0x10));
          piStack_2d8 = (int *)0x6c9109;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c9114;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          piStack_2d8 = (int *)0x6c9124;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c912f;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          piStack_2d8 = (int *)0x6c913f;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c914a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_2d8 = (int *)0x6c915a;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c9165;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          piStack_2d8 = (int *)0x6c9175;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c9180;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_2d8 = (int *)0x6c9190;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c919b;
            FUN_00878dfb();
          }
          piStack_2d8 = (int *)0x6c91a7;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          piStack_2d8 = (int *)0x6c91b7;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_2d8 = (int *)0x6c91c6;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_2d8 = (int *)0x6c91d1;
              FUN_00878dfb();
            }
          }
          *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x10);
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_2d8 = (int *)0x6c91e2;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x14);
          iVar2 = FUN_0040eed0();
          *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar2) + 0x10;
          iVar2 = FUN_0040eea9();
          puStack_2e0 = *(undefined1 **)(unaff_EBP + -500);
          iStack_2dc = *(int *)(unaff_EBP + -0x1f0);
          piStack_2d8 = *(int **)(unaff_EBP + -0x1ec);
          iStack_2e4 = *(int *)(unaff_EBP + -0x1c8);
          iVar2 = (**(code **)(*piVar5 + 0x90))
                            (piVar5,(*(int *)(unaff_EBP + 8) - iVar2) + -0x10,
                             *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x1d4),
                             *(undefined4 *)(unaff_EBP + -0x1d0),*(undefined4 *)(unaff_EBP + -0x1cc)
                            );
          if (iVar2 < 0) {
            puStack_2e0 = (undefined1 *)0x6c9247;
            iStack_2dc = iVar2;
            piStack_2d8 = piVar5;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          piStack_2d8 = (int *)0x6c9257;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c9262;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_2d8 = (int *)0x6c9272;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c927d;
            FUN_00878dfb();
          }
          piStack_2d8 = (int *)0x6c9289;
          puVar4 = (undefined4 *)FUN_004029b9();
          *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          if (puVar4 == (undefined4 *)0x0) {
LAB_006c92cd:
            iVar2 = *(int *)(unaff_EBP + -0x1c);
          }
          else {
            uVar6 = **(undefined4 **)(unaff_EBP + -0x18);
            piStack_2d8 = (int *)0x6c92a5;
            FUN_00611607();
            iVar2 = *(int *)(unaff_EBP + -0x1c);
            puVar4[5] = 0;
            puVar4[6] = 0xffffffff;
            puVar4[7] = 0xffffffff;
            puVar4[4] = uVar6;
            puVar4[8] = -(uint)(iVar2 != 0) & iVar2 + 4U;
            *puVar4 = &PTR_FUN_008efcdc;
          }
LAB_006c92d2:
          piStack_2d8 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 4U);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_2dc = 0x6c92ee;
          FUN_0081820c();
          goto LAB_006c92ee;
        }
      }
    }
  }
  else if (1 < bVar1) {
    if (bVar1 < 4) {
LAB_006c8d00:
      iVar2 = *(int *)(unaff_EBP + -0x23) / 1000000;
      *(int *)(unaff_EBP + -0x2c) = iVar2;
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x3e3 + iVar2 * 4);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + -4);
      }
      *(int *)(unaff_EBP + -0x28) = iVar2 + -1;
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      if (0 < iVar2 + -1) {
        do {
          piStack_2d8 = *(int **)(unaff_EBP + -0x2c);
          iStack_2dc = unaff_EBP + -100;
          puStack_2e0 = (undefined1 *)0x6c8d49;
          iVar2 = FUN_00458c4f();
          iVar2 = *(int *)(iVar2 + 4);
          FUN_0046575e();
          if ((iVar2 != 0) && (iVar2 = FUN_0045e2eb(), iVar2 == *(int *)(unaff_EBP + -0x23))) {
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              piStack_2d8 = (int *)0x0;
              iStack_2dc = *(int *)(unaff_EBP + -0x23);
              puStack_2e0 = (undefined1 *)(unaff_EBP + -0x3c);
              iStack_2e4 = 0x6c8d92;
              puVar4 = (undefined4 *)FUN_005536ce();
              piStack_2d8 = (int *)0x6c8d9c;
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                        ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                         (IBinding *)*puVar4);
              FUN_004125e6();
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                piStack_2d8 = (int *)0x6c8db9;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 8;
                piStack_2d8 = (int *)0x6c8dc9;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 9;
                piStack_2d8 = (int *)0x6c8dd9;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 10;
                piStack_2d8 = (int *)0x6c8de9;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                piStack_2d8 = (int *)0x6c8df9;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                if (*(int *)(unaff_EBP + -0x14) == 0) {
                  piStack_2d8 = (int *)0x6c8e0d;
                  FUN_00878dfb();
                }
                piStack_2d8 = (int *)(unaff_EBP + -0xb4);
                iStack_2dc = unaff_EBP + -0x94;
                puStack_2e0 = (undefined1 *)(unaff_EBP + -0x84);
                iStack_2e4 = unaff_EBP + -0x224;
                FUN_004250ac(unaff_EBP + -0x294,*(undefined4 *)(unaff_EBP + -0x10));
                piStack_2d8 = (int *)0x6c8e4e;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8e59;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                piStack_2d8 = (int *)0x6c8e69;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8e74;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 10;
                piStack_2d8 = (int *)0x6c8e84;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8e8f;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 9;
                piStack_2d8 = (int *)0x6c8e9f;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8eaa;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 8;
                piStack_2d8 = (int *)0x6c8eba;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8ec5;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_2d8 = (int *)0x6c8ed5;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8ee0;
                  FUN_00878dfb();
                }
                piStack_2d8 = (int *)0x6c8eec;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                piStack_2d8 = (int *)0x6c8efc;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  piStack_2d8 = (int *)0x6c8f0b;
                  FUN_00878dfb();
                  if (*(int *)(unaff_EBP + -0x10) == 0) {
                    piStack_2d8 = (int *)0x6c8f16;
                    FUN_00878dfb();
                  }
                }
                *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x10);
                if (*(int *)(unaff_EBP + -0x14) == 0) {
                  piStack_2d8 = (int *)0x6c8f27;
                  FUN_00878dfb();
                }
                piVar5 = *(int **)(unaff_EBP + -0x14);
                iVar2 = FUN_0040eed0();
                *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar2) + 0x10;
                iVar2 = FUN_0040eea9();
                puStack_2e0 = *(undefined1 **)(unaff_EBP + -0x114);
                iStack_2dc = *(int *)(unaff_EBP + -0x110);
                piStack_2d8 = *(int **)(unaff_EBP + -0x10c);
                iStack_2e4 = *(int *)(unaff_EBP + -0xe8);
                iVar2 = (**(code **)(*piVar5 + 0x90))
                                  (piVar5,(*(int *)(unaff_EBP + 8) - iVar2) + -0x10,
                                   *(undefined4 *)(unaff_EBP + 0xc),
                                   *(undefined4 *)(unaff_EBP + -0xf4),
                                   *(undefined4 *)(unaff_EBP + -0xf0),
                                   *(undefined4 *)(unaff_EBP + -0xec));
                if (iVar2 < 0) {
                  puStack_2e0 = (undefined1 *)0x6c8f8c;
                  iStack_2dc = iVar2;
                  piStack_2d8 = piVar5;
                  FUN_00878e09();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                piStack_2d8 = (int *)0x6c8f9c;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8fa7;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_2d8 = (int *)0x6c8fb7;
                iVar2 = FUN_00402bc3();
                if (iVar2 < 0) {
                  piStack_2d8 = (int *)0x6c8fc2;
                  FUN_00878dfb();
                }
                piStack_2d8 = (int *)0x6c8fce;
                puVar4 = (undefined4 *)FUN_004029b9();
                *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
                *(undefined1 *)(unaff_EBP + -4) = 0xf;
                if (puVar4 == (undefined4 *)0x0) goto LAB_006c92cd;
                piStack_2d8 = (int *)0x6c8fe9;
                FUN_00611607();
                uVar6 = *(undefined4 *)(unaff_EBP + -0x2c);
                puVar4[6] = 0;
                puVar4[4] = uVar6;
                puVar4[5] = *(undefined4 *)(unaff_EBP + -0x18);
                iVar2 = *(int *)(unaff_EBP + -0x1c);
                puVar4[7] = -(uint)(iVar2 != 0) & iVar2 + 4U;
                *puVar4 = &PTR_FUN_008ea2a8;
                goto LAB_006c92d2;
              }
            }
            break;
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        } while (*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + -0x28));
      }
    }
    else if (bVar1 < 7) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      piStack_2d8 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_2dc = 0x6c897a;
      puVar4 = (undefined4 *)FUN_00679d22();
      piStack_2d8 = (int *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      iStack_2dc = unaff_EBP + -0x18;
      puStack_2e0 = (undefined1 *)0x6c898d;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_00414ebb();
      piStack_2d8 = (int *)0x0;
      iStack_2dc = -1;
      puStack_2e0 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_2e4 = 0;
      (*DAT_0097b4c8)(0);
      FUN_0087a1b0();
      piStack_2d8 = (int *)0x0;
      iStack_2dc = -1;
      iStack_2e4 = 0x6c89c7;
      puStack_2e0 = (undefined1 *)&piStack_2d0;
      iStack_2e4 = FUN_00449713();
      puStack_2e0 = (undefined1 *)FUN_00456ad5();
      *(int **)(unaff_EBP + -0x2c) = &iStack_2dc;
      iStack_2e4 = 0x6c89da;
      FUN_004033a1();
      puStack_2e0 = (undefined1 *)(unaff_EBP + -0x2a4);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_2e4 = 0x6c89f3;
      FUN_0040263d();
      iStack_2e4 = 0x6c89fa;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iStack_2dc = 0x6c8a05;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x4c) = uVar6;
      piStack_2d8 = (int *)0x6c8a14;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_2d8 = (int *)0x6c8a25;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_2d8 = (int *)0x6c8a35;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_2d8 = (int *)0x6c8a40;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00414ebb();
      }
      else {
        piStack_2d8 = (int *)0x6c8a62;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        piStack_2d8 = (int *)0x6c8a72;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        piStack_2d8 = (int *)0x6c8a82;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_2d8 = (int *)0x6c8a92;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        piStack_2d8 = (int *)0x6c8aa2;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_2d8 = (int *)0x6c8ab6;
          FUN_00878dfb();
        }
        piStack_2d8 = (int *)(unaff_EBP + -0x164);
        iStack_2dc = unaff_EBP + -0x204;
        puStack_2e0 = (undefined1 *)(unaff_EBP + -0x144);
        iStack_2e4 = unaff_EBP + -0x234;
        FUN_004250ac(unaff_EBP + -0x274,*(undefined4 *)(unaff_EBP + -0x10));
        piStack_2d8 = (int *)0x6c8af7;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8b02;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        piStack_2d8 = (int *)0x6c8b12;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8b1d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_2d8 = (int *)0x6c8b2d;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8b38;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        piStack_2d8 = (int *)0x6c8b48;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8b53;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        piStack_2d8 = (int *)0x6c8b63;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8b6e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        piStack_2d8 = (int *)0x6c8b7e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8b89;
          FUN_00878dfb();
        }
        piStack_2d8 = (int *)0x6c8b93;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        piStack_2d8 = (int *)(unaff_EBP + -0x5c);
        iStack_2dc = 0x6c8b9d;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8ba9;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        piStack_2d8 = (int *)0x6c8bb9;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_2d8 = (int *)0x6c8bc8;
          FUN_00878dfb();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_2d8 = (int *)0x6c8bd3;
            FUN_00878dfb();
          }
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_2d8 = (int *)0x6c8be5;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x14);
        iVar2 = FUN_0040eed0();
        *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar2) + 0x10;
        iVar2 = FUN_0040eea9();
        puStack_2e0 = *(undefined1 **)(unaff_EBP + -0x5c);
        iStack_2dc = *(int *)(unaff_EBP + -0x58);
        piStack_2d8 = *(int **)(unaff_EBP + -0x54);
        iStack_2e4 = *(int *)(unaff_EBP + -0x178);
        iVar2 = (**(code **)(*piVar5 + 0x90))
                          (piVar5,(*(int *)(unaff_EBP + 8) - iVar2) + -0x10,
                           *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x184),
                           *(undefined4 *)(unaff_EBP + -0x180),*(undefined4 *)(unaff_EBP + -0x17c));
        if (iVar2 < 0) {
          puStack_2e0 = (undefined1 *)0x6c8c46;
          iStack_2dc = iVar2;
          piStack_2d8 = piVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        piStack_2d8 = (int *)0x6c8c56;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8c61;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        piStack_2d8 = (int *)0x6c8c6e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8c79;
          FUN_00878dfb();
        }
        piStack_2d8 = (int *)0x6c8c85;
        puVar4 = (undefined4 *)FUN_004029b9();
        *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        if (puVar4 == (undefined4 *)0x0) {
          iVar2 = *(int *)(unaff_EBP + -0x1c);
        }
        else {
          piStack_2d8 = (int *)0x6c8c9c;
          FUN_00611607();
          puVar4[4] = (uint)*(byte *)(unaff_EBP + -0x24);
          puVar4[5] = *(undefined4 *)(unaff_EBP + -0x23);
          iVar2 = *(int *)(unaff_EBP + -0x28);
          *puVar4 = &PTR_FUN_008efcd0;
          puVar4[6] = (uint)(0x5a < iVar2);
          iVar2 = *(int *)(unaff_EBP + -0x1c);
          puVar4[7] = -(uint)(iVar2 != 0) & iVar2 + 4U;
        }
        piStack_2d8 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 4U);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_2dc = 0x6c8cef;
        FUN_0081820c();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00414ebb();
LAB_006c92ee:
        piStack_2d8 = (int *)(unaff_EBP + 0xc);
        iStack_2dc = 0x6c9301;
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        piStack_2d8 = (int *)0x6c930c;
        FUN_007d3cdd();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00402676();
      }
    }
    else {
      if (bVar1 == 7) goto LAB_006c8d00;
      if (bVar1 == 8) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        piStack_2d8 = (int *)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_2dc = 0x6c855b;
        puVar4 = (undefined4 *)FUN_00679d22();
        piStack_2d8 = (int *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        iStack_2dc = unaff_EBP + -0x18;
        puStack_2e0 = (undefined1 *)0x6c856e;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          piStack_2d8 = (int *)0x6c8585;
          FUN_00434e38();
        }
        piStack_2d8 = (int *)0x6c8592;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        piStack_2d8 = (int *)0x6c85a2;
        FUN_00403191();
        piStack_2d8 = (int *)0x0;
        iStack_2dc = -1;
        puStack_2e0 = *(undefined1 **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iStack_2e4 = 0;
        (*DAT_0097b4c8)(0);
        FUN_0087a1b0();
        piStack_2d8 = (int *)0x0;
        iStack_2dc = unaff_EBP + -0x244;
        puStack_2e0 = (undefined1 *)(unaff_EBP + -0xa4);
        iStack_2e4 = -1;
        uVar6 = FUN_00449713(&piStack_2d0);
        uVar6 = FUN_00456ad5(uVar6);
        *(int **)(unaff_EBP + -0x28) = &iStack_2e4;
        FUN_004033a1(uVar6);
        iVar2 = unaff_EBP + -0x264;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00405a1d(iVar2);
        FUN_00402660();
        FUN_00404a02(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iStack_2dc = 0x6c861b;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x48) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        if (iVar2 != 0) {
          piStack_2d8 = (int *)0x6c8631;
          iVar2 = FUN_0041a581();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            piStack_2d8 = (int *)0x6c8642;
            FUN_00878dfb();
          }
        }
        piStack_2d8 = (int *)0x6c864d;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   *(IBinding **)(unaff_EBP + -0x30));
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        piStack_2d8 = (int *)0x6c8665;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c8670;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        piStack_2d8 = (int *)0x6c8680;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c868b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_2d8 = (int *)0x6c869b;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_2d8 = (int *)0x6c86a6;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_2d8 = (int *)0x6c86d5;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          piStack_2d8 = (int *)0x6c86e5;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          piStack_2d8 = (int *)0x6c86f5;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          piStack_2d8 = (int *)0x6c8705;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_2d8 = (int *)0x6c8715;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_2d8 = (int *)0x6c8729;
            FUN_00878dfb();
          }
          piStack_2d8 = (int *)(unaff_EBP + -0x214);
          iStack_2dc = unaff_EBP + -0xe4;
          puStack_2e0 = (undefined1 *)(unaff_EBP + -0x1c4);
          iStack_2e4 = unaff_EBP + -0xc4;
          FUN_004250ac(unaff_EBP + -0x284,*(undefined4 *)(unaff_EBP + -0x10));
          piStack_2d8 = (int *)0x6c876a;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c8775;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_2d8 = (int *)0x6c8785;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c8790;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          piStack_2d8 = (int *)0x6c87a0;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c87ab;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          piStack_2d8 = (int *)0x6c87bb;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c87c6;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          piStack_2d8 = (int *)0x6c87d6;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c87e1;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          piStack_2d8 = (int *)0x6c87f1;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c87fc;
            FUN_00878dfb();
          }
          piStack_2d8 = (int *)0x6c8805;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          piStack_2d8 = (int *)0x6c8815;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_2d8 = (int *)0x6c8824;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_2d8 = (int *)0x6c882f;
              FUN_00878dfb();
            }
          }
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x10);
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_2d8 = (int *)0x6c8840;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x14);
          iVar2 = FUN_0040eed0();
          *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) - iVar2) + 0x10;
          iVar2 = FUN_0040eea9();
          puStack_2e0 = *(undefined1 **)(unaff_EBP + -0x74);
          iStack_2dc = *(int *)(unaff_EBP + -0x70);
          piStack_2d8 = *(int **)(unaff_EBP + -0x6c);
          iStack_2e4 = *(int *)(unaff_EBP + -0x1d8);
          iVar2 = (**(code **)(*piVar5 + 0x90))
                            (piVar5,(*(int *)(unaff_EBP + 8) - iVar2) + -0x10,
                             *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x1e4),
                             *(undefined4 *)(unaff_EBP + -0x1e0),*(undefined4 *)(unaff_EBP + -0x1dc)
                            );
          if (iVar2 < 0) {
            puStack_2e0 = (undefined1 *)0x6c88a2;
            iStack_2dc = iVar2;
            piStack_2d8 = piVar5;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          piStack_2d8 = (int *)0x6c88b2;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c88bd;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          piStack_2d8 = (int *)0x6c88ca;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_2d8 = (int *)0x6c88d5;
            FUN_00878dfb();
          }
          piStack_2d8 = (int *)0x6c88e1;
          puVar4 = (undefined4 *)FUN_004029b9();
          *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          if (puVar4 == (undefined4 *)0x0) {
            iVar2 = *(int *)(unaff_EBP + -0x1c);
          }
          else {
            piStack_2d8 = (int *)0x6c88f8;
            FUN_00611607();
            uVar6 = *(undefined4 *)(unaff_EBP + -0x23);
            puVar4[6] = 0xffffffff;
            puVar4[7] = 0xffffffff;
            puVar4[4] = uVar6;
            iVar2 = *(int *)(unaff_EBP + -0x1c);
            puVar4[5] = 1;
            puVar4[8] = -(uint)(iVar2 != 0) & iVar2 + 4U;
            *puVar4 = &PTR_FUN_008efcdc;
          }
          piStack_2d8 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 4U);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iStack_2dc = 0x6c8947;
          FUN_0081820c();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            piStack_2d8 = (int *)0x6c895f;
            FUN_00434e38();
          }
          goto LAB_006c92ee;
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_2d8 = (int *)0x6c86c3;
          FUN_00434e38();
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_2d8 = (int *)0x6c932c;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_2d8 = (int *)0x6c933d;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
LAB_006c933d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


