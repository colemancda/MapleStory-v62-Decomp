/* FUN_51004dc8 - 0x51004dc8 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51004dc8(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar2;
  
  FUN_51005950();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0xc);
  FUN_510011e9();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar2 = (int *)(extraout_ECX + 0x14);
  if (*piVar2 == 0) {
    iVar1 = FUN_51001d97(0x28,0x10);
    *piVar2 = iVar1;
  }
  *piVar2 = *(int *)*piVar2;
  piVar2 = (int *)(extraout_ECX + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


