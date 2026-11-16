/* FUN_5181266c - 0x5181266c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5181266c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0x80004003;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar3 + 0x1c);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar1;
    FUN_518017b5();
    piVar4 = *(int **)(iVar3 + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *piVar2 = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      piVar2 = (int *)(iVar3 + 0x20);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      uVar5 = 0x80040209;
    }
    else {
      (**(code **)(*piVar4 + 4))(piVar4);
      piVar2 = (int *)(iVar3 + 0x20);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      uVar5 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


