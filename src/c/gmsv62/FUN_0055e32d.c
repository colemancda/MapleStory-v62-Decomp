/* FUN_0055e32d - 0x0055e32d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0055e32d(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x58) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xff000000;
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196(uVar4);
  piVar2 = *(int **)(extraout_ECX + 0x584);
  iVar3 = *(int *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -0x4c) = 0x3c;
  *(undefined4 *)(unaff_EBP + -0x78) = 2;
  *(undefined4 *)(unaff_EBP + -0x74) = 2;
  (**(code **)(*piVar2 + 8))(extraout_ECX,0x3e9,0x13,iVar3 + -0x56,0xca,0xf,unaff_EBP + -0x7c);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x584));
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 1;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar4 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x58c) + 0x20))
            (extraout_ECX,1,0x97,*(int *)(extraout_ECX + 0x20) + -0x1d,0,unaff_EBP + -0x44);
  uVar4 = FUN_00679d86(unaff_EBP + -0x14,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x594) + 0x20))
            (extraout_ECX,2,0xc1,*(int *)(extraout_ECX + 0x20) + -0x1d,0,unaff_EBP + -0x44);
  FUN_0045621e();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xa0;
  *(undefined4 *)(unaff_EBP + -0x88) = 0xe;
  iVar3 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x57c) + 0x20))
            (extraout_ECX,1000,0xe,*(int *)(extraout_ECX + 0x20) + -0x36,unaff_EBP + -0xa8);
  FUN_00499fb8(1);
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004031b7(0,3);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x14,0x69,0x41,0,0,0,unaff_EBP + -0x34,unaff_EBP + -0x24);
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5a0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
  FUN_0040ee87(*puVar5,1);
  iVar3 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)p_Var1;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00412600();
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar5,1);
  iVar3 = *(int *)(extraout_ECX + 0x5a0);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(extraout_ECX + 0x5a0);
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00412600();
  if (*(int *)(extraout_ECX + 0x5a0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(extraout_ECX + 0x5a0);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004031b7(0,3);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x10,0x29,0x65,0,0,0,unaff_EBP + -0x24,unaff_EBP + -0x34);
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5a4);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  FUN_0040ee87(*puVar5,1);
  iVar3 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)p_Var1;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  piVar2 = (int *)*puVar5;
  *(undefined2 *)(unaff_EBP + -0x34) = 0xd;
  *(int **)(unaff_EBP + -0x2c) = piVar2;
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  (**(code **)(iVar3 + 4))(piVar2);
  iVar3 = *(int *)(extraout_ECX + 0x5a4);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(extraout_ECX + 0x5a4);
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (*(int *)(extraout_ECX + 0x5a4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(extraout_ECX + 0x5a4);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
  }
  FUN_0081622a(0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00457a09();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


