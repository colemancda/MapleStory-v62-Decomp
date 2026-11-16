/* FUN_51803f45 - 0x51803f45 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51803f45(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5181843c;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_518042b8();
  piVar1 = (int *)extraout_ECX[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x21] = &PTR_FUN_51818440;
  FUN_5181070d((int)(extraout_ECX + 0x21));
  iVar2 = extraout_ECX[0x1e];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 != 0) {
    FUN_51813012((int)(extraout_ECX + 0x1d));
    extraout_ECX[0x1e] = 0;
  }
  iVar2 = extraout_ECX[0x1c];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 != 0) {
    FUN_51813012((int)(extraout_ECX + 0x1b));
    extraout_ECX[0x1c] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x16] = &PTR_FUN_51818444;
  FUN_518103e1((int)(extraout_ECX + 0x16));
  iVar2 = extraout_ECX[0x12];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_51813012((int)(extraout_ECX + 0x11));
    extraout_ECX[0x12] = 0;
  }
  piVar1 = (int *)extraout_ECX[3];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


