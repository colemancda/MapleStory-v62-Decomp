/* FUN_50801763 - 0x50801763 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __fastcall FUN_50801763(undefined4 *param_1)

{
  FUN_508017a5();
  *param_1 = &PTR_LAB_508171b0;
  param_1[8] = &PTR_LAB_50817184;
  param_1[0xf] = &PTR_LAB_50817150;
  param_1[0x10] = &PTR_LAB_5081713c;
  param_1[0x11] = &PTR_FUN_50817138;
  param_1[0x12] = &PTR_LAB_50817134;
  InterlockedIncrement(&DAT_5081e594);
  return param_1;
}


