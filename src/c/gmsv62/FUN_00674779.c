/* FUN_00674779 - 0x00674779 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00674779(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 8) {
    uVar1 = (*DAT_0097b424)(0,param_1 + -0xc);
    (*DAT_0097b420)(uVar1);
  }
  return;
}


