/* FUN_5080b91c - 0x5080b91c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080b91c(undefined4 *param_1)

{
  param_1[-1] = &PTR_LAB_508189e8;
  *param_1 = &PTR_FUN_508189e4;
  param_1[1] = &PTR_LAB_508189e0;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_5081e594);
  FUN_5080b94e();
  return;
}


