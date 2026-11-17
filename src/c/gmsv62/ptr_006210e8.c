/* ptr_006210e8 - 0x006210e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * ptr_006210e8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  param_1 = 0x6210fa;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  iVar4 = FUN_00404b30();
  if ((iVar4 < (int)unaff_EDI) && (iVar4 != unaff_EBX)) {
    FUN_00878dfb();
  }
  iVar4 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EDI) {
    FUN_00878dfb();
    iVar4 = extraout_ECX;
  }
  *(int **)(unaff_EBP + -0x20) = &param_1;
  param_1 = iVar4;
  FUN_00679e4e(&param_1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  param_1 = 0x621166;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  iVar4 = FUN_00404b30();
  if ((iVar4 < (int)unaff_EDI) && (iVar4 != unaff_EBX)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  piVar1 = (int *)**(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + -0x10)) {
    **(int **)(unaff_EBP + -0x14) = (int)*(int **)(unaff_EBP + -0x10);
    FUN_004125cc();
    if (piVar1 != unaff_EDI) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + -0x14);
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = piVar1;
  if (piVar1 != unaff_EDI) {
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


