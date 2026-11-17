/* FUN_0086dfc0 - 0x0086dfc0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 __fastcall FUN_0086dfc0(int param_1)

{
  if (DAT_0097fb5d != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x2b79) != '\0') {
    return *(undefined1 *)(*(int *)((int)Self + 0x30) + 2);
  }
  return ClientId.UniqueProcess._0_1_;
}


