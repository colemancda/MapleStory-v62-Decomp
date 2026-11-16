/* FUN_51810ed3 - 0x51810ed3 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * __thiscall FUN_51810ed3(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_5181041b(this);
  FUN_51804af0(piVar1,(int *)*param_1);
  FUN_51804af0(piVar1 + 1,(int *)param_1[1]);
  return piVar1;
}


