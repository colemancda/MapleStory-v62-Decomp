/* FUN_00517916 - 0x00517916 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00517916(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0042452b();
  *(uint *)(param_1 + 0x10) = uVar1 & 0xff;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar1 = FUN_0042452b();
  *(uint *)(param_1 + 0x18) = uVar1 & 0xff;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return;
}


