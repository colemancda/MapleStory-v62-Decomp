/* FUN_0043f6fe - 0x0043f6fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0043f6fe(int param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = FUN_0043f79a();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4b8);
    if (iVar1 < 0x2b) {
      if (iVar1 == 0x2a) {
        uStack_8 = 5;
      }
      else if (iVar1 == 5) {
        uStack_8 = 0x14;
      }
      else if (iVar1 == 6) {
        uStack_8 = 0x15;
      }
      else if (iVar1 == 7) {
        uStack_8 = 0x16;
      }
      else if (iVar1 == 0x10) {
        uStack_8 = 0x11;
      }
      else if (iVar1 == 0x11) {
        uStack_8 = 0x12;
      }
      else if (iVar1 == 0x20) {
        uStack_8 = 0x10;
      }
      else {
        if (iVar1 != 0x29) goto LAB_0043f792;
        uStack_8 = 4;
      }
    }
    else if (iVar1 == 0x2b) {
      uStack_8 = 6;
    }
    else if (iVar1 == 0x2c) {
      uStack_8 = 3;
    }
    else if (iVar1 == 0x2d) {
      uStack_8 = 0x1a;
    }
    else if (iVar1 == 0x2e) {
      uStack_8 = 0x1b;
    }
    else if (iVar1 == 0x4e) {
      uStack_8 = 0x18;
    }
    else if (iVar1 == 0x58) {
      uStack_8 = 0x19;
    }
    else {
      if (iVar1 != 0x60) goto LAB_0043f792;
      uStack_8 = 0x17;
    }
    return uStack_8;
  }
LAB_0043f792:
  return *(undefined4 *)(param_1 + 0x4b8);
}


