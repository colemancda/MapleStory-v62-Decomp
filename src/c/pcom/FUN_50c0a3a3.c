/* FUN_50c0a3a3 - 0x50c0a3a3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0a3a3(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_50c21070)(local_28);
  PTR_FUN_50c1850c = FUN_50c0a3fb;
  if (local_14 < 2) {
    PTR_FUN_50c1850c = FUN_50c0a3db;
  }
  (*(code *)PTR_FUN_50c1850c)();
  return;
}


