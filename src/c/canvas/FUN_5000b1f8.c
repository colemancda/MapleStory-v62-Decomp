/* FUN_5000b1f8 - 0x5000b1f8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000b1f8(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_50081c30)(local_28);
  PTR_FUN_50019408 = FUN_5000b250;
  if (local_14 < 2) {
    PTR_FUN_50019408 = FUN_5000b230;
  }
  (*(code *)PTR_FUN_50019408)();
  return;
}


