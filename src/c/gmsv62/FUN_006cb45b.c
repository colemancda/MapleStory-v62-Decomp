/* FUN_006cb45b - 0x006cb45b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006cb45b(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  
  FUN_00879bb8();
  iStack_98 = unaff_EBP + -0x10;
  iStack_9c = 0x6cb47b;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  iStack_98 = 0x6cb48a;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xdc),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_98 = 0x6cb499;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_98 = unaff_EBP + -0x10;
  iStack_9c = 0x6cb4a4;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  iStack_98 = 0x6cb4b3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe4),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_98 = 0x6cb4c0;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_98 = unaff_EBP + -0x10;
  iStack_9c = 0x6cb4ca;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  iStack_98 = 0x6cb4d9;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe0),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_98 = 0x6cb4e6;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_98 = 0x6cb4f4;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_98 = 0x6cb500;
  FUN_00403191();
  iStack_98 = 0;
  iStack_9c = unaff_EBP + -0x48;
  iStack_a0 = unaff_EBP + -0x38;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_a4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_a4,0xb3c);
  iVar3 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_9c = 0x6cb54f;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_98 = 0x6cb561;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_98 = 0x6cb572;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_98 = 0x6cb582;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_98 = 0x6cb58d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_98 = 0x6cb59a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_98 = 0x6cb5a5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_98 = 0x6cb5b2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_98 = 0x6cb5bd;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_98 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_9c = 0x6cb5e4;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_98 = 0x6cb5f1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iStack_98 = 0x6cb60d;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_98 = 0x6cb630;
  FUN_00450382();
  iStack_98 = 0;
  iStack_9c = 0x11d;
  iStack_a0 = 6;
  uStack_a4 = 2000;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))(extraout_ECX);
  if (*(int *)(extraout_ECX + 0xe8) == 0) {
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xb4b);
    uVar2 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00499493(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  else {
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xb4c);
    uVar2 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00499493(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_00402676();
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0xb3e);
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
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))
            (extraout_ECX,0x7d1,0x38,0x11d,0,unaff_EBP + -0x28);
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xb4d);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00499493(uVar2,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0xb3f);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))
            (extraout_ECX,1,0x78,0x11d,0,unaff_EBP + -0x28);
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xb4e);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00499493(uVar2,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))(extraout_ECX,2,0x9c,6,0,unaff_EBP + -0x28);
  if (*(int *)(extraout_ECX + 0xe8) != 0) {
    iVar3 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004abf25();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0048b9e9(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0x20))(extraout_ECX,3000,1,3,0x9b,0x50,0x62,0);
    *(undefined4 *)(*(int *)(extraout_ECX + 0xa4) + 0x34) = 0xa5;
    FUN_004ad003(6);
  }
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  *(undefined4 *)(unaff_EBP + -100) = 0xff000000;
  uVar2 = FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00402f41(uVar2);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0xc;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 8))
            (extraout_ECX,1000,0x22,0xfa,0x78,0xd,unaff_EBP + -0x80);
  iVar3 = FUN_00455c59(unaff_EBP + -0x18);
  iVar3 = *(int *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  iVar4 = iVar3 + 0x4c7;
  if (*(int *)(extraout_ECX + 0xe8) == 0) {
    iVar4 = iVar3 + 0x4b3;
  }
  iVar3 = (-(uint)(*(int *)(extraout_ECX + 0xe8) != 0) & 5) + 5;
  piVar5 = (int *)(extraout_ECX + 0xb0);
  FUN_00879c20(piVar5,iVar4,iVar3 * 4);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*piVar5 != 999999999) {
      *(int *)(extraout_ECX + 0xac) = *(int *)(extraout_ECX + 0xac) + 1;
    }
    piVar5 = piVar5 + 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


