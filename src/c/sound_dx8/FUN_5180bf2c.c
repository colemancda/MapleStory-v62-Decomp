/* FUN_5180bf2c - 0x5180bf2c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5180bf2c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x48);
  FUN_518017b5();
  iVar2 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_51801833((void *)(extraout_ECX + 0x50),*(int *)(unaff_EBP + 0xc));
  }
  iVar2 = *(int *)(extraout_ECX + 0x54);
  iVar3 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar3 + 4) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
  }
  piVar1 = (int *)(extraout_ECX + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x48) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


