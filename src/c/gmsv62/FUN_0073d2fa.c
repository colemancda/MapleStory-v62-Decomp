/* FUN_0073d2fa - 0x0073d2fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073d2fa(uint param_1)

{
  undefined4 uVar1;
  
  if ((DAT_00978358 != 0) && (*(int *)(DAT_00978358 + 0x2454) != 0)) {
    FUN_007b0b2a();
  }
  if (param_1 < 0x3ef) {
    if (param_1 == 0x3ee) {
      FUN_00747306();
    }
    else if (param_1 == 1000) {
      FUN_008319e8(0);
    }
    else if (param_1 == 0x3e9) {
      FUN_0083cd91();
    }
    else if (param_1 == 0x3ea) {
      FUN_00832700();
    }
    else {
      if (param_1 == 0x3eb) {
        uVar1 = 1;
      }
      else {
        if (param_1 != 0x3ec) {
          if (param_1 != 0x3ed) {
            return;
          }
          FUN_00831b94(5,0xffffffff);
          return;
        }
        uVar1 = 3;
      }
      FUN_0073da1a(uVar1);
    }
  }
  else if (param_1 == 0x3ef) {
    FUN_00832c44();
  }
  else {
    if (param_1 == 2000) {
      FUN_00831b94(1,0xffffffff);
      uVar1 = 0;
    }
    else if (param_1 == 0x7d1) {
      FUN_00831b94(0,0xffffffff);
      uVar1 = 1;
    }
    else if (param_1 == 0x7d2) {
      FUN_00831b94(2,0xffffffff);
      uVar1 = 2;
    }
    else {
      if (param_1 != 0x7d3) {
        return;
      }
      FUN_00831b94(3,0xffffffff);
      uVar1 = 3;
    }
    FUN_00747bcb(uVar1,0);
  }
  return;
}


