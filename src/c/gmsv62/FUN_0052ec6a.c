/* FUN_0052ec6a - 0x0052ec6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052ec6a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x52ec7a;
  iVar1 = FUN_0042459a();
  uStack_14 = 0x52ec84;
  iVar2 = FUN_0042459a();
  if ((iVar1 < 0) || (iVar2 < 0)) {
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    FUN_00679d22(auStack_24,0x239);
    FUN_007db3ad();
    uStack_14 = 0x52ece6;
    FUN_0052a7a4();
  }
  else {
    uStack_14 = 0x52ec9b;
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    uStack_14 = 0x52eca9;
    uVar3 = FUN_004133b5();
    uStack_14 = 0;
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    uStack_18 = 0x52ecb8;
    FUN_008161f1();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


