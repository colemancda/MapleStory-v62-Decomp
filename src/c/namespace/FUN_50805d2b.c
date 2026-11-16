/* FUN_50805d2b - 0x50805d2b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50805d2b(undefined4 *param_1)

{
  param_1[-2] = &PTR_LAB_508177f0;
  param_1[-1] = &PTR_LAB_508177dc;
  *param_1 = &PTR_FUN_508177d8;
  param_1[1] = &PTR_LAB_508177d4;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_5081e594);
  FUN_50805d64();
  return;
}


