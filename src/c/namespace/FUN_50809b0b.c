/* FUN_50809b0b - 0x50809b0b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __fastcall FUN_50809b0b(undefined4 *param_1)

{
  FUN_50809cbc(0xbaadf00d,(uint *)0xbaadf00d,param_1 + 9);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 1;
  FUN_50809b53(param_1);
  FUN_50809b77(param_1);
  return param_1;
}


