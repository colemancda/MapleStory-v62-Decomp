/* FUN_5180c435 - 0x5180c435 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180c435(void)

{
  int *piVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[1] == 0) {
    FUN_51809cb3();
  }
  piVar1 = (int *)*extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


