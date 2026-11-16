/* FUN_50806ab4 - 0x50806ab4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * FUN_50806ab4(void)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = (undefined4 *)(extraout_ECX + 4);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  FUN_508012a1();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar3 = (undefined4 *)(extraout_ECX + 0x10);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar3 = (undefined4 *)(extraout_ECX + 0xc);
  }
  this = (void *)*puVar3;
  if (this == (void *)0x0) {
    piVar6 = *(int **)(unaff_EBP + 8);
    *piVar6 = 0;
    piVar5 = (int *)(extraout_ECX + 8);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar4 = FUN_50804243(this,unaff_EBP + 0xc);
    if (iVar4 < 0) {
      if (iVar4 != -0x7fffbffd) {
        FUN_5080450d((void *)(unaff_EBP + -0x24),iVar4,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x24),(ThrowInfo *)&DAT_50819008);
      }
      piVar6 = *(int **)(unaff_EBP + 8);
      *piVar6 = 0;
      piVar5 = *(int **)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      piVar2 = *(int **)(unaff_EBP + 0xc);
      piVar6 = *(int **)(unaff_EBP + 8);
      *piVar6 = (int)piVar2;
      piVar5 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        piVar5 = *(int **)(unaff_EBP + 0xc);
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = (int *)(extraout_ECX + 8);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar6;
}


