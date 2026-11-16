/* FUN_50c06bf8 - 0x50c06bf8 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined * FUN_50c06bf8(void)

{
  if ((DAT_50c21464 & 1) == 0) {
    DAT_50c21464 = DAT_50c21464 | 1;
    FUN_50c06c3a();
    FUN_50c102d7((_onexit_t)&LAB_50c06c23);
  }
  return &DAT_50c21480;
}


