/* FUN_0043fb62 - 0x0043fb62 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0043fb62(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x468) != 0) {
    iVar1 = FUN_005e297d(*(int *)(param_1 + 0x468));
    if (iVar1 == 0) {
      iVar1 = FUN_005e29cf(*(undefined4 *)(param_1 + 0x468));
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


