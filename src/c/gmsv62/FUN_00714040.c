/* FUN_00714040 - 0x00714040 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00714040(void)

{
  int iVar1;
  IBinding *pIVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 local_64;
  int iStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  iStack_5c = 0;
  *(undefined4 *)(extraout_ECX + 0x8c) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x88) = 0xffffffff;
  iStack_60 = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &local_64;
  FUN_00679e4e();
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_5c = 0x9d1;
  iStack_60 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  local_64 = 0x7140a2;
  iStack_5c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_60 = 0x7140af;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_5c = *(int *)(unaff_EBP + -0x10) + -0xc;
    iStack_60 = 0x7140c3;
    FUN_00403384();
  }
  iStack_5c = 0x578;
  iStack_60 = 0x7140d3;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_5c = 0;
  }
  else {
    iStack_5c = 0x7140e5;
    iStack_5c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x7140f6;
  iVar1 = FUN_00450382();
  iStack_5c = unaff_EBP + -0x28;
  iStack_60 = 1;
  local_64 = 7;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  iStack_c0 = 0x7142aa;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_c0 = 0x7142b7;
  FUN_00403191();
  iStack_c0 = 0;
  iStack_c4 = unaff_EBP + -0x48;
  iStack_c8 = unaff_EBP + -0x38;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00679e4e(&uStack_cc,0xdfa);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_c4 = 0x714300;
  pIVar2 = (IBinding *)FUN_004032b4();
  iStack_c0 = 0x71430c;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x84),pIVar2);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_c0 = 0x714319;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_c0 = 0x714324;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_c0 = 0x714331;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_c0 = 0x71433c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_c0 = 0x714349;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_c0 = 0x714354;
    FUN_00878dfb();
  }
  iStack_c0 = 0x714363;
  puVar3 = (undefined4 *)FUN_004489f5();
  piVar4 = (int *)*puVar3;
  *(undefined2 *)(unaff_EBP + -0x38) = 0xd;
  *(int **)(unaff_EBP + -0x30) = piVar4;
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_c0 = 0x714378;
  (**(code **)(iVar1 + 4))();
  iStack_c0 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_c4 = 0x714387;
  piVar4 = (int *)FUN_004489f5();
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar1 == 0) {
    iStack_c0 = 0x80004003;
    iStack_c4 = 0x71439b;
    FUN_00878dfb();
  }
  piVar4 = (int *)*piVar4;
  iVar1 = *piVar4;
  uStack_cc = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x10) = piVar4;
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar1 = (**(code **)(iVar1 + 0xfc))(piVar4);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = (**(code **)(*piVar4 + 0xb4))(piVar4,0xfffffffe);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar4,&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  iVar1 = DAT_00973a94 + 300;
  FUN_0071bc6e();
  FUN_0071b9b4(iVar1);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x1c))(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


