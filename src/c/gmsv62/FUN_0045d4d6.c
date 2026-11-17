/* FUN_0045d4d6 - 0x0045d4d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_0045d4d6(int param_1)

{
  uint uVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar1 = FUN_00424561();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 != 0) {
    FUN_0045f44d(uVar1,1,(int)&uStack_8 + 3);
    FUN_004245d2(*(undefined4 *)(param_1 + 0x4c),uVar1 * 0x68);
  }
  return uVar1 != 0;
}


