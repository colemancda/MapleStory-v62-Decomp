/* FUN_007ae721 - 0x007ae721 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007ae721(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055a766();
  *(undefined4 *)(param_1 + 0x1ef8) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x2410) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x2428) = 0;
  *(undefined4 *)(param_1 + 0x241c) = uVar1;
  FUN_0079864f(0);
  if (param_2 == 0) {
    FUN_004e98b7(0xb);
  }
  return;
}


