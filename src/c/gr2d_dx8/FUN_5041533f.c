/* FUN_5041533f - 0x5041533f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5041533f(void)

{
  int iVar1;
  
  iVar1 = FUN_5041d7ff();
  if (iVar1 == 0) {
    DAT_50435d30 = FUN_50414fea;
    PTR_FUN_50435d34 = FUN_50415141;
  }
  else {
    DAT_50435d30 = FUN_50415229;
    PTR_FUN_50435d34 = FUN_50415229;
  }
                    /* WARNING: Could not recover jumptable at 0x50415371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_50435d30)();
  return;
}


