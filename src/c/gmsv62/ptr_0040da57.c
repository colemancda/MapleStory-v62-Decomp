/* ptr_0040da57 - 0x0040da57 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_0040da57(void)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EBX;
  int unaff_EBP;
  
  FUN_004033a1(in_EAX);
  iVar2 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  *(int **)(unaff_EBP + -0x14) = unaff_EBX;
  if (piVar1 != unaff_EBX) {
    iVar2 = FUN_00404b30();
    if ((iVar2 < (int)unaff_EBX) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x28) + 0xc),
             *(IBinding **)(unaff_EBP + -0x14));
  FUN_0041600f();
  FUN_00412b9a();
  iVar2 = *(int *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
  uVar3 = FUN_004161ed();
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x28);
  uVar3 = (*DAT_0097b704)();
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  piVar1 = *(int **)(unaff_EBP + -0x28);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int **)(iVar2 + 4) = piVar1;
  if (piVar1 != unaff_EBX) {
    InterlockedIncrement(piVar1 + 1);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
    FUN_00413111();
    *(int **)(unaff_EBP + -0x28) = unaff_EBX;
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


