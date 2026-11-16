/* FUN_50415377 - 0x50415377 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50415377(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_5041d7ff();
  if (iVar1 == 0) {
    DAT_50435d30 = FUN_50414fea;
    UNRECOVERED_JUMPTABLE = FUN_50415141;
  }
  else {
    UNRECOVERED_JUMPTABLE = FUN_50415229;
    DAT_50435d30 = FUN_50415229;
  }
  PTR_FUN_50435d34 = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x504153a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


