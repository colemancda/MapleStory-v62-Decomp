/* FUN_0084584b - 0x0084584b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0084584b(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0042452b();
  *(uint *)(param_1 + 0x3150) = uVar1 & 0xff;
  return;
}


