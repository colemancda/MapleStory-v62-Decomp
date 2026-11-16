/* FUN_5080562b - 0x5080562b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __fastcall FUN_5080562b(undefined4 *param_1)

{
  FUN_5080565f();
  *param_1 = &PTR_LAB_508177f0;
  param_1[1] = &PTR_LAB_508177dc;
  param_1[2] = &PTR_FUN_508177d8;
  param_1[3] = &PTR_LAB_508177d4;
  InterlockedIncrement(&DAT_5081e594);
  return param_1;
}


