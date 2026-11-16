/* FUN_5180c474 - 0x5180c474 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180c474(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  FUN_5180c4c1((void *)(unaff_EBP + -0x14),extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5180c4f3();
  piVar1 = *(int **)(extraout_ECX + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  *(undefined4 *)(extraout_ECX + 0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180c435();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


