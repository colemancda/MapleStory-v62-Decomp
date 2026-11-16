/* FUN_51812da1 - 0x51812da1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812da1(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 0x1c);
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_518103e1(iVar2 + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = (int *)(iVar2 + 0x20);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  (*DAT_5181fa14)(*(undefined4 *)(iVar2 + 0x4c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


