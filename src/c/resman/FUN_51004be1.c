/* FUN_51004be1 - 0x51004be1 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51004be1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_51005950();
  puVar1 = (undefined4 *)FUN_51004dc8();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_51004c86(puVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


