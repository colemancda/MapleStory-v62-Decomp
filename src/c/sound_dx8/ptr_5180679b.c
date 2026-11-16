/* ptr_5180679b - 0x5180679b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall ptr_5180679b(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_5180665f(param_1);
  (**(code **)(*piVar1 + 0x14))(param_2,param_3);
  return;
}


