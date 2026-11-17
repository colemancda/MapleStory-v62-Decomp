/* FUN_007cf04c - 0x007cf04c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007cf04c(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_00424561();
  *(undefined2 *)(param_1 + 0xd84) = uVar2;
  uVar1 = FUN_0042452b();
  *(undefined1 *)(param_1 + 0xd86) = uVar1;
  uVar2 = FUN_00424561();
  *(undefined2 *)(param_1 + 0xd88) = uVar2;
  uVar1 = FUN_0042452b();
  *(undefined1 *)(param_1 + 0xd8a) = uVar1;
  FUN_007cf3ba();
  return;
}


