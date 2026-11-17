/* ptr_004095cb - 0x004095cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_004095cb(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *unaff_EDI;
  undefined4 uStack_c;
  int iStack_8;
  
  while( true ) {
    if (*(int **)(unaff_EBP + -0x1c) == unaff_EDI) {
      iStack_8 = 0;
    }
    else {
      iStack_8 = **(int **)(unaff_EBP + -0x1c);
    }
    uStack_c = 0x4095df;
    iVar2 = FUN_0087c71f();
    FUN_00402fa6();
    if (iVar2 != 0) {
      iStack_8 = 0x409605;
      FUN_00403191();
      iStack_8 = unaff_EBP + -100;
      *(undefined4 **)(unaff_EBP + -0x44) = &uStack_c;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      uStack_c = extraout_ECX;
      FUN_004059fd(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_0040263d();
      FUN_00404992();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_8 = 0x409646;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EDI) {
        iStack_8 = 0x409651;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_8 = 0x40965e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EDI) {
      iStack_8 = 0x409669;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EDI) {
      FUN_004030b1();
      *(int **)(unaff_EBP + -0x1c) = unaff_EDI;
    }
    if (*(int **)(unaff_EBP + -0x2c) == unaff_EDI) {
      iStack_8 = 0x40954e;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x74;
    uStack_c = 1;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 0xc))(*(int **)(unaff_EBP + -0x2c));
    if (iVar2 != 0) break;
    iStack_8 = unaff_EBP + -0x1c;
    uStack_c = 0x409576;
    FUN_00405a23();
    iStack_8 = unaff_EBP + -0x1c;
    *(undefined1 **)(unaff_EBP + -0x44) = &stack0xfffffffc;
    uStack_c = 0x409587;
    FUN_0040810c();
    iStack_8 = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    uStack_c = 0x409597;
    FUN_004117d5();
    uStack_c = 0x4095a1;
    FUN_0040263d();
    uStack_c = 0x4095a8;
    FUN_004048a4();
    iStack_8 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    uStack_c = 0x4095bf;
    FUN_00679e4e();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int **)(unaff_EBP + -0x2c) != unaff_EDI) {
    iStack_8 = 0x409696;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_8 = 0x4096a3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    iStack_8 = 0x4096ae;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int **)(unaff_EBP + -0x34) != unaff_EDI) {
    iStack_8 = 0x4096c0;
    FUN_00412f73();
  }
  iStack_8 = 0x4096ce;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc),
             *(IBinding **)(unaff_EBP + -0x20));
  iStack_8 = 0x4096dd;
  FUN_0041179b();
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_8 = unaff_EBP + 0xc;
  uStack_c = 0x4096f6;
  uVar3 = FUN_00414203();
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x10);
  uVar3 = (*DAT_0097b704)();
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int **)(iVar2 + 4) = piVar1;
  if (piVar1 != unaff_EDI) {
    iStack_8 = 0x40971c;
    InterlockedIncrement(piVar1 + 1);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_8 = 0x409733;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EDI) {
    iStack_8 = 0x40973e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0x18) != unaff_EDI) {
    iStack_8 = 0x40974f;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x20) != unaff_EDI) {
    iStack_8 = 0x409760;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EDI) {
    iStack_8 = 0x4097a7;
    FUN_00412f73();
    *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


