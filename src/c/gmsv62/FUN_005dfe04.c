/* FUN_005dfe04 - 0x005dfe04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005dfe04(void)

{
  int iVar1;
  uint uVar2;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined1 *extraout_ECX;
  undefined1 *puVar3;
  int unaff_EBP;
  uint uVar4;
  undefined1 *puStack_8c;
  uint uStack_88;
  undefined1 *puStack_84;
  undefined4 uStack_80;
  
  FUN_00879bb8();
  uStack_80 = 0x5dfe24;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_80 = 0x5dfe32;
  FUN_00403191();
  uStack_80 = 0;
  puStack_84 = (undefined1 *)(unaff_EBP + -0x48);
  uStack_88 = unaff_EBP + -0x38;
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_8c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_8c,0x9e7);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_84 = (undefined1 *)0x5dfe7e;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    uStack_80 = 0x5dfe94;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      uStack_80 = 0x5dfea5;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_80 = 0x5dfeb2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    uStack_80 = 0x5dfebd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_80 = 0x5dfeca;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    uStack_80 = 0x5dfed5;
    FUN_00878dfb();
  }
  puVar3 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_80 = 0x5dfee2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    uStack_80 = 0x5dfeed;
    FUN_00878dfb();
    puVar3 = extraout_ECX;
  }
  uStack_80 = 0;
  puStack_8c = (undefined1 *)&puStack_84;
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_84;
  uStack_88 = 0x916;
  puStack_84 = puVar3;
  FUN_00679e4e();
  uStack_88 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_8c = (undefined1 *)0x5dff12;
  FUN_0040263d();
  puStack_8c = (undefined1 *)0x5dff19;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_84 = (undefined1 *)0x5dff24;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    uStack_80 = 0x5dff3a;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      uStack_80 = 0x5dff4b;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_80 = 0x5dff58;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    uStack_80 = 0x5dff63;
    FUN_00878dfb();
  }
  uVar4 = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      uStack_80 = 0x5dff74;
      FUN_00878dfb();
    }
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= uVar4) break;
    FUN_0087a1b0();
    uStack_80 = 0;
    puStack_8c = (undefined1 *)0x5dff97;
    uStack_88 = uVar4;
    puStack_84 = &stack0xffffff88;
    uStack_88 = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_84;
    puStack_8c = (undefined1 *)0x5dffa3;
    FUN_004033a1();
    uStack_88 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_8c = (undefined1 *)0x5dffb3;
    FUN_0040263d();
    puStack_8c = (undefined1 *)0x5dffba;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_84 = (undefined1 *)0x5dffc5;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      uStack_80 = 0x5dffdb;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        uStack_80 = 0x5dffec;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_80 = 0x5dfff9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      uStack_80 = 0x5e0004;
      FUN_00878dfb();
    }
    uStack_80 = 0x5e0011;
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bcfb();
    uStack_80 = 0x5e001b;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (this,*(IBinding **)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      uStack_80 = 0x5e002c;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    uVar4 = uVar4 + 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    uStack_80 = 0x5e0043;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    uStack_80 = 0x5e0054;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


