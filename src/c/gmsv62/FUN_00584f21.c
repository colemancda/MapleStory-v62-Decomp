/* FUN_00584f21 - 0x00584f21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00584f21(void)

{
  IBinding *pIVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int *piStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  FUN_00879bb8();
  uStack_64 = 0x28;
  uStack_68 = 0x41;
  iStack_6c = unaff_EBP + -0x14;
  uStack_70 = 0x584f43;
  puVar2 = (undefined4 *)FUN_005828e1();
  pIVar1 = (IBinding *)*puVar2;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5b8);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18) = this;
  uStack_64 = 0x584f55;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar1);
  FUN_00412600();
  uStack_64 = 0x584f6b;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x584f77;
  FUN_00403191();
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    uStack_64 = 0x584f89;
    FUN_00878dfb();
  }
  piStack_88 = *(int **)this;
  iStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
  iVar3 = *piStack_88;
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_80 = 100;
  uStack_74 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_84 = 0x82;
  *(int **)(unaff_EBP + -0x14) = piStack_88;
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x20);
  piStack_8c = (int *)0x584fb6;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    piStack_8c = (int *)&DAT_00963de8;
    iStack_90 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_98 = 0x584fc8;
    iStack_94 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_8c = (int *)(unaff_EBP + -0x2c);
  iStack_90 = 0x584fd5;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x584fe0;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_8c = (int *)(unaff_EBP + -0x3c);
  iStack_90 = 0x584fed;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x584ff8;
    FUN_00878dfb();
  }
  piStack_8c = (int *)0x3;
  iStack_90 = 0;
  iStack_94 = 0x585004;
  FUN_004031b7();
  iVar3 = **(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    piStack_8c = (int *)0x80004003;
    iStack_90 = 0x58501d;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x3c);
  iStack_90 = unaff_EBP + -0x10;
  iStack_94 = 0x58502c;
  FUN_00425067();
  piStack_8c = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_90 = 0x585039;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x585044;
    FUN_00878dfb();
  }
  piStack_8c = &DAT_00980690;
  iStack_90 = 0x58504d;
  FUN_00403191();
  piStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_90 = 0x58505a;
  FUN_00403191();
  piStack_8c = (int *)(unaff_EBP + -0x4c);
  iStack_90 = unaff_EBP + -0x2c;
  iStack_98 = unaff_EBP + -0x18;
  iStack_94 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_94 = 0x58507e;
  iStack_94 = FUN_00449749();
  *(int **)(unaff_EBP + -0x1c) = &iStack_98;
  FUN_00679e4e(&iStack_98,0x1094);
  uVar5 = 7;
  uVar4 = 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004115d9(0xc,7);
  FUN_00448e3a(uVar4,uVar5);
  piStack_8c = (int *)0x5850b6;
  FUN_004497b5();
  piStack_8c = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_90 = 0x5850c3;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x5850ce;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_90 = 0x5850db;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x5850e6;
    FUN_00878dfb();
  }
  piStack_8c = &DAT_00980690;
  iStack_90 = 0x5850ef;
  FUN_00403191();
  piStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_90 = 0x5850fc;
  FUN_00403191();
  piStack_8c = (int *)(unaff_EBP + -0x5c);
  iStack_90 = unaff_EBP + -0x4c;
  iStack_98 = unaff_EBP + -0x1c;
  iStack_94 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_94 = 0x585120;
  iStack_94 = FUN_00449749();
  *(int **)(unaff_EBP + -0x18) = &iStack_98;
  FUN_00679e4e(&iStack_98,0x1095);
  uVar5 = 0x16;
  uVar4 = 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004115d9(0xc,0x16);
  FUN_00448e3a(uVar4,uVar5);
  piStack_8c = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piStack_8c != (int *)0x0) {
    iStack_90 = 0x58515c;
    (**(code **)(*piStack_8c + 8))();
  }
  piStack_8c = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_90 = 0x585169;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x585174;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_90 = 0x585181;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x58518c;
    FUN_00878dfb();
  }
  piStack_8c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_8c != (int *)0x0) {
    iStack_90 = 0x58519d;
    (**(code **)(*piStack_8c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


