/* FUN_5100473d - 0x5100473d in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_5100473d(void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)((int)param_1 + 0xc) - 1;
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar2 = uVar2 - 1 >> 1;
    uVar1 = FUN_51004ae0(param_1,uVar2);
  } while (uVar1 != 0);
  return;
}


