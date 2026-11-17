/* FUN_00617dbd - 0x00617dbd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00617dbd(int param_1)

{
  uint uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x78) + 0x38) != 0) {
    uVar1 = FUN_004133f0();
    *(uint *)(param_1 + 0xe4) = (uVar1 & 1) + 6;
  }
  return;
}


