/* FUN_00698f38 - 0x00698f38 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00698f38(void)

{
  IBinding *pIVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  FUN_00879bb8();
  iStack_a8 = unaff_EBP + -0x1c;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_ac = 0x698f5b;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_a8 = 0x698f6a;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3f8),
             (IBinding *)*puVar3);
  FUN_004497b5();
  iStack_a8 = 0x698f80;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_a8 = 0x698f8e;
  FUN_00403191();
  iStack_a8 = 0;
  iStack_ac = unaff_EBP + -0x50;
  iStack_b0 = unaff_EBP + -0x40;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_b4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_ac = 0x698fd8;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  iStack_a8 = 0x698fea;
  iVar5 = FUN_00404b30();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    iStack_a8 = 0x698ffb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a8 = 0x699008;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_a8 = 0x699013;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_a8 = 0x69901f;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_a8 = 0x69902a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_a8 = 0x699037;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_a8 = 0x699042;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 1;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  iStack_a8 = unaff_EBP + -0x1c;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_ac = 0x69906c;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a8 = 0x699079;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    iStack_a8 = 0x69908d;
    FUN_00403384();
  }
  iStack_a8 = 0x69909d;
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar5 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_a8 = 0x6990c3;
  FUN_00450382();
  iStack_a8 = 0;
  iStack_ac = 0x24;
  iStack_b0 = 0x2d9;
  uStack_b4 = 1000;
  (**(code **)(**(int **)(extraout_ECX + 0x408) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x408) + 4) + 0x1c))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00403384();
  }
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar5 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x410) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x410) + 4) + 0x1c))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00403384();
  }
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar5 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x400) + 0x20))();
  iStack_f8 = 0x699215;
  FUN_00403191();
  iStack_f8 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_fc = 0x699224;
  FUN_004031b7();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (bVar6) {
    iStack_f8 = 0x69923a;
    FUN_00878dfb();
  }
  iStack_f8 = unaff_EBP + -0x50;
  iStack_fc = 1;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18,0,0,0x2ca,0x19d);
  pIVar1 = (IBinding *)*puVar3;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c) =
       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3e0);
  iStack_f8 = 0x69926f;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3e0),pIVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_f8 = 0x699284;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x69928f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_f8 = 0x69929c;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6992a7;
    FUN_00878dfb();
  }
  iStack_f8 = 0x6992b0;
  FUN_00403191();
  iStack_f8 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_fc = 0x6992bf;
  FUN_004031b7();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (bVar6) {
    iStack_f8 = 0x6992d5;
    FUN_00878dfb();
  }
  iStack_f8 = unaff_EBP + -0x50;
  iStack_fc = 1;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18,0,0,0x2b2,0x196);
  iStack_f8 = 0x699307;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 1000),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_f8 = 0x69931c;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699327;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_f8 = 0x699334;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x69933f;
    FUN_00878dfb();
  }
  iStack_f8 = 0x699348;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_f8 = 0x699355;
  FUN_00403191();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (bVar6) {
    iStack_f8 = 0x69936b;
    FUN_00878dfb();
  }
  iStack_f8 = unaff_EBP + -0x50;
  iStack_fc = 3;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18,0,0,0x2b2,0x1a0);
  iStack_f8 = 0x69939d;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3e4),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_f8 = 0x6993b2;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6993bd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_f8 = 0x6993ca;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6993d5;
    FUN_00878dfb();
  }
  iStack_f8 = 0x6993de;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_f8 = 0x6993eb;
  FUN_00403191();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (bVar6) {
    iStack_f8 = 0x699401;
    FUN_00878dfb();
  }
  iStack_f8 = unaff_EBP + -0x50;
  iStack_fc = 2;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18,0,0,0x2b2,0x196);
  iStack_f8 = 0x699433;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3ec),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_f8 = 0x699448;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699453;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_f8 = 0x699460;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x69946b;
    FUN_00878dfb();
  }
  iStack_f8 = 0x699474;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_f8 = 0x699481;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_f8 = 0x69948e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_f8 = 0x69949b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_f8 = 0x6994a8;
  FUN_00403191();
  iStack_f8 = 0;
  *(int **)(unaff_EBP + -0x10) = &iStack_fc;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00679e4e(&iStack_fc,0x734);
  iVar5 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0040263d(iVar5);
  FUN_004048a4(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_fc = 0x6994ec;
  iVar5 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar5 != 0) {
    iStack_f8 = 0x699502;
    iVar5 = FUN_0041a581();
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      iStack_f8 = 0x699513;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x18);
  iVar5 = **(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar5 == 0) {
    iStack_f8 = 0x69952e;
    FUN_00878dfb();
  }
  iStack_f8 = unaff_EBP + -0x80;
  iStack_fc = unaff_EBP + -0x60;
  FUN_004250ac(unaff_EBP + -0x90,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x50,
               unaff_EBP + -0x40);
  iStack_f8 = 0x699562;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x69956d;
    FUN_00878dfb();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_f8 = 0x699585;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699590;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_f8 = 0x69959d;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6995a8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_f8 = 0x6995b5;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6995c0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_f8 = 0x6995cd;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6995d8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_f8 = 0x6995e5;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6995f0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_f8 = 0x6995fd;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699608;
    FUN_00878dfb();
  }
  iStack_f8 = 0x699611;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_f8 = 0x69961e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_f8 = 0x69962b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_f8 = 0x699638;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_f8 = 0x699645;
  FUN_00403191();
  iStack_f8 = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00679e4e(&iStack_fc,0x735);
  iVar5 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_0040263d(iVar5);
  FUN_004048a4(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_fc = 0x699689;
  iVar5 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar5 != 0) {
    iStack_f8 = 0x69969f;
    iVar5 = FUN_0041a581();
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      iStack_f8 = 0x6996b0;
      FUN_00878dfb();
    }
  }
  iVar5 = *(int *)(extraout_ECX + 1000);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x18);
  if (iVar5 == 0) {
    iStack_f8 = 0x6996d2;
    FUN_00878dfb();
  }
  iStack_f8 = unaff_EBP + -0x40;
  iStack_fc = unaff_EBP + -0x50;
  FUN_004250ac(unaff_EBP + -0xa0,*(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x30,
               unaff_EBP + -0x80);
  iStack_f8 = 0x699705;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699710;
    FUN_00878dfb();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_f8 = 0x699728;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699733;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_f8 = 0x699740;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x69974b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_f8 = 0x699758;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699763;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_f8 = 0x699770;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x69977b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_f8 = 0x699788;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x699793;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_f8 = 0x6997a0;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_f8 = 0x6997ab;
    FUN_00878dfb();
  }
  iStack_f8 = 0x6997b6;
  puVar3 = (undefined4 *)FUN_004489f5();
  iStack_f8 = *puVar3;
  iStack_fc = 0x6997c3;
  FUN_0040ee87();
  iVar5 = **(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar5 == 0) {
    iStack_f8 = 0x6997d8;
    FUN_00878dfb();
  }
  iStack_fc = *(int *)(unaff_EBP + -0x2c);
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3e0);
  iVar5 = *piVar2;
  iStack_f8 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 100))(piVar2,*(undefined4 *)(unaff_EBP + -0x30));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  FUN_0040ee87(*(undefined4 *)(iVar5 + 0x3e0),1);
  iVar5 = *(int *)(iVar5 + 1000);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 1000);
  iVar5 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  FUN_0040ee87(*(undefined4 *)(iVar5 + 0x3e0),1);
  iVar5 = *(int *)(iVar5 + 0x3e4);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3e4);
  iVar5 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  FUN_0040ee87(*(undefined4 *)(iVar5 + 0x3e0),1);
  iVar5 = *(int *)(iVar5 + 0x3ec);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3ec);
  iVar5 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x20);
  FUN_0040ee87(*puVar3,1);
  iVar5 = *(int *)(iVar5 + 0x3e0);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3e0);
  iVar5 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  FUN_0040ee87(*(undefined4 *)(iVar5 + 0x3e0),1);
  iVar5 = *(int *)(iVar5 + 1000);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 1000);
  iVar5 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  piVar2 = *(int **)(iVar5 + 0x3e0);
  *(undefined2 *)(unaff_EBP + -0x60) = 0xd;
  *(int **)(unaff_EBP + -0x58) = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar5 = *(int *)(iVar5 + 0x3e4);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3e4);
  iVar5 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  piVar2 = *(int **)(iVar5 + 0x3e0);
  *(undefined2 *)(unaff_EBP + -0x60) = 0xd;
  *(int **)(unaff_EBP + -0x58) = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar5 = *(int *)(iVar5 + 0x3ec);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3ec);
  iVar5 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar5 = (**(code **)(iVar5 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar5 + 0x3e0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(iVar5 + 0x3e0);
  iVar5 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar5 + 1000) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(iVar5 + 1000);
  iVar5 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar5 + 0x3e4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(iVar5 + 0x3e4);
  iVar5 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar5 + 0x3ec) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(iVar5 + 0x3ec);
  iVar5 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
  }
  FUN_0069ad17();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


