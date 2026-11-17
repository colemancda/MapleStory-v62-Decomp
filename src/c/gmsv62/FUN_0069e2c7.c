/* FUN_0069e2c7 - 0x0069e2c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0069e2c7(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x88) = param_2;
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x90) = DVar1 + param_4;
  *(undefined4 *)(param_1 + 0x98) = param_5;
  FUN_0069e30c();
  FUN_008161f1(0);
  return;
}


