/* FUN_00826a90 - 0x00826a90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00826a90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00672b28(0);
  if (iVar1 < 0) {
    FUN_008795da(iVar1,0);
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}


