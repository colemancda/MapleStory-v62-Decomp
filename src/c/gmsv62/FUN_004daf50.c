/* FUN_004daf50 - 0x004daf50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004daf50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x738) = uVar1;
  FUN_0060eb7d(param_2);
  return;
}


