/* ptr_008794db - 0x008794db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_008794db(void)

{
  HRESULT HVar1;
  
  HVar1 = VariantClear((VARIANTARG *)&DAT_00980690);
  if (HVar1 < 0) {
    FUN_00878dfb(HVar1);
  }
  return;
}


