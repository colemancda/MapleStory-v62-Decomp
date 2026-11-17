/* FUN_007cec21 - 0x007cec21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007cec21(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = FUN_0042452b();
  if ((uVar5 & 1) != 0) {
    FUN_004b876a(param_2);
    FUN_007c1070(param_1 + 0x1778);
    FUN_007c11eb(param_1 + 0x17e0);
    FUN_007c1325(*(undefined4 *)(param_1 + 0xd78));
    FUN_0043f1a0(0);
  }
  if ((uVar5 & 2) != 0) {
    FUN_0042452b();
    uVar6 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x1fb0) = uVar6;
  }
  if ((uVar5 & 4) != 0) {
    uVar1 = FUN_0042452b();
    FUN_0079601e(uVar1);
  }
  cVar2 = FUN_0042452b();
  if (cVar2 != '\0') {
    FUN_004245d2(param_1 + 0x1778,8);
    FUN_004245d2(param_1 + 0x1780,8);
    uVar6 = FUN_0042459a();
    FUN_007c0f80(param_1 + 0x1778,param_1,uVar6);
  }
  cVar3 = FUN_0042452b();
  if (cVar3 != '\0') {
    FUN_004245d2(param_1 + 0x17e0,8);
    FUN_004245d2(param_1 + 0x17e8,8);
    uVar6 = FUN_0042459a();
    FUN_007c10fb(param_1 + 0x17e0,param_1,uVar6);
  }
  cVar4 = FUN_0042452b();
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x1790) = 0;
    *(undefined4 *)(param_1 + 0x1794) = 0;
    *(undefined4 *)(param_1 + 0x1798) = 0;
  }
  else {
    uVar6 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x1790) = uVar6;
    uVar6 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x1794) = uVar6;
    uVar6 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x1798) = uVar6;
    FUN_007c1276(*(undefined4 *)(param_1 + 0x1790),param_1,uVar6);
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x1778) = 0;
    *(undefined4 *)(param_1 + 0x1780) = 0;
    *(undefined4 *)(param_1 + 0x177c) = 0;
    *(undefined4 *)(param_1 + 0x1784) = 0;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x17e0) = 0;
    *(undefined4 *)(param_1 + 0x17e8) = 0;
    *(undefined4 *)(param_1 + 0x17e4) = 0;
    *(undefined4 *)(param_1 + 0x17ec) = 0;
  }
  return;
}


