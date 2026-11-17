/* FUN_004fa75a - 0x004fa75a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004fa75a(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00424561();
  *(uint *)(param_1 + 0x740) = uVar1 & 0xffff;
  uVar1 = FUN_00424561();
  *(uint *)(param_1 + 0x744) = uVar1 & 0xffff;
  FUN_004fa96d();
  return;
}


