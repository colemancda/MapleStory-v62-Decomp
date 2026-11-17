/* FUN_00861a68 - 0x00861a68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00861a68(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004f1993(param_1 + 0x198,*(undefined4 *)(param_1 + 0x1a8));
  if (fVar1 == (float10)_DAT_008e8a80) {
    fVar1 = (float10)1;
  }
  else {
    fVar1 = (float10)FUN_004f1993(param_1 + 0x198,*(undefined4 *)(param_1 + 0x1a8));
  }
  return fVar1;
}


