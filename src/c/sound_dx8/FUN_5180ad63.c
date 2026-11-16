/* FUN_5180ad63 - 0x5180ad63 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180ad63(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar1 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_5180cfa9();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 != 0) {
      piVar2 = FUN_5180adfd();
      goto LAB_5180adc7;
    }
  }
  else {
    iVar1 = FUN_5180cf55();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 != 0) {
      piVar2 = FUN_5180af1c();
      goto LAB_5180adc7;
    }
  }
  piVar2 = (int *)0x0;
LAB_5180adc7:
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  (**(code **)(iVar1 + 4))(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


