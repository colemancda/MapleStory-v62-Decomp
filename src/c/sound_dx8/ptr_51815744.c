/* ptr_51815744 - 0x51815744 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


LONG ptr_51815744(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0x10));
  if ((LVar1 == 0) && (param_1 != 4)) {
    (*(code *)**(undefined4 **)(param_1 + 8))(1);
  }
  return LVar1;
}


