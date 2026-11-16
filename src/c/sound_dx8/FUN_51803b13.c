/* FUN_51803b13 - 0x51803b13 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51803b13(void)

{
  int unaff_EBP;
  bool bVar1;
  
  FUN_5180ea30();
  bVar1 = DAT_5181f8e0 == 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar1) {
    FUN_51803b5d();
    return;
  }
  FUN_51804b19();
  FUN_518042b8();
  FUN_51803b5d();
  return;
}


