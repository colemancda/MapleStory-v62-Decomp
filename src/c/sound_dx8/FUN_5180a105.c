/* FUN_5180a105 - 0x5180a105 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180a105(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (piVar1 == (int *)0x0) {
    FUN_5180a172();
    return;
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  puVar3 = (undefined4 *)piVar2[6];
  *(undefined4 **)(unaff_EBP + 0xc) = puVar3;
  FUN_518017b5();
  iVar4 = piVar2[0xf];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*piVar2 + 0x48))();
  }
  else {
    iVar4 = piVar2[0x10];
  }
  *piVar1 = iVar4;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar3 = 0;
  }
  FUN_5180a172();
  return;
}


