/* FUN_007d3c48 - 0x007d3c48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_007d3c48(undefined4 param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (DAT_00978358 != 0) {
    (**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))(param_1,param_1);
    (**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
    fVar2 = (float10)FUN_0087af44();
    if (fVar2 < (float10)_DAT_008f1b50) {
      return 100;
    }
    if (fVar2 <= (float10)_DAT_008e8a98) {
      uVar1 = __ftol();
      return uVar1;
    }
  }
  return 0x28;
}


