/* FUN_00848f25 - 0x00848f25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00848f25(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x848f34;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    FUN_00679d22(auStack_20,0xf43);
    FUN_007db3ad();
  }
  *(undefined4 *)(param_1 + 0x208c) = 0;
  uStack_10 = 0x848f6a;
  uVar2 = FUN_007d1e08();
  *(undefined4 *)(param_1 + 0x2090) = uVar2;
  return;
}


