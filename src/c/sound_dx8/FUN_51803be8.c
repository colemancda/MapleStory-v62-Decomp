/* FUN_51803be8 - 0x51803be8 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51803be8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_51803c2e();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_51804b19();
  *puVar1 = *(undefined4 *)(iVar2 + 0x14);
  FUN_51803c2e();
  return;
}


