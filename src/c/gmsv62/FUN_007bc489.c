/* FUN_007bc489 - 0x007bc489 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_007bc489(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    fVar1 = (float10)FUN_004f1993(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
    if ((float10)_DAT_008e8a80 < fVar1) {
      return 1;
    }
  }
  return 0;
}


