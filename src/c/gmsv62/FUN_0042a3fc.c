/* FUN_0042a3fc - 0x0042a3fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042a3fc(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  undefined *puStack_ac;
  int *piStack_a8;
  IBinding *pIVar6;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    pIVar6 = *(IBinding **)(extraout_ECX + 0x15c);
  }
  else {
    if (*(int *)(unaff_EBP + 0x10) != 2) goto LAB_0042a9f1;
    pIVar6 = *(IBinding **)(extraout_ECX + 0x16c);
  }
  piStack_a8 = (int *)0x42a43f;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),pIVar6);
  piStack_a8 = (int *)0x0;
  *(undefined ***)(unaff_EBP + -0x80) = &puStack_ac;
  FUN_00679e4e(&puStack_ac,0x3d4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = unaff_EBP + -0x28;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_ac = (undefined *)0x42a479;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_a8 = (int *)0x42a48f;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_a8 = (int *)0x42a4a0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_a8 = (int *)0x42a4ad;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_a8 = (int *)0x42a4b8;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)0x42a4c9;
  FUN_00403191();
  piStack_a8 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_ac = (undefined *)0x42a4db;
  FUN_004031b7();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (bVar5) {
    piStack_a8 = (int *)0x42a4f1;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)(unaff_EBP + -0xa0);
  puStack_ac = (undefined *)0x0;
  FUN_0042a39f(unaff_EBP + 0x10,0,0,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_a8 = (int *)0x42a523;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_a8 = (int *)0x42a52e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_a8 = (int *)0x42a53e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_a8 = (int *)0x42a549;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    piStack_a8 = (int *)0x42a558;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 0x10);
  puStack_ac = (undefined *)0x42a569;
  piStack_a8 = piVar3;
  iVar1 = (**(code **)(*piVar3 + 0xb4))();
  if (iVar1 < 0) {
    puStack_ac = &DAT_00963df8;
    FUN_00878e09(iVar1,piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + 0x10);
  if (piVar3 == (int *)0x0) {
    puStack_ac = (undefined *)0x80004003;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 0x10);
  }
  iVar1 = *piVar3;
  puStack_ac = (undefined *)0xffffffff;
  *(int **)(unaff_EBP + -0x14) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0xe0))(piVar3);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0040e48b();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8) - iVar1 / 2;
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 0xc) - iVar2;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004031b7(400,3);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x7c,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x4c,
               unaff_EBP + -0x6c,unaff_EBP + -0x5c,unaff_EBP + -0x38,unaff_EBP + -0x28);
  iVar1 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004031b7(0,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004031b7(600,3);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x7c,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x28,
               unaff_EBP + -0x38,unaff_EBP + -0x5c,unaff_EBP + -0x6c,unaff_EBP + -0x4c);
  iVar1 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00403191(&DAT_00980690);
  piVar3 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + 0x10);
  }
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + 0xc) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0042a378();
  FUN_004031b7(iVar1 + 1000,3);
  piVar3 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + 0x10);
  }
  iVar1 = *piVar3;
  *(int **)(unaff_EBP + 0xc) = piVar3;
  puVar4 = (undefined *)
           (**(code **)(iVar1 + 0x90))
                     (piVar3,*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 8) + -0x1e,
                      *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                      *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                      *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                      *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if ((int)puVar4 < 0) {
    piStack_a8 = *(int **)(unaff_EBP + 0xc);
    puStack_ac = puVar4;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_a8 = (int *)0x42a93b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_a8 = (int *)0x42a946;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_a8 = (int *)0x42a953;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_a8 = (int *)0x42a95e;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)0x42a967;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_a8 = (int *)0x42a974;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    piStack_a8 = (int *)0x42a988;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)(unaff_EBP + -0x28);
  puStack_ac = (undefined *)0x0;
  FUN_00425139();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_a8 = (int *)0x42a9a7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_a8 = (int *)0x42a9b2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_a8 = (int *)0x42a9bf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_a8 = (int *)0x42a9ca;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)(unaff_EBP + 0x10);
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff5c;
  puStack_ac = (undefined *)0x42a9d9;
  FUN_0041160e();
  piStack_a8 = (int *)0x42a9e1;
  FUN_00427af9();
  FUN_00412600();
  FUN_004125e6();
LAB_0042a9f1:
  FUN_004027eb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


