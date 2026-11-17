/* FUN_004b52db - 0x004b52db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b52db(int param_1)

{
  undefined4 uVar1;
  
  FUN_0042459a();
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0xad) = uVar1;
  return;
}


