/* FUN_50011bb6 - 0x50011bb6 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50011bb6(undefined4 *param_1)

{
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_500028a0((int *)param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_500156a4;
  return;
}


