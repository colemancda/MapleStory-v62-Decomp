/* FUN_007bc4b2 - 0x007bc4b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_007bc4b2(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    iVar1 = FUN_00614c6f();
    if (iVar1 == 0) {
      fVar2 = (float10)FUN_005d0e60();
      if (fVar2 <= (float10)_DAT_008e8a80) {
        return 1;
      }
    }
  }
  return 0;
}


