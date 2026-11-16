/* FUN_50803230 - 0x50803230 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50803230(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_50817548;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_5081e594);
  FUN_50803255();
  return;
}


