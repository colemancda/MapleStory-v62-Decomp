/* FUN_51801dd5 - 0x51801dd5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __fastcall FUN_51801dd5(int param_1)

{
  int iVar1;
  int unaff_retaddr;
  
  (*DAT_5181f9c0)(*(undefined4 *)(param_1 + 0x10));
  iVar1 = -0x7fffbffb;
  if (unaff_retaddr != 0) {
    iVar1 = unaff_retaddr;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  (*DAT_5181fa10)(*(undefined4 *)(param_1 + 0xc));
  return unaff_retaddr;
}


