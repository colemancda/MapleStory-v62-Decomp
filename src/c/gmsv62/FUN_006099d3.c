/* FUN_006099d3 - 0x006099d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006099d3(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_1 < 0x11) {
    if (param_1 == 0x10) {
      uVar1 = 0xeff;
    }
    else if (param_1 == 10) {
      uVar1 = 0x116;
    }
    else if (param_1 == 0xb) {
      uVar1 = 0xefa;
    }
    else if (param_1 == 0xc) {
      uVar1 = 0xefb;
    }
    else if (param_1 == 0xd) {
      uVar1 = 0xefc;
    }
    else if (param_1 == 0xe) {
      uVar1 = 0xefd;
    }
    else {
      if (param_1 != 0xf) {
        return;
      }
      uVar1 = 0xefe;
    }
  }
  else if (param_1 == 0x11) {
    uVar1 = 0xf43;
  }
  else if (param_1 == 0x12) {
    uVar1 = 0xef7;
  }
  else {
    if (param_1 != 0x13) {
      if (param_1 == 0x15) {
        uVar1 = 0xf01;
        goto LAB_00609b11;
      }
      if (param_1 == 0x16) {
        uVar1 = 0xf02;
        goto LAB_00609b11;
      }
      if (param_1 != 0x1c) {
        return;
      }
    }
    uVar1 = 0xf00;
  }
LAB_00609b11:
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  FUN_00679d22(auStack_18,uVar1);
  FUN_007db3ad();
  return;
}


