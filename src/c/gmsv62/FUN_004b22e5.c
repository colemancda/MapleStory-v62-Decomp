/* FUN_004b22e5 - 0x004b22e5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b22e5(void)

{
  IBinding *pIVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar3 = (undefined4 *)FUN_004b2a34();
  *puVar3 = 1;
  pIVar1 = *(IBinding **)(unaff_EBP + 8);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar3 + 5),pIVar1);
  puVar4 = (undefined4 *)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar4 = (undefined4 *)(unaff_EBP + 8);
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar3 + 6),(IBinding *)*puVar4);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puVar3[7] = *(undefined4 *)(unaff_EBP + 0x10);
  if (pIVar1 != (IBinding *)0x0) {
    (**(code **)(*(int *)pIVar1 + 8))(pIVar1);
  }
  piVar2 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


