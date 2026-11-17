/* FUN_0080e029 - 0x0080e029 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080e029(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  
  FUN_00879bb8();
  iStack_94 = unaff_EBP + -0x14;
  iStack_98 = 0x80e049;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  iStack_94 = 0x80e058;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd4),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_94 = 0x80e067;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_94 = unaff_EBP + -0x14;
  iStack_98 = 0x80e072;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  iStack_94 = 0x80e081;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xdc),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_94 = 0x80e08e;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_94 = unaff_EBP + -0x14;
  iStack_98 = 0x80e098;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  iStack_94 = 0x80e0a7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd8),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_94 = 0x80e0b4;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_94 = 0x80e0c2;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_94 = 0x80e0ce;
  FUN_00403191();
  iStack_94 = 0;
  iStack_98 = unaff_EBP + -0x44;
  iStack_9c = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_a0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_a0,0x1025);
  iVar3 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_98 = 0x80e11a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  iStack_94 = 0x80e12c;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_94 = 0x80e13d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_94 = 0x80e14a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_94 = 0x80e155;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_94 = 0x80e162;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_94 = 0x80e16d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_94 = 0x80e17a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_94 = 0x80e185;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_94 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_98 = 0x80e1ac;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_94 = 0x80e1b9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iStack_94 = 0x80e1d6;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_94 = 0x80e1f9;
  FUN_00450382();
  iStack_94 = 0;
  iStack_98 = 0x117;
  iStack_9c = 0x6d;
  uStack_a0 = 2000;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))(extraout_ECX);
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0x1027);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))
            (extraout_ECX,0x7d1,0x38,0x117,0,unaff_EBP + -0x24);
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0x1028);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))
            (extraout_ECX,0x7d2,0xa8,0x38,0,unaff_EBP + -0x24);
  iVar3 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0048b9e9(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))(extraout_ECX,3000,1,3,0xc1,0x58,0xb3,0);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x9c) + 0x34) = 0xa5;
  FUN_004ad003(0);
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x68) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xff000000;
  piVar4 = (int *)FUN_00679e4e(unaff_EBP + -0x10,10);
  if (*piVar4 != 0) {
    InterlockedIncrement((LONG *)(*piVar4 + 8));
  }
  FUN_00402fa6();
  *(int *)(unaff_EBP + -0x78) = *piVar4;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0x10;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 8))
            (extraout_ECX,1000,0xd,0x39,0x95,0xd,unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


