/* FUN_0052f126 - 0x0052f126 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052f126(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_1 < 0x4f) {
    if (param_1 == 0x4e) {
      uVar1 = 0x1186;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x42) {
      uVar1 = 0x1196;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x43) {
      uVar1 = 0x116;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x44) {
      uVar1 = 0x1198;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x47) {
      uVar1 = 0x1199;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x49) {
      uVar1 = 0x119a;
      goto LAB_0052f23d;
    }
  }
  else {
    if (param_1 == 0x4f) {
      uVar1 = 0x11b9;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x51) {
      uVar1 = 0x11bd;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x52) {
      uVar1 = 0x11bf;
      goto LAB_0052f23d;
    }
    if (param_1 == 0x53) {
      uVar1 = 0x11d4;
      goto LAB_0052f23d;
    }
  }
  uVar1 = 0x11b7;
LAB_0052f23d:
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  FUN_00679d22(auStack_18,uVar1);
  FUN_007db3ad();
  return;
}


