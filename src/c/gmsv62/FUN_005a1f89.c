/* FUN_005a1f89 - 0x005a1f89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a1f89(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  int iStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(int **)(unaff_EBP + -0x14) = &iStack_34;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&iStack_34,0x5e0);
  iVar1 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040263d(iVar1);
  iStack_34 = FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = FUN_00412550();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    iStack_34 = 0x5a2001;
    FUN_00878dfb();
  }
  if (iVar1 == 0) {
    FUN_004027eb();
    FUN_00412600();
  }
  else {
    iStack_34 = 0x5a2026;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005a2289();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    FUN_005aa144();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x5a205d;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x18) + 0xc),*(IBinding **)(unaff_EBP + 0xc));
    iStack_34 = *(int *)(unaff_EBP + -0x18);
    *(undefined4 *)(iStack_34 + 0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    *(int **)(unaff_EBP + 0x10) = &iStack_34;
    FUN_00679e4e(&iStack_34,0x5e1);
    iVar1 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0040263d(iVar1);
    iStack_34 = FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uVar3 = FUN_00412550();
    iVar1 = FUN_005a9f94();
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x5a20b8;
    iVar1 = unaff_EBP + -0x2c;
    iVar2 = FUN_00402bc3();
    iStack_34 = iVar1;
    if (iVar2 < 0) {
      iStack_34 = 0x5a20c3;
      FUN_00878dfb();
      iStack_34 = extraout_ECX_00;
    }
    *(int **)(unaff_EBP + 0x10) = &iStack_34;
    FUN_00679e4e(&iStack_34,0x5e3);
    iVar1 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0040263d(iVar1);
    iStack_34 = FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uVar3 = FUN_00412550();
    iVar1 = FUN_005a9f94();
    *(undefined4 *)(iVar1 + 0x1c) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x5a2114;
    iVar1 = unaff_EBP + -0x2c;
    iVar2 = FUN_00402bc3();
    iStack_34 = iVar1;
    if (iVar2 < 0) {
      iStack_34 = 0x5a211f;
      FUN_00878dfb();
      iStack_34 = extraout_ECX_01;
    }
    *(int **)(unaff_EBP + 0x10) = &iStack_34;
    FUN_00679e4e(&iStack_34,0xae7);
    iVar1 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0040263d(iVar1);
    iStack_34 = FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uVar3 = FUN_00412550();
    iVar1 = FUN_005a9f94();
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x5a2170;
    iVar1 = unaff_EBP + -0x2c;
    iVar2 = FUN_00402bc3();
    iStack_34 = iVar1;
    if (iVar2 < 0) {
      iStack_34 = 0x5a217b;
      FUN_00878dfb();
      iStack_34 = extraout_ECX_02;
    }
    *(int **)(unaff_EBP + 0x10) = &iStack_34;
    FUN_00679e4e(&iStack_34,0x652);
    iVar1 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0040263d(iVar1);
    iStack_34 = FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uVar3 = FUN_00412550();
    iVar1 = FUN_005a9f94();
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x5a21cc;
    iVar1 = unaff_EBP + -0x2c;
    iVar2 = FUN_00402bc3();
    iStack_34 = iVar1;
    if (iVar2 < 0) {
      iStack_34 = 0x5a21d7;
      FUN_00878dfb();
      iStack_34 = extraout_ECX_03;
    }
    *(int **)(unaff_EBP + 0x10) = &iStack_34;
    FUN_00679e4e(&iStack_34,0x5e2);
    iVar1 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0040263d(iVar1);
    iStack_34 = FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uVar3 = FUN_00412550();
    iVar1 = FUN_005a9f94();
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x5a2228;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_34 = 0x5a2233;
      FUN_00878dfb();
    }
    iStack_34 = 0x5a2242;
    FUN_005aa096();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_34 = 0x5a2254;
      FUN_005aa1ed();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_34 = 0x5a2267;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      iStack_34 = 0x5a2278;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


