/* FUN_51809bac - 0x51809bac in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51809bac(void)

{
  int *piVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != unaff_EBX) {
    FUN_51813012(unaff_ESI + 0x1c);
    *(int **)(unaff_ESI + 0x20) = unaff_EBX;
  }
  piVar1 = *(int **)(unaff_ESI + 0x14);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (piVar1 != unaff_EBX) {
    FUN_51803161(unaff_ESI + 0x10);
    *(int **)(unaff_ESI + 0x14) = unaff_EBX;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


