/* FUN_004626c7 - 0x004626c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004626c7(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar1 = FUN_00424561();
  uVar2 = (uint)uVar1;
  FUN_00465810(uVar2,(int)&uStack_8 + 3);
  if (uVar2 != 0) {
    FUN_004245d2(*(undefined4 *)(param_1 + 0x488),uVar2 * 0x37);
  }
  uVar2 = FUN_00424561();
  *(uint *)(param_1 + 0x48c) = uVar2 & 0xffff;
  uVar2 = FUN_00424561();
  *(uint *)(param_1 + 0x490) = uVar2 & 0xffff;
  FUN_004933dc();
  FUN_0048acee();
  FUN_008161f1(0);
  return;
}


