/* FUN_518123e9 - 0x518123e9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_518123e9(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(iVar2 + 0x20);
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_518056c8();
  FUN_51805720((void *)(iVar2 + 0x40),(int *)(unaff_EBP + 8));
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    FUN_51802c43(*(int **)(unaff_EBP + 8));
  }
  piVar1 = (int *)(iVar2 + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


