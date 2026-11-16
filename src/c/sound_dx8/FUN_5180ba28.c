/* FUN_5180ba28 - 0x5180ba28 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180ba28(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  piVar1 = *(int **)(unaff_ESI + 0x68);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (piVar1 != unaff_EBX) {
    uVar2 = *(undefined4 *)(unaff_ESI + 0x68);
    *(int **)(unaff_ESI + 0x68) = unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  }
  piVar1 = unaff_EDI + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *unaff_EDI = unaff_EBX;
  }
  if (*(int **)(unaff_ESI + 100) != unaff_EBX) {
    piVar1 = *(int **)(unaff_ESI + 100);
    *(int **)(unaff_ESI + 100) = unaff_EBX;
    *(int **)(unaff_EBP + -0x1c) = piVar1;
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    (**(code **)(iVar3 + 4))(piVar1);
    *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
      FUN_51803161(unaff_EBP + -0x20);
      *(int **)(unaff_EBP + -0x1c) = unaff_EBX;
    }
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


