/* FUN_51004a08 - 0x51004a08 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51004a08(void)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0xc);
  FUN_510011e9();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    uVar2 = FUN_51001d97(0x10,0x10);
    *(undefined4 *)(extraout_ECX + 0x14) = uVar2;
  }
  *(undefined4 *)(extraout_ECX + 0x14) = **(undefined4 **)(extraout_ECX + 0x14);
  piVar1 = (int *)(extraout_ECX + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


