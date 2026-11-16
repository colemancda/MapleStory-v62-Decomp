/* PcTermModule - 0x50c10624 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PcTermModule(void)

{
  int *local_8;
  
                    /* 0x10624  9  PcTermModule */
  FUN_50c026fc();
  FUN_50c107c7(&DAT_50c1ca90,0);
  _DAT_50c1ca8c = _DAT_50c1ca8c + -1;
  if (_DAT_50c1ca8c == 0) {
    DAT_50c1ca88 = 0;
  }
  FUN_50c026fc();
  PcFreeUnusedLibraries();
  local_8 = (int *)0x0;
  FUN_50c04b87(&DAT_50c1ca80,(int *)&local_8);
  if (local_8 != (int *)0x0) {
    FUN_50c02a85(local_8);
  }
  _DAT_50c1cab0 = _DAT_50c1cab0 + -1;
  DAT_50c1ca84 = 0;
  if (_DAT_50c1cab0 == 0) {
    DAT_50c1caac = 0;
  }
  return;
}


