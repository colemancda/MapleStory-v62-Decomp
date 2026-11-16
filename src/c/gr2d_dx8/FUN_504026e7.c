/* FUN_504026e7 - 0x504026e7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_504026e7(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_50438be0)(local_28);
  PTR_FUN_50435130 = FUN_5040273f;
  if (local_14 < 2) {
    PTR_FUN_50435130 = FUN_5040271f;
  }
  (*(code *)PTR_FUN_50435130)();
  return;
}


