/* FUN_00432836 - 0x00432836 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00432836(void)

{
  IBinding *pIVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00434cf7();
  pIVar1 = *(IBinding **)(unaff_EBP + 0x10);
  **(undefined4 **)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc),
             pIVar1);
  piVar2 = *(int **)(unaff_EBP + 0xc);
  uVar4 = 0;
  if (*piVar2 != 0) {
    uVar4 = *(undefined4 *)(*piVar2 + -4);
  }
  FUN_004356c4(uVar4,unaff_EBP + 0xb);
  iVar3 = *(int *)(unaff_EBP + -0x10);
  FUN_00426311();
  *(int *)(iVar3 + 8) = *piVar2;
  *piVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00435711(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x1c);
  if (iVar3 != 0) {
    FUN_00435970(*(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4));
  }
  uVar4 = FUN_00435932();
  FUN_00434cc8(unaff_EBP + -0x14);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = uVar4;
  FUN_00435765(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00434da2(0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434da2(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  piVar2 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


