/* FUN_51004c86 - 0x51004c86 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 * __fastcall FUN_51004c86(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51007208;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_51007204;
  Ordinal_8(param_1 + 4);
  *param_1 = &PTR_FUN_51007200;
  param_1[3] = &PTR_LAB_510071fc;
  return param_1;
}


