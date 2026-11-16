/* FUN_5181307f - 0x5181307f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5181307f(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = (undefined4 *)FUN_51813e2e();
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_51813107();
    *puVar1 = &PTR_LAB_5181965c;
    puVar1[1] = &PTR_FUN_51819658;
    puVar1[2] = &PTR_FUN_51819654;
    InterlockedIncrement(&DAT_5181f8a0);
  }
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    InterlockedDecrement(puVar1 + 3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return *(undefined4 *)(unaff_EBP + -0x10);
}


