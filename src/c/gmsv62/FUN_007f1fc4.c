/* FUN_007f1fc4 - 0x007f1fc4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f1fc4(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168) = 0;
  iVar1 = FUN_007f1bb0();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x16c) = 1;
    FUN_004e98b7(0x10);
  }
  return;
}


