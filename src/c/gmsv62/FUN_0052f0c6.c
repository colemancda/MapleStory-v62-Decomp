/* FUN_0052f0c6 - 0x0052f0c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052f0c6(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uStack_c = 0x52f0d7;
  cVar1 = FUN_0042452b();
  if (cVar1 == 'P') {
    uVar2 = 0x11b5;
  }
  else if (cVar1 == 'R') {
    uVar2 = 0x11bf;
  }
  else {
    uVar2 = 0x1195;
  }
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  FUN_00679d22(auStack_1c,uVar2);
  FUN_007db3ad();
  return;
}


