/* FUN_5140847d - 0x5140847d in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_5140847d(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar1 = 0x80004003;
  }
  else if ((*(int *)(unaff_EBP + 0x10) == 0) || (*(int *)(unaff_EBP + 0x14) == 0)) {
    uVar1 = 0x80070057;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar2 = (undefined4 *)FUN_51409f77();
    *(undefined4 **)(unaff_EBP + -0x14) = puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (puVar2 == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_5140857f(puVar2);
    }
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,*(IBinding **)(unaff_EBP + 0xc))
    ;
    if (*(int *)this == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar4 = FUN_51405cd9(*(int **)this);
    *(int **)(iVar3 + 0xc) = piVar4;
    if (*(int *)this == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar4 = FUN_51405d00(*(int **)this);
    *(int **)(iVar3 + 0x10) = piVar4;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(unaff_EBP + 0x18);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(unaff_EBP + 0x1c);
    FUN_514072cf();
    FUN_5140833b();
    uVar1 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


