/* FUN_004286a5 - 0x004286a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004286a5(void)

{
  int *piVar1;
  int iVar2;
  IBinding *pIVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  iStack_50 = 0x4286c3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = 0x4286d2;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_50 = 0x4286de;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_50 = 0x4286e8;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  puStack_5c = &DAT_00980690;
  iStack_54 = 0x4286f2;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_50 = 0x428700;
    FUN_00878dfb();
    puStack_5c = extraout_ECX;
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar4 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_54 = 0x428742;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 != 0) {
    iStack_50 = 0x428758;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_50 = 0x428769;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_50 = 0x428776;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x428781;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_50 = 0x42878e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x428799;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_50 = 0x4287a6;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x4287b1;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iVar5 = FUN_007d1e08();
    piVar6 = (int *)FUN_00436a20();
    piVar1 = *(int **)(unaff_EBP + 0xc);
    *piVar6 = *piVar1;
    piVar6[1] = piVar1[1];
    iVar4 = piVar1[2];
    iVar2 = *piVar1;
    piVar6[2] = iVar4 - iVar2;
    piVar6[3] = ((iVar4 - iVar2) * 5) / 6;
    iVar4 = piVar1[3];
    iVar2 = piVar1[1];
    piVar6[4] = iVar4 - iVar2;
    piVar6[8] = iVar5;
    piVar6[5] = ((iVar4 - iVar2) * 5) / 6;
    piVar6[6] = *(int *)(unaff_EBP + 0x10);
    piVar6[7] = *(int *)(unaff_EBP + 0x14);
    piVar6[9] = iVar5 + *(int *)(unaff_EBP + 0x1c);
    pIVar3 = *(IBinding **)(unaff_EBP + -0x10);
    *(IBinding **)(unaff_EBP + 8) = pIVar3;
    if (pIVar3 != (IBinding *)0x0) {
      iStack_50 = 0x42882a;
      (**(code **)(*(int *)pIVar3 + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (pIVar3 != (IBinding *)0x0) {
      iStack_50 = 0x42883c;
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004355c6();
      iStack_50 = 0x428844;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (pIVar3 != (IBinding *)0x0) {
      iStack_50 = 0x428852;
      (**(code **)(*(int *)pIVar3 + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_50 = 0x428863;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


