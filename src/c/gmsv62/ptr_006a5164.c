/* ptr_006a5164 - 0x006a5164 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a5164(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*unaff_ESI + 0x14),
             *(IBinding **)(*unaff_ESI + 4));
  piVar1 = (int *)*unaff_ESI;
  piVar2 = (int *)piVar1[6];
  if (piVar2 != (int *)*piVar1) {
    piVar1[6] = *piVar1;
    FUN_0045e787();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  iVar3 = *unaff_ESI;
  piVar1 = *(int **)(iVar3 + 0x1c);
  if (piVar1 != *(int **)(iVar3 + 4)) {
    *(int **)(iVar3 + 0x1c) = *(int **)(iVar3 + 4);
    FUN_0045e787();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*unaff_ESI + 8),
             *(IBinding **)*unaff_ESI);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*unaff_ESI + 0x24),
             *(IBinding **)(*unaff_ESI + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


