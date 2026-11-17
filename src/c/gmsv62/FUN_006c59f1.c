/* FUN_006c59f1 - 0x006c59f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c59f1(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  int *piStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_88;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x14) = &local_88;
  local_88 = 0;
  FUN_004184ca();
  FUN_0078a024();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  local_88 = 0x94c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_88 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    local_88 = *(int *)(unaff_EBP + 8) + -0xc;
    FUN_00403384();
  }
  local_88 = 0x578;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = 0x6c5a8e;
    local_88 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  local_88 = unaff_EBP + -0x24;
  (**(code **)(**(int **)(extraout_ECX + 0xb60) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb68) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb70) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb78) + 0x20))();
  iStack_ec = 0x6c5c4f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_ec = 0x6c5c5c;
  FUN_00403191();
  iStack_ec = 0;
  iStack_f0 = unaff_EBP + -0x44;
  iStack_f4 = unaff_EBP + -0x34;
  *(int ***)(unaff_EBP + -0x14) = &piStack_f8;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00679e4e(&piStack_f8,0x4e9);
  iVar2 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_f0 = 0x6c5ca5;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iStack_ec = 0x6c5cb7;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_ec = 0x6c5cc8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_ec = 0x6c5cd5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_ec = 0x6c5ce2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_ec = 0x6c5cef;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_ec = 0x6c5cfa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_ec = 0x6c5d07;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_ec = 0x6c5d12;
    FUN_00878dfb();
  }
  iStack_ec = 0x6c5d1b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_ec = 0x6c5d28;
  FUN_00403191();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (bVar6) {
    iStack_ec = 0x6c5d3e;
    FUN_00878dfb();
  }
  iStack_ec = unaff_EBP + -0x44;
  iStack_f0 = 0;
  iStack_f4 = 0x130;
  piStack_f8 = (int *)0x275;
  puVar4 = (undefined4 *)FUN_0042a39f(unaff_EBP + 8,0,0);
  iStack_ec = 0x6c5d71;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb84),
             (IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_ec = 0x6c5d86;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_ec = 0x6c5d91;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_ec = 0x6c5d9e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_ec = 0x6c5da9;
    FUN_00878dfb();
  }
  iStack_ec = 0x6c5db4;
  puVar4 = (undefined4 *)FUN_004489f5();
  iStack_ec = *puVar4;
  iStack_f0 = 0x6c5dc1;
  FUN_0040ee87();
  iVar2 = *(int *)(extraout_ECX + 0xb84);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar2 == 0) {
    iStack_ec = 0x6c5dd3;
    FUN_00878dfb();
  }
  piStack_f8 = *(int **)(extraout_ECX + 0xb84);
  iVar2 = *piStack_f8;
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_f0 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_ec = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + 8) = piStack_f8;
  iVar2 = (**(code **)(iVar2 + 0xfc))();
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  piVar5 = (int *)(extraout_ECX + 0xb84);
  if (*(int *)(extraout_ECX + 0xb84) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar5;
  iVar2 = (**(code **)(*piVar1 + 0xb4))(piVar1,2);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  if (*piVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar5;
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar4,1);
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(extraout_ECX + 0xb84);
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x3af);
  uVar3 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0040381b(uVar3,unaff_EBP + -0x10,0);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + 8) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00403191(&DAT_00980690);
  piVar5 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar5 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 0x2c))
                    (piVar5,0x275,0x130,*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00403191(&DAT_00980690);
  iVar2 = *(int *)(extraout_ECX + 0xb84);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x44,
               unaff_EBP + -0x34,unaff_EBP + -0x54,unaff_EBP + -100,unaff_EBP + -0x74);
  iVar2 = FUN_00402bc3(unaff_EBP + -0x84);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iVar2 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00403191(&DAT_00980690);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  puVar4 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 8,0,0,0x275,0x153,0,unaff_EBP + -0x74,unaff_EBP + -100);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb88),
             (IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar2 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar4,1);
  iVar2 = *(int *)(extraout_ECX + 0xb88);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(extraout_ECX + 0xb88);
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 0xfc))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00412600();
  piVar5 = (int *)(extraout_ECX + 0xb88);
  if (*(int *)(extraout_ECX + 0xb88) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar5;
  iVar2 = (**(code **)(*piVar1 + 0xb4))(piVar1,1);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  if (*piVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar5;
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar4,1);
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(extraout_ECX + 0xb88);
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00412600();
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00403191(&DAT_00980690);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  puVar4 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 8,0,0,0x275,0x153,0,unaff_EBP + -0x74,unaff_EBP + -100);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb8c),
             (IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar2 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar4,1);
  iVar2 = *(int *)(extraout_ECX + 0xb8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(extraout_ECX + 0xb8c);
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 0xfc))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00412600();
  piVar5 = (int *)(extraout_ECX + 0xb8c);
  if (*(int *)(extraout_ECX + 0xb8c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar5;
  iVar2 = (**(code **)(*piVar1 + 0xb4))(piVar1,1);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  if (*piVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar5;
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar4,1);
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(extraout_ECX + 0xb8c);
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00412600();
  FUN_006c941e();
  FUN_0081622a(0);
  FUN_004031b7(0xfffffffe,3);
  iVar2 = *(int *)(extraout_ECX + 0xb8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x74);
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_006c73a1();
  FUN_006c6f71();
  FUN_006c6b48();
  *(int *)(unaff_EBP + 8) = extraout_ECX;
  FUN_006c97cf(unaff_EBP + 8,0xffffffff);
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


