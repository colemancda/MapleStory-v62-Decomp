/* FUN_00427b38 - 0x00427b38 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00427b38(void)

{
  IBinding *pIVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (undefined4 *)FUN_00435c46();
  pIVar1 = *(IBinding **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar2 + 1),pIVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (pIVar1 != (IBinding *)0x0) {
    (**(code **)(*(int *)pIVar1 + 8))(pIVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


