/* FUN_51814937 - 0x51814937 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51814937(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  FUN_5180c4c1((void *)(unaff_EBP + -0x24),extraout_ECX);
  piVar1 = *(int **)(extraout_ECX + 100);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  piVar1 = *(int **)(extraout_ECX + 0x6c);
  *(undefined4 *)(extraout_ECX + 0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    (**(code **)(*piVar1 + 0x3c))(piVar1,unaff_EBP + -0x14,unaff_EBP + -0x1c);
    if ((*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + -0x10)) &&
       ((*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x10) ||
        (*(uint *)(unaff_EBP + -0x1c) <= *(uint *)(unaff_EBP + -0x14))))) {
      FUN_51814906(extraout_ECX);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180c435();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


