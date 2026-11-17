/* FUN_0080a033 - 0x0080a033 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_0080a033(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x3b1);
  uVar1 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00437222(uVar1,unaff_EBP + -0x10,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  piVar2 = *(int **)(unaff_EBP + -0x10);
  piVar3 = *(int **)(unaff_EBP + 8);
  *piVar3 = (int)piVar2;
  piVar5 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    piVar5 = *(int **)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar3;
}


