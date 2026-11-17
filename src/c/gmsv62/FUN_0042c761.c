/* FUN_0042c761 - 0x0042c761 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042c761(void)

{
  undefined8 uVar1;
  IBinding *pIVar2;
  undefined4 uVar3;
  int iVar4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_00435f5a();
  pIVar2 = *(IBinding **)(unaff_EBP + 8);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar2);
  FUN_00419192(unaff_EBP + 0x24);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x1c);
  *(undefined8 *)(this + 8) = *(undefined8 *)(unaff_EBP + 0xc);
  uVar1 = *(undefined8 *)(unaff_EBP + 0x14);
  *(undefined4 *)(this + 0x28) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EBP + 0x20);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar3;
  iVar5 = FUN_007d1e08();
  iVar4 = *(int *)(unaff_EBP + 0x28);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(unaff_EBP + 0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(int *)(this + 0x20) = iVar5 + iVar4;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(unaff_EBP + 0x34);
  if (pIVar2 != (IBinding *)0x0) {
    (**(code **)(*(int *)pIVar2 + 8))(pIVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


