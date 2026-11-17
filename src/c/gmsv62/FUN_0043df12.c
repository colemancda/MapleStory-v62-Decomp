/* FUN_0043df12 - 0x0043df12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043df12(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(int *)(unaff_EBP + 0xc) != 0) || (iVar4 = extraout_ECX, *(int *)(unaff_EBP + 0x10) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x3b1);
    uVar15 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00437222(uVar15,unaff_EBP + -0x14,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_0040ee87(*(undefined4 *)(unaff_EBP + 8),1);
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar5 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar5 = *(int **)(unaff_EBP + -0x14);
      }
      iVar4 = *piVar5;
      *(int **)(unaff_EBP + -0x18) = piVar5;
      iVar4 = (**(code **)(iVar4 + 100))
                        (piVar5,*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x1c));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00403191(&DAT_00980690);
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + -0x14);
    }
    iVar4 = *piVar5;
    *(int **)(unaff_EBP + -0x18) = piVar5;
    iVar4 = (**(code **)(iVar4 + 0x90))
                      (piVar5,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
               *(IBinding **)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004125d9();
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xca8),
             *(IBinding **)(unaff_EBP + 8));
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x10,0x3b1);
  uVar15 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00437222(uVar15,(int *)(iVar4 + 0xcac),0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + 0x10) + -0xc);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + 8),1);
  iVar4 = *(int *)(iVar4 + 0xcac);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcac);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xcac);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcac);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0x90))
                    (piVar5,0,0,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x10,0x3b1);
  iVar4 = *(int *)(unaff_EBP + -0x10);
  uVar15 = *puVar3;
  piVar5 = (int *)(iVar4 + 0xcb4);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00437222(uVar15,piVar5,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + 0x10) + -0xc);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcac),1);
  iVar4 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcb4);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xcb4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcb4);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0x90))
                    (piVar5,0,0,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x10,0x3b1);
  iVar4 = *(int *)(unaff_EBP + -0x10);
  uVar15 = *puVar3;
  piVar5 = (int *)(iVar4 + 0xcb0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00437222(uVar15,piVar5,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + 0x10) + -0xc);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcb4),1);
  iVar4 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcb0);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x10,0x3b1);
  iVar4 = *(int *)(unaff_EBP + -0x10);
  uVar15 = *puVar3;
  piVar5 = (int *)(iVar4 + 0xcb8);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00437222(uVar15,piVar5,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + 0x10) + -0xc);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcb4),1);
  iVar4 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = (int *)*piVar5;
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  FUN_004031b7(-(*(int *)(iVar4 + 0xcf0) != 100) & 2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 0x10,0,0,0,0,0,unaff_EBP + -0x38,unaff_EBP + -0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xcc4),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcb4),1);
  iVar4 = *(int *)(iVar4 + 0xcc4);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcc4);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar6 = *(int *)(iVar4 + 0xcc4);
  *(undefined4 **)(unaff_EBP + 0x10) = (undefined4 *)(iVar4 + 0xcc4);
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(iVar4 + 0xcc4);
  iVar6 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffffff);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar5,&DAT_00963df8);
  }
  cVar2 = FUN_00433bfa(0);
  if (cVar2 == '\0') {
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0x14),1);
    iVar4 = **(int **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcc4);
    iVar4 = *piVar5;
    *(int **)(unaff_EBP + 0x10) = piVar5;
    iVar4 = (**(code **)(iVar4 + 0xfc))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(iVar4 + 0xcc4) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(iVar4 + 0xcc4);
    iVar6 = (**(code **)(*piVar5 + 0xb4))(piVar5,*(undefined4 *)(unaff_EBP + 0x18));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar5,&DAT_00963df8);
    }
    *(undefined4 *)(iVar4 + 0x4a8) = 1;
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  FUN_004031b7(-(*(int *)(iVar4 + 0xcf0) != 100) & 2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 0x10,0,0,0,0,1,unaff_EBP + -0x38,unaff_EBP + -0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xcbc),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcb0),1);
  iVar4 = *(int *)(iVar4 + 0xcbc);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcbc);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcc4),1);
  iVar4 = *(int *)(iVar4 + 0xcbc);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcbc);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(iVar4 + 0xcbc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(iVar4 + 0xcbc);
  iVar6 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffffff);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar5,&DAT_00963df8);
  }
  FUN_004031b7(-(*(int *)(iVar4 + 0xcf0) != 100) & 2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 0x10,0,0,0,0,2,unaff_EBP + -0x38,unaff_EBP + -0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xcc0),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcb4),1);
  iVar4 = *(int *)(iVar4 + 0xcc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcc0);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcc4),1);
  iVar4 = *(int *)(iVar4 + 0xcc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcc0);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(iVar4 + 0xcc0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(iVar4 + 0xcc0);
  iVar6 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffffff);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar5,&DAT_00963df8);
  }
  FUN_004031b7(-(*(int *)(iVar4 + 0xcf0) != 100) & 2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 0x10,0,0,0,0,0xfffffffe,unaff_EBP + -0x38,unaff_EBP + -0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xcc8),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcb4),1);
  iVar4 = *(int *)(iVar4 + 0xcc8);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcc8);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcc4),1);
  iVar4 = *(int *)(iVar4 + 0xcc8);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcc8);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(iVar4 + 0xcc8) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(iVar4 + 0xcc8);
  iVar6 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffff);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar5,&DAT_00963df8);
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 2;
  do {
    FUN_00445bae(0x6e,unaff_EBP + 0x13);
    piVar5 = (int *)(unaff_EBP + 0xc);
    *piVar5 = *piVar5 + -1;
  } while (*piVar5 != 0);
  FUN_004031b7(-(*(int *)(iVar4 + 0xcf0) != 100) & 2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 0x10,0,0,0,0,0xffffffff,unaff_EBP + -0x38,unaff_EBP + -0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xcd0),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcac),1);
  iVar4 = *(int *)(iVar4 + 0xcd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcd0);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  FUN_0040ee87(*(undefined4 *)(iVar4 + 0xcc4),1);
  iVar4 = *(int *)(iVar4 + 0xcd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xcd0);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uVar15 = 0xffffff;
  FUN_00424e27(0xffffff);
  FUN_00444e05(uVar15);
  FUN_004295f1(-(*(int *)(iVar1 + 0xcf0) != 100) & 2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_004295f1(0,3);
  iVar4 = unaff_EBP + -0x28;
  iVar6 = unaff_EBP + -0x38;
  uVar13 = 3;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar15 = 0;
  iVar9 = unaff_EBP + 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_004458c1(iVar9,0,0,0,0,3,iVar6,iVar4);
  puVar3 = (undefined4 *)FUN_0042a39f(iVar9,uVar15,uVar10,uVar11,uVar12,uVar13,iVar6,iVar4);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar1 + 0xccc),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0043f060(*(undefined4 *)(iVar1 + 0xcac),1);
  iVar4 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00424e27(iVar4);
  FUN_00429607(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0043f060(*(undefined4 *)(iVar1 + 0xcc4),1);
  iVar4 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00424e27(iVar4);
  FUN_00444e29(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  uVar15 = 0xffffff;
  FUN_00424e27(0xffffff);
  FUN_00444e05(uVar15);
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_004295f1(0,3);
  iVar4 = unaff_EBP + -0x28;
  iVar6 = unaff_EBP + -0x38;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar15 = 0;
  iVar9 = unaff_EBP + 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_004458c1(iVar9,0,0,0,0,0,iVar6,iVar4);
  puVar3 = (undefined4 *)FUN_0042a39f(iVar9,uVar15,uVar10,uVar11,uVar12,uVar13,iVar6,iVar4);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar1 + 0xcd4),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0043f060(*(undefined4 *)(iVar1 + 0xcc4),1);
  iVar4 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_00424e27(iVar4);
  FUN_00444e29(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00424aee(&DAT_00980690);
  iVar4 = unaff_EBP + -0x38;
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar15 = 0;
  iVar6 = iVar1 + 0xcec;
  puVar3 = (undefined4 *)(iVar1 + 0xce8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  puVar8 = puVar3;
  FUN_00424df4(puVar3,iVar6,0,0,0,0,0,0,iVar4);
  FUN_00441575(puVar8,iVar6,uVar15,uVar10,uVar11,uVar12,uVar13,uVar14,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(iVar1 + 0xce0) = *puVar3;
  *(undefined4 *)(iVar1 + 0xce4) = *(undefined4 *)(iVar1 + 0xcec);
  FUN_004125d9();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


