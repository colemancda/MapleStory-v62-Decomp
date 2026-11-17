/* FUN_007f1fec - 0x007f1fec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f1fec(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x15c) = 0;
  iVar1 = FUN_007f1bb0();
  if (iVar1 != 0) {
    FUN_004e98b7(1);
  }
  return;
}


