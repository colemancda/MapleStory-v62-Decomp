/* FUN_005f9a41 - 0x005f9a41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f9a41(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0049f842();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xffe9eff4;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xff000000;
  puVar2 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x44) = *puVar2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 2;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 2;
  *(undefined4 *)(unaff_EBP + -0x4c) = 2;
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e196(uVar4);
  piVar1 = *(int **)(extraout_ECX + 0x1bc);
  *(undefined4 *)(unaff_EBP + -0x28) = 0x100;
  (**(code **)(*piVar1 + 8))(extraout_ECX,0x3ed,0x1ff,0x176,0xd2,0xf,unaff_EBP + -0x58);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x1bc));
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x626);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x194) + 0x20))
            (extraout_ECX,0x3e9,0x271,0xf3,0,unaff_EBP + -0x20);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x627);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x19c) + 0x20))
            (extraout_ECX,0x3ee,0x271,0xf3,0,unaff_EBP + -0x20);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x628);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x184) + 0x20))
            (extraout_ECX,0x3ea,0x1ca,0x193,0,unaff_EBP + -0x20);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x629);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x18c) + 0x20))
            (extraout_ECX,0x3eb,0x19a,0x193,0,unaff_EBP + -0x20);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x62a);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x1ac) + 0x20))
            (extraout_ECX,0x3ef,0x227,0x3f,0,unaff_EBP + -0x20);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x62c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x1b4) + 0x20))
            (extraout_ECX,0x3f0,0x1fa,0x193,0,unaff_EBP + -0x20);
  uVar4 = FUN_00679d86(unaff_EBP + -0x10,0x62b);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x1a4) + 0x20))
            (extraout_ECX,0x3ec,0x2a7,0x193,0,unaff_EBP + -0x20);
  FUN_005c13f1(0x197,0x11f,0x13e,0x4c,1);
  puVar2 = (undefined4 *)FUN_007d4a9a(unaff_EBP + -0x10,1);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x20c),
             (IBinding *)*puVar2);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1ac) + 4) + 0x24))(0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


