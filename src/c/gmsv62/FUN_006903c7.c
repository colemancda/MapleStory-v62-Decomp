/* FUN_006903c7 - 0x006903c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006903c7(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  FUN_00690416(param_2);
  FUN_00691471(0,param_1 + 0xd0);
  FUN_006916c0();
  FUN_00691715();
  FUN_006917fc();
  FUN_008161f1(0);
  return;
}


