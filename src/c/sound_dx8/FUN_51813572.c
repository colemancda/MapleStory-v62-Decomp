/* FUN_51813572 - 0x51813572 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51813572(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  FUN_51813936((void *)(iVar1 + 0x10),(undefined4 *)0x0);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 0x18);
  FUN_51810353(unaff_EBP + -0x14);
  iVar2 = *(int *)(iVar1 + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    FUN_51813012(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_51813012(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


