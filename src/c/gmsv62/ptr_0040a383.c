/* ptr_0040a383 - 0x0040a383 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall ptr_0040a383(int param_1,IBinding *param_2)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *unaff_EDI;
  undefined4 uStack_4;
  
  while( true ) {
    uStack_4 = 1;
    iVar1 = (**(code **)(param_1 + 0xc))(in_EAX);
    if (iVar1 != 0) break;
    param_2 = (IBinding *)(unaff_EBP + -0x74);
    uStack_4 = 0x40a39e;
    FUN_00405a23();
    *(undefined1 **)(unaff_EBP + -0x44) = &stack0x00000004;
    uStack_4 = 0x40a3af;
    FUN_0040810c();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    uStack_4 = 0x40a3bf;
    FUN_004118a0();
    uStack_4 = 0x40a3c9;
    FUN_0040263d();
    uStack_4 = 0x40a3d0;
    FUN_004048a4();
    param_2 = (IBinding *)0x3b4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    uStack_4 = 0x40a3e7;
    piVar2 = (int *)FUN_00679e4e();
    if ((int *)*piVar2 == unaff_EDI) {
      param_2 = (IBinding *)0x0;
    }
    else {
      param_2 = *(IBinding **)*piVar2;
    }
    uStack_4 = 0x40a407;
    iVar1 = FUN_0087c71f();
    param_2 = (IBinding *)0x40a419;
    FUN_00402fa6();
    if (iVar1 != 0) {
      param_2 = (IBinding *)&DAT_00980690;
      FUN_00403191();
      param_2 = (IBinding *)(unaff_EBP + -0xa4);
      *(undefined4 **)(unaff_EBP + -0x44) = &uStack_4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      uStack_4 = extraout_ECX;
      FUN_004059fd(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_0040263d();
      FUN_00404992();
      param_2 = (IBinding *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      param_2 = (IBinding *)FUN_00402bc3();
      if ((int)param_2 < (int)unaff_EDI) {
        FUN_00878dfb();
      }
    }
    param_2 = (IBinding *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    param_2 = (IBinding *)FUN_00402bc3();
    if ((int)param_2 < (int)unaff_EDI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EDI) {
      param_2 = (IBinding *)0x40a4a5;
      FUN_004030b1();
      *(int **)(unaff_EBP + -0x1c) = unaff_EDI;
    }
    if (*(int **)(unaff_EBP + -0x2c) == unaff_EDI) {
      param_2 = (IBinding *)0x80004003;
      FUN_00878dfb();
    }
    in_EAX = *(int **)(unaff_EBP + -0x2c);
    param_1 = *in_EAX;
    param_2 = (IBinding *)(unaff_EBP + -0x54);
  }
  param_2 = *(IBinding **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (param_2 != (IBinding *)unaff_EDI) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  param_2 = (IBinding *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  param_2 = (IBinding *)FUN_00402bc3();
  if ((int)param_2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int **)(unaff_EBP + -0x34) != unaff_EDI) {
    FUN_00412fcf();
  }
  param_2 = *(IBinding **)(unaff_EBP + -0x20);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc),
             param_2);
  param_2 = (IBinding *)(unaff_EBP + -0x14);
  FUN_00411866();
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
  param_2 = (IBinding *)(unaff_EBP + -0x14);
  uStack_4 = 0x40a521;
  uVar3 = FUN_0041476b();
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  iVar1 = *(int *)(unaff_EBP + -0x10);
  param_2 = (IBinding *)0x40a52d;
  uVar3 = (*DAT_0097b704)();
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  piVar2 = *(int **)(unaff_EBP + -0x10);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int **)(iVar1 + 4) = piVar2;
  if (piVar2 != unaff_EDI) {
    param_2 = (IBinding *)(piVar2 + 1);
    InterlockedIncrement((LONG *)param_2);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  param_2 = (IBinding *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_2 = (IBinding *)FUN_00402bc3();
  if ((int)param_2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  param_2 = *(IBinding **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (param_2 != (IBinding *)unaff_EDI) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  param_2 = *(IBinding **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (param_2 != (IBinding *)unaff_EDI) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EDI) {
    FUN_00412fcf();
    *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  param_2 = (IBinding *)0x40a5e1;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


