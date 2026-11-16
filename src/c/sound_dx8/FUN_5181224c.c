/* FUN_5181224c - 0x5181224c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5181224c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_5180ea30();
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0x80004003;
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 **)(unaff_EBP + 0xc) = (undefined4 *)(iVar2 + 0x20);
    FUN_518017b5();
    piVar3 = *(int **)(iVar2 + 0x4c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *piVar1 = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    piVar1 = (int *)(iVar2 + 0x24);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    uVar4 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


