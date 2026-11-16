/* FUN_50403ac0 - 0x50403ac0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50403ac0(void)

{
  int *piVar1;
  IBinding *pIVar2;
  int iVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x2c);
  FUN_50401895();
  pIVar2 = *(IBinding **)(extraout_ECX + 100);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX + 100;
  if (pIVar2 != (IBinding *)0x0) {
    iVar3 = *(int *)pIVar2;
    *(IBinding **)(unaff_EBP + -0x18) = pIVar2;
    (**(code **)(iVar3 + 4))(pIVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
           FUN_5040559f(*(void **)(unaff_EBP + 8));
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (pIVar2 != (IBinding *)0x0) {
      (**(code **)(*(int *)pIVar2 + 8))(pIVar2);
    }
  }
  FUN_504078fe((int *)(extraout_ECX + 0x68),(int *)0x0);
  FUN_504078fe(*(int **)(unaff_EBP + -0x10),(int *)0x0);
  piVar1 = (int *)(extraout_ECX + 0x30);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x2c) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


