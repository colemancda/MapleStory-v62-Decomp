/* FUN_5180b28e - 0x5180b28e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * FUN_5180b28e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = (undefined4 *)(extraout_ECX + 4);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_518017b5();
  piVar3 = *(int **)(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(unaff_EBP + 8);
    *piVar2 = (int)piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    piVar3 = (int *)(extraout_ECX + 8);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return piVar2;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar3 = (int *)(extraout_ECX + 8);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *puVar1 = 0;
  }
  piVar3 = (int *)FUN_51804005();
  return piVar3;
}


