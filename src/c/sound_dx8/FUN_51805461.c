/* FUN_51805461 - 0x51805461 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51805461(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_5181fb10)(local_28);
  PTR_FUN_5181f3b8 = FUN_518054b9;
  if (local_14 < 2) {
    PTR_FUN_5181f3b8 = FUN_51805499;
  }
  (*(code *)PTR_FUN_5181f3b8)();
  return;
}


