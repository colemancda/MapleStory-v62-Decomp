/* FUN_51803df1 - 0x51803df1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51803df1(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  iVar1 = FUN_51804b19();
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_51803e2b();
  return;
}


