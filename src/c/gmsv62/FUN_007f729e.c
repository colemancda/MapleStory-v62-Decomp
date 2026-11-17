/* FUN_007f729e - 0x007f729e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f729e(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = FUN_004133f0();
  uVar2 = FUN_004133f0();
  uVar3 = FUN_004133f0(uVar2,uVar1);
  FUN_0063439e(uVar3,uVar2,uVar1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


