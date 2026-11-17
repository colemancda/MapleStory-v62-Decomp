/* FUN_0081b22c - 0x0081b22c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0081b22c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
  (*DAT_0097b6f0)(uVar1,unaff_retaddr,param_2,param_3);
  (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),uVar1);
  return;
}


