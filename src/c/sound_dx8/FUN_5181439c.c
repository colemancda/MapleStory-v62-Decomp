/* FUN_5181439c - 0x5181439c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5181439c(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  piVar1 = *(int **)(unaff_ESI + 0x74);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (piVar1 != unaff_EBX) {
    uVar2 = *(undefined4 *)(unaff_ESI + 0x74);
    *(int **)(unaff_ESI + 0x74) = unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  }
  if (*(int **)(unaff_ESI + 0x60) != unaff_EBX) {
    uVar2 = *(undefined4 *)(unaff_ESI + 0x60);
    *(int **)(unaff_ESI + 0x60) = unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  }
  FUN_51814e57((void *)(unaff_ESI + 100),unaff_EBX);
  FUN_51814e84((void *)(unaff_ESI + 0x68),unaff_EBX);
  FUN_51814eb1((void *)(unaff_ESI + 0x6c),unaff_EBX);
  FUN_51814eeb((void *)(unaff_ESI + 0x70),unaff_EBX);
  piVar1 = unaff_EDI + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *unaff_EDI = unaff_EBX;
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


