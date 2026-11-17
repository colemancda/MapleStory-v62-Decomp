/* FUN_006e5525 - 0x006e5525 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e5525(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  IBinding *pIVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004489f5(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0xab0) = 1;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x24,0x28,0x19,0,0,0,unaff_EBP + -0x34,unaff_EBP + -0x44);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xab4),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
  iVar4 = *(int *)(extraout_ECX + 0xab4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xab4);
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + -0x24) = piVar6;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar6,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xab4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xab4);
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + -0x24) = piVar6;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar6,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xab4);
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xab4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar6;
  iVar4 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*piVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = (int *)*piVar6;
  iVar4 = FUN_004320e3();
  iVar4 = (**(code **)(*piVar6 + 0xb4))(piVar6,iVar4 + 1);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar6,&DAT_00963df8);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x3af);
  uVar13 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040381b(uVar13,unaff_EBP + -0x1c,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x24) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar6 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar6 = *(int **)(unaff_EBP + -0x1c);
  }
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + -0x24) = piVar6;
  iVar4 = (**(code **)(iVar4 + 0x2c))
                    (piVar6,0xae,0x100,*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(*piVar6 + 0x70))(piVar6,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar6,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(*piVar6 + 0x78))(piVar6,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar6,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(unaff_EBP + -0x14);
  iVar5 = *(int *)(iVar4 + 0xab4);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0x44,
               unaff_EBP + -0x34,unaff_EBP + -0x54,unaff_EBP + -100,unaff_EBP + -0x74);
  iVar5 = FUN_00402bc3(unaff_EBP + -0x84);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar5 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(iVar4 + 0xac0) = 1;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x24,0x28,0x19,0,0,0,unaff_EBP + -0x74,unaff_EBP + -100);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xac4),(IBinding *)*puVar3)
  ;
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar5 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
  iVar4 = *(int *)(iVar4 + 0xac4);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xac4);
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + -0x24) = piVar6;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar6,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xac4);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xac4);
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + -0x24) = piVar6;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar6,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xac4);
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xac4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar6;
  iVar4 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*piVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = (int *)*piVar6;
  iVar4 = FUN_004320e3();
  iVar4 = (**(code **)(*piVar6 + 0xb4))(piVar6,iVar4 + 2);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar6,&DAT_00963df8);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x3af);
  uVar13 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0040381b(uVar13,unaff_EBP + -0x18,0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x24) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00403191(&DAT_00980690);
  piVar6 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar6 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar6 = *(int **)(unaff_EBP + -0x18);
  }
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + -0x24) = piVar6;
  iVar4 = (**(code **)(iVar4 + 0x2c))
                    (piVar6,0xae,0x100,*(undefined4 *)(unaff_EBP + -0x74),
                     *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                     *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                     *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar4 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(unaff_EBP + -0x18);
  iVar4 = (**(code **)(*piVar6 + 0x70))(piVar6,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar6,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = *(int **)(unaff_EBP + -0x18);
  iVar4 = (**(code **)(*piVar6 + 0x78))(piVar6,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar6,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(unaff_EBP + -0x14);
  iVar5 = *(int *)(iVar4 + 0xac4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x74,
               unaff_EBP + -100,unaff_EBP + -0x54,unaff_EBP + -0x44,unaff_EBP + -0x34);
  iVar5 = FUN_00402bc3(unaff_EBP + -0x84);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar5 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(iVar4 + 0xab8) = 1;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x24,0xf0,0x14,0,0,0,unaff_EBP + -0x74,unaff_EBP + -100);
  pIVar2 = (IBinding *)*puVar3;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0xabc);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x14) = this;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar4 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = (int *)**(undefined4 **)(unaff_EBP + -0x14);
  iVar4 = *piVar6;
  *(int **)(unaff_EBP + -0x24) = piVar6;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar6,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
  iVar4 = **(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00444e29(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  uVar13 = 0xffffffff;
  FUN_00424e27(0xffffffff);
  FUN_00444e05(uVar13);
  FUN_00424e27();
  iVar4 = FUN_004320e3();
  iVar4 = iVar4 + 2;
  FUN_00424e27(iVar4);
  FUN_006e612a(iVar4);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x3af);
  uVar13 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_0040381b(uVar13,unaff_EBP + -0x20,0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00402676();
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00424aee(&DAT_00980690);
  iVar4 = unaff_EBP + -100;
  iVar5 = unaff_EBP + -0x74;
  uVar11 = 0x122;
  uVar13 = 0xdc;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(0xdc,0x122,iVar5,iVar4);
  FUN_0046ffc6(uVar13,uVar11,iVar5,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar4 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  uVar13 = 0;
  FUN_004115d9(0);
  FUN_006e3d24(uVar13);
  uVar13 = 0;
  FUN_004115d9(0);
  FUN_006e3d45(uVar13);
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00424aee(&DAT_00980690);
  iVar4 = unaff_EBP + -0x34;
  iVar5 = unaff_EBP + -0x44;
  iVar12 = unaff_EBP + -0x54;
  iVar10 = unaff_EBP + -100;
  iVar9 = unaff_EBP + -0x74;
  uVar13 = *(undefined4 *)(unaff_EBP + -0x20);
  iVar8 = unaff_EBP + -0x84;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_00424e27(iVar8,uVar13,iVar9,iVar10,iVar12,iVar5,iVar4);
  FUN_004250ac(iVar8,uVar13,iVar9,iVar10,iVar12,iVar5,iVar4);
  iVar4 = FUN_00402bc3(unaff_EBP + -0x84);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar4 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


