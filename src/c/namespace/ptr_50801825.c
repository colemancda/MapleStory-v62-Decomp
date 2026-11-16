/* ptr_50801825 - 0x50801825 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


/* WARNING: Removing unreachable block (ram,0x50801859) */

int * ptr_50801825(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  puVar1 = (undefined4 *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  FUN_508012a1();
  iVar2 = *(int *)(extraout_ECX + 0x44);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    piVar5 = *(int **)(unaff_EBP + 8);
    *piVar5 = 0;
    piVar3 = (int *)(extraout_ECX + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_50804243(*(void **)(extraout_ECX + 0x44),unaff_EBP + -0x10);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    piVar5 = *(int **)(unaff_EBP + 8);
    *piVar5 = (int)piVar3;
    piVar4 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar3 = (int *)(extraout_ECX + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar5;
}


