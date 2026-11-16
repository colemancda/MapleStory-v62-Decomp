/* FUN_51002dca - 0x51002dca in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __cdecl FUN_51002dca(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 8) {
    uVar1 = (*DAT_5100949c)(0,param_1 + -0xc);
    (*DAT_51009498)(uVar1);
  }
  return;
}


