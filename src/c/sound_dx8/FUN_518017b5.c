/* FUN_518017b5 - 0x518017b5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518017b5(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_5181f3b8)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_5181f3b8)();
      if (iVar1 == 0) break;
      (*DAT_5181fa24)(0);
    }
  }
  return;
}


