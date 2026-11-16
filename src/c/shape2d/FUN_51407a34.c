/* FUN_51407a34 - 0x51407a34 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51407a34(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  puVar1 = (undefined4 *)(extraout_ECX + 0x14);
  *(undefined4 **)(unaff_EBP + -0x18) = puVar1;
  FUN_5140126a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_51406adc();
  if (iVar3 < 0) {
    piVar2 = (int *)(extraout_ECX + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      *(int *)(extraout_ECX + 0x20) =
           *(int *)(extraout_ECX + 0x20) + (**(int **)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x10))
      ;
    }
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      *(int *)(extraout_ECX + 0x24) =
           *(int *)(extraout_ECX + 0x24) +
           (**(int **)(unaff_EBP + 0xc) - *(int *)(unaff_EBP + -0x14));
    }
    *(undefined4 *)(extraout_ECX + 0x54) = 0;
    piVar2 = (int *)(extraout_ECX + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    iVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


