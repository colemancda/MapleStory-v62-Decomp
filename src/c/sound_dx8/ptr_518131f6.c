/* ptr_518131f6 - 0x518131f6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


bool ptr_518131f6(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(int *)(param_1 + 0x1c) == 0;
  }
  else if (*(int *)(param_1 + 0x1c) == 0) {
    bVar1 = true;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    bVar1 = param_2 != 1;
  }
  return bVar1;
}


