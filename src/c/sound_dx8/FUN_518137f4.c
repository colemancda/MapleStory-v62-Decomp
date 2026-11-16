/* FUN_518137f4 - 0x518137f4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518137f4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  extraout_ECX[-1] = &PTR_LAB_518196e8;
  *extraout_ECX = &PTR_FUN_51819704;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = &PTR_FUN_518196e4;
  iVar1 = extraout_ECX[7];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_51813012((int)(extraout_ECX + 6));
    extraout_ECX[7] = 0;
  }
  piVar2 = (int *)extraout_ECX[5];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_518138c5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


