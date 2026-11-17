/* FUN_00675ea2 - 0x00675ea2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00675ea2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  FUN_00675eda(param_2);
  FUN_00676677();
  FUN_00676696();
  FUN_008161f1(0);
  return;
}


