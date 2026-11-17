/* FUN_006709fa - 0x006709fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006709fa(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00424561();
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}


