/* ptr_004096bb - 0x004096bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_004096bb(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_EDI;
  
  FUN_00412f73();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc),
             *(IBinding **)(unaff_EBP + -0x20));
  FUN_0041179b();
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
  uVar3 = FUN_00414203(unaff_EBP + 0xc);
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uVar3 = (*DAT_0097b704)();
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  piVar2 = *(int **)(unaff_EBP + -0x10);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int **)(iVar1 + 4) = piVar2;
  if (piVar2 != unaff_EDI) {
    InterlockedIncrement(piVar2 + 1);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0x18) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x20) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EDI) {
    FUN_00412f73();
    *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


