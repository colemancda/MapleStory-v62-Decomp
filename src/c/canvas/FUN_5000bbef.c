/* FUN_5000bbef - 0x5000bbef in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000bbef(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_50012d80();
  if (*(undefined4 **)(unaff_EBP + 0x14) == (undefined4 *)0x0) {
    uVar4 = 0x80004003;
  }
  else {
    iVar1 = *(int *)(unaff_EBP + 8);
    **(undefined4 **)(unaff_EBP + 0x14) = 0;
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar1 + 0x20);
    FUN_500024f7();
    uVar2 = *(uint *)(iVar1 + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((((uVar2 != 0) && (*(uint *)(iVar1 + 0x34) != 0)) &&
        (*(int *)(unaff_EBP + 0xc) < *(int *)(iVar1 + 0x28))) &&
       ((int)*(uint *)(unaff_EBP + 0x10) < *(int *)(iVar1 + 0x2c))) {
      piVar3 = *(int **)(*(int *)(iVar1 + 0x40) +
                        ((*(uint *)(unaff_EBP + 0x10) / *(uint *)(iVar1 + 0x34)) *
                         *(int *)(iVar1 + 0x38) + *(uint *)(unaff_EBP + 0xc) / uVar2) * 4);
      **(int **)(unaff_EBP + 0x14) = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
    piVar3 = (int *)(iVar1 + 0x24);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    uVar4 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


