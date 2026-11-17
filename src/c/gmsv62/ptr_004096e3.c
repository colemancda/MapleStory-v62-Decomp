/* ptr_004096e3 - 0x004096e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_004096e3(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + 0xc) = in_EAX;
  uVar3 = FUN_00414203(unaff_EBP + 0xc,unaff_EBP + -0x14);
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
  iVar4 = FUN_00402bc3(unaff_EBP + -0x84);
  if (iVar4 < (int)unaff_EDI) {
    FUN_00878dfb(iVar4);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar2 != unaff_EDI) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar2 != unaff_EDI) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EDI) {
    FUN_00412f73(unaff_EDI);
    *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


