/* FUN_518085ab - 0x518085ab in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_518085ab(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51818148;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_51819924;
  memset(param_1 + 4,0,0x48);
  *param_1 = &PTR_FUN_51819920;
  param_1[3] = &PTR_LAB_5181991c;
  return param_1;
}


