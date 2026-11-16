/* FUN_514067d3 - 0x514067d3 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_514067d3(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_51411720)(local_28);
  PTR_FUN_514113f0 = FUN_5140682b;
  if (local_14 < 2) {
    PTR_FUN_514113f0 = FUN_5140680b;
  }
  (*(code *)PTR_FUN_514113f0)();
  return;
}


