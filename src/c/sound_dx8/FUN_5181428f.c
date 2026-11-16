/* FUN_5181428f - 0x5181428f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5181428f(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iVar1 = unaff_ESI[0x1f];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 != 0) {
    FUN_51813012((int)(unaff_ESI + 0x1e));
    unaff_ESI[0x1f] = 0;
  }
  piVar2 = (int *)unaff_ESI[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)unaff_ESI[0x1c];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)unaff_ESI[0x1b];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)unaff_ESI[0x1a];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)unaff_ESI[0x19];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)unaff_ESI[0x18];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51814de6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180cb4a(unaff_ESI);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


