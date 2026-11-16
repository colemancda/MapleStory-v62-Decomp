/* FUN_50c07c90 - 0x50c07c90 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c07c90(undefined4 *param_1)

{
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_50c02a85((int *)param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_50c134fc;
  return;
}


