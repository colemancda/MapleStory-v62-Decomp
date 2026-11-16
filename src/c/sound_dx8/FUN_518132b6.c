/* FUN_518132b6 - 0x518132b6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518132b6(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  extraout_ECX[-1] = &PTR_LAB_5181967c;
  *extraout_ECX = &PTR_FUN_51819698;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = &PTR_FUN_51819678;
  piVar1 = (int *)extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5181336b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


