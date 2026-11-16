/* FUN_51812913 - 0x51812913 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51812913(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x20);
  FUN_518017b5();
  uVar2 = *(undefined4 *)(extraout_ECX + 0x34);
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(iVar3 + 4) = uVar2;
  FUN_51810353(iVar3);
  piVar1 = (int *)(extraout_ECX + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


