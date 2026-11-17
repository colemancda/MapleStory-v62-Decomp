/* FUN_00427af9 - 0x00427af9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00427af9(void)

{
  IBinding *pIVar1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_00435abc();
  pIVar1 = *(IBinding **)(unaff_EBP + 8);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (pIVar1 != (IBinding *)0x0) {
    (**(code **)(*(int *)pIVar1 + 8))(pIVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


