/* FUN_5080ef52 - 0x5080ef52 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080ef52(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffea0;
  piVar2 = FUN_5080504c();
  piVar2 = (int *)*piVar2;
  *(int **)(unaff_EBP + -0x20) = piVar2;
  if (piVar2 != (int *)0x0) {
    InterlockedIncrement(piVar2 + 2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    FUN_508040b6(*(int **)(unaff_EBP + -0x18));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_5080d29f(piVar2);
  }
  iVar3 = (*DAT_5081e6d4)(iVar3,unaff_EBP + -0x160);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  if (iVar3 != -1) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    do {
      if (*(char *)(unaff_EBP + -0x134) != '.') {
        FUN_50804f7a();
        puVar1 = (undefined4 *)**(undefined4 **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        (*(code *)*puVar1)(*(undefined4 **)(unaff_EBP + 8),unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x14));
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
      }
      iVar4 = (*DAT_5081e6d8)(iVar3,unaff_EBP + -0x160);
    } while (iVar4 != 0);
    (*DAT_5081e6dc)(iVar3);
  }
  if (piVar2 != (int *)0x0) {
    FUN_508040b6(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


