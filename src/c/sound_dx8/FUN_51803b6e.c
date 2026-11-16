/* FUN_51803b6e - 0x51803b6e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51803b6e(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if ((uVar1 & 1) != 0) {
    FUN_51802a89(u_Sound_DX8__buffer_size_must_be_e_5181e218,0);
    FUN_51803bd7();
    return;
  }
  iVar2 = FUN_51804b19();
  *(uint *)(iVar2 + 0x30) = uVar1;
  iVar2 = FUN_51804b19();
  *(uint *)(iVar2 + 0x34) = uVar1 >> 1;
  iVar2 = FUN_51804b19();
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_51803bd7();
  return;
}


