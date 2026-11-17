/* FUN_006158e9 - 0x006158e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_006158e9(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048bb31(param_1 + 0x11c,*(undefined4 *)(param_1 + 0x124));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_0048bb31(param_1 + 0x11c,*(undefined4 *)(param_1 + 0x124)),
     *(int *)(iVar1 + 4) != 0)) {
    return 1;
  }
  return 0;
}


