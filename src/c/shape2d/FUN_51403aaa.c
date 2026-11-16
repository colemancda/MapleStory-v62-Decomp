/* FUN_51403aaa - 0x51403aaa in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51403aaa(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5140ad20();
  piVar2 = *(int **)(unaff_EBP + 8);
  *(int **)(unaff_EBP + 8) = piVar2 + 2;
  FUN_5140126a();
  iVar3 = piVar2[10];
  iVar4 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (**(code **)(iVar4 + 0x44))
            (piVar2,*(int *)(unaff_EBP + 0xc) - piVar2[9],*(int *)(unaff_EBP + 0x10) - iVar3);
  piVar1 = piVar2 + 3;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    piVar2[2] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


