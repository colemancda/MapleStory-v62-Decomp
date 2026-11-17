/* FUN_0052f736 - 0x0052f736 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052f736(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = 0x52f746;
  iVar1 = FUN_0042459a();
  iStack_14 = 0x52f750;
  uVar2 = FUN_0042459a();
  iStack_14 = iVar1 + -1;
  uStack_18 = 0x52f761;
  FUN_004b2699();
  uStack_18 = 0x52f76d;
  iStack_14 = uVar2;
  FUN_0053cfb8();
  iStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  FUN_00679d22(auStack_24,0x119c);
  FUN_007db3ad();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


