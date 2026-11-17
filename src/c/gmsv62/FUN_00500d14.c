/* FUN_00500d14 - 0x00500d14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00500d14(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0042452b();
  *(uint *)(param_1 + 0x72c) = uVar1 & 0xff;
  return;
}


