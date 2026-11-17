/* FUN_00833cb2 - 0x00833cb2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00833cb2(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x2c78) = uVar1;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x2c7c) = uVar1;
  return;
}


