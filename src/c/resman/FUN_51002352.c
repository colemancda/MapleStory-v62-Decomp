/* FUN_51002352 - 0x51002352 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 * __fastcall FUN_51002352(undefined4 *param_1)

{
  FUN_51002503(0xbaadf00d,(uint *)0xbaadf00d,param_1 + 9);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 1;
  FUN_5100239a(param_1);
  FUN_510023be(param_1);
  return param_1;
}


