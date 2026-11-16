/* ptr_5180b642 - 0x5180b642 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * __thiscall ptr_5180b642(int *param_1,int param_2)

{
  FUN_5180ca3f(param_1 + 3,param_2);
  (**(code **)(*param_1 + 0xc))();
  return param_1;
}


