/* FUN_5001077a - 0x5001077a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined * FUN_5001077a(void)

{
  if ((DAT_50086460 & 1) == 0) {
    DAT_50086460 = DAT_50086460 | 1;
    FUN_50010c4e();
    FUN_50012de7((_onexit_t)&LAB_500107a5);
  }
  return &DAT_50086480;
}


