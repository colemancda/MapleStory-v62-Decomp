/* FUN_005e468b - 0x005e468b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_005e468b(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined2 param_5
            ,undefined2 param_6,undefined2 param_7,undefined1 param_8,int param_9,
            undefined4 *param_10)

{
  short sVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  uVar2 = FUN_004b8c34();
  *(undefined2 *)(param_1 + 0x46) = param_4;
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar2 = FUN_004b8c34();
  *(undefined2 *)(param_1 + 0x48) = param_5;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_004133b5();
  *(undefined2 *)(param_1 + 0x4a) = param_6;
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined2 *)(param_1 + 0x4c) = param_7;
  if (param_9 == 0) {
    if (param_10 == (undefined4 *)0x0) {
      sVar1 = 0;
    }
    else {
      sVar1 = -(short)*param_10;
    }
  }
  else {
    sVar1 = (short)*(undefined4 *)(param_9 + 0x48);
  }
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(short *)(param_1 + 0x50) = sVar1;
  *(undefined1 *)(param_1 + 0x4e) = param_8;
  uVar2 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar2 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  FUN_005e532d();
  return;
}


