/* FUN_518031a0 - 0x518031a0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_518031a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_51806f4b();
  if ((iVar1 == 0) && (param_1 != 0)) {
    (*(code *)**(undefined4 **)(param_1 + 4))(1);
  }
  return iVar1;
}


