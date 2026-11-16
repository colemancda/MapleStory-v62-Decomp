/* FUN_50c0c087 - 0x50c0c087 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c0c087(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_50c146e8;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_50c1ca34);
  FUN_50c0bf4f();
  return;
}


