/* FUN_518055e1 - 0x518055e1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __cdecl FUN_518055e1(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 8) {
    uVar1 = (*DAT_5181fa5c)(0,param_1 + -0xc);
    (*DAT_5181fa58)(uVar1);
  }
  return;
}


