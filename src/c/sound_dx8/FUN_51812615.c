/* FUN_51812615 - 0x51812615 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812615(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 0x1c);
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51812f17((void *)(iVar2 + 0x40),(undefined4 *)0x0);
  FUN_51812f44((void *)(iVar2 + 0x44),(undefined4 *)0x0);
  FUN_51812f71((void *)(iVar2 + 0x48),(undefined4 *)0x0);
  piVar1 = (int *)(iVar2 + 0x20);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


