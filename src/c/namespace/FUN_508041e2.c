/* FUN_508041e2 - 0x508041e2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_508041e2(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_5081e8b8)(*param_1 + -4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_50803c7e(&DAT_5081e9e0,(undefined4 *)param_1[1]);
  }
  return;
}


