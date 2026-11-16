/* FUN_50c09a95 - 0x50c09a95 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __fastcall FUN_50c09a95(undefined4 *param_1)

{
  FUN_50c09c46(0xbaadf00d,(uint *)0xbaadf00d,param_1 + 9);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 1;
  FUN_50c09add(param_1);
  FUN_50c09b01(param_1);
  return param_1;
}


