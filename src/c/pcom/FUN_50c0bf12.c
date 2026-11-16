/* FUN_50c0bf12 - 0x50c0bf12 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c0bf12(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_50c14680;
  param_1[0xb] = &PTR_LAB_50c1467c;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_50c1ca34);
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0xb)) =
       &PTR_LAB_50c146c0;
  FUN_50c0bf4f();
  return;
}


