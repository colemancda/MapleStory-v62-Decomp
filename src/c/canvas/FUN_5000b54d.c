/* FUN_5000b54d - 0x5000b54d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int * FUN_5000b54d(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = (undefined4 *)(extraout_ECX + 0x20);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_500024f7();
  uVar2 = *(uint *)(extraout_ECX + 0x30);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((uVar2 == 0) || (*(uint *)(extraout_ECX + 0x34) == 0)) ||
      (*(int *)(extraout_ECX + 0x28) <= *(int *)(unaff_EBP + 0xc))) ||
     (*(int *)(extraout_ECX + 0x2c) <= (int)*(uint *)(unaff_EBP + 0x10))) {
    piVar4 = *(int **)(unaff_EBP + 8);
    *piVar4 = 0;
    piVar3 = (int *)(extraout_ECX + 0x24);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    piVar3 = *(int **)(*(int *)(extraout_ECX + 0x40) +
                      ((*(uint *)(unaff_EBP + 0x10) / *(uint *)(extraout_ECX + 0x34)) *
                       *(int *)(extraout_ECX + 0x38) + *(uint *)(unaff_EBP + 0xc) / uVar2) * 4);
    piVar4 = *(int **)(unaff_EBP + 8);
    *piVar4 = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    piVar3 = (int *)(extraout_ECX + 0x24);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar4;
}


