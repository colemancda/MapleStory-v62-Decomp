/* FUN_5181315f - 0x5181315f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5181315f(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  piVar2 = *(int **)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


