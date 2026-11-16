/* FUN_51801e04 - 0x51801e04 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51801e04(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  (*DAT_5181fa10)(*(undefined4 *)(param_1 + 0xc));
  (*DAT_5181fa1c)(uVar1,0xffffffff);
  (*DAT_5181f9c0)(uVar1);
  return;
}


