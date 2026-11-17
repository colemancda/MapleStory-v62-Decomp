/* FUN_00412348 - 0x00412348 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00412348(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  IBinding *pIVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBP;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  
  FUN_00879bb8();
  uStack_54 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_58 = 0x412367;
  piVar3 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + 0xc) = piVar3;
  if (piVar3 != (int *)0x0) {
    uStack_54 = 0x412374;
    (**(code **)(*piVar3 + 4))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    piVar3 = *(int **)(unaff_EBP + 8);
    *piVar3 = 0;
    FUN_004125bf();
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    piVar6 = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    uStack_54 = 0x4123a5;
    FUN_00413563();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_54 = 0x4123b2;
    cVar2 = FUN_0041260d();
    if (cVar2 == '\0') {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        uStack_54 = 0x4123c9;
        FUN_00878dfb();
      }
      uStack_54 = 0x4123d5;
      FUN_004124de();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_54 = 0x4123e7;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_54 = 0x4123f4;
      FUN_00403191();
      uStack_54 = 0;
      iStack_58 = unaff_EBP + -0x3c;
      iStack_5c = unaff_EBP + -0x2c;
      *(undefined1 **)(unaff_EBP + -0x1c) = auStack_60;
      FUN_004059fd(unaff_EBP + -0x14);
      iVar5 = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00405a1d(iVar5);
      FUN_00402660();
      FUN_00404a02(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_58 = 0x412433;
      pIVar4 = (IBinding *)FUN_004032b4();
      uStack_54 = 0x41243c;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0xc),pIVar4);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_54 = 0x412449;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_54 = 0x412454;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_54 = 0x412461;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_54 = 0x41246c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_54 = 0x412479;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_54 = 0x412484;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
      }
    }
    piVar1 = *(int **)(unaff_EBP + 0xc);
    piVar3 = *(int **)(unaff_EBP + 8);
    *piVar3 = (int)piVar1;
    piVar6 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      uStack_54 = 0x4124a6;
      (**(code **)(*piVar1 + 4))();
      piVar6 = *(int **)(unaff_EBP + 0xc);
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      uStack_54 = 0x4124bd;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      piVar6 = *(int **)(unaff_EBP + 0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  if (piVar6 != (int *)0x0) {
    uStack_54 = 0x4124cd;
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar3;
}


