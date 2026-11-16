/* FUN_51811fdd - 0x51811fdd in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51811fdd(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  extraout_ECX[-3] = &PTR_LAB_51819604;
  extraout_ECX[-2] = &PTR_LAB_518195bc;
  extraout_ECX[-1] = &PTR_LAB_51819590;
  *extraout_ECX = &PTR_FUN_51819588;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = &PTR_LAB_5181958c;
  iVar1 = extraout_ECX[0x11];
  *(undefined4 *)(unaff_EBP + -4) = 9;
  if (iVar1 != 0) {
    (*DAT_5181f9c0)(iVar1);
  }
  if (extraout_ECX[0x12] != 0) {
    (*DAT_5181f9c0)(extraout_ECX[0x12]);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x13] = &PTR_FUN_51819640;
  FUN_518103e1((int)(extraout_ECX + 0x13));
  piVar2 = (int *)extraout_ECX[0x10];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0xf];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0xe];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if ((int *)extraout_ECX[0xd] != (int *)0x0) {
    FUN_51802c43((int *)extraout_ECX[0xd]);
    extraout_ECX[0xd] = 0;
  }
  iVar1 = extraout_ECX[10];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 != 0) {
    FUN_51813012((int)(extraout_ECX + 9));
    extraout_ECX[10] = 0;
  }
  iVar1 = extraout_ECX[8];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_51813012((int)(extraout_ECX + 7));
    extraout_ECX[8] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51812ea0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


