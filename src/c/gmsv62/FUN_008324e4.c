/* FUN_008324e4 - 0x008324e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_008324e4(int param_1,int param_2)

{
  if (param_2 < 8) {
    if (param_2 == 7) {
      if (*(int *)(param_1 + 0x31d4) != 0) {
        FUN_00815de9();
        FUN_0083df17();
      }
    }
    else if (param_2 == 0) {
      if (*(int *)(param_1 + 0x31ac) != 0) {
        FUN_00815de9();
        FUN_004c26ae();
      }
    }
    else if (param_2 == 1) {
      if (*(int *)(param_1 + 0x31b4) != 0) {
        FUN_00815de9();
        FUN_0083debf();
      }
    }
    else if (param_2 == 2) {
      if (*(int *)(param_1 + 0x31bc) != 0) {
        FUN_00815de9();
        FUN_0083ded5();
      }
    }
    else if (param_2 == 3) {
      if (*(int *)(param_1 + 0x31c4) != 0) {
        FUN_00815de9();
        FUN_0083deeb();
      }
    }
    else if (param_2 == 5) {
      if (*(int *)(param_1 + 0x31cc) != 0) {
        FUN_00815de9();
        FUN_0083df01();
      }
    }
    else if ((param_2 == 6) && (*(int *)(param_1 + 0x31dc) != 0)) {
      FUN_00815de9();
      FUN_00705d63();
    }
  }
  else if (param_2 == 9) {
    if (*(int *)(param_1 + 0x321c) != 0) {
      FUN_00815de9();
      FUN_0083dfc7();
    }
  }
  else if (param_2 == 10) {
    if (*(int *)(param_1 + 0x31e4) != 0) {
      FUN_00815de9();
      FUN_0083df2d();
    }
  }
  else if (param_2 == 0xb) {
    if (*(int *)(param_1 + 0x31f4) != 0) {
      FUN_00815de9();
      FUN_0083df59();
    }
  }
  else if (param_2 == 0x14) {
    if (*(int *)(param_1 + 0x320c) != 0) {
      FUN_00815de9();
      FUN_0083df9b();
    }
  }
  else if ((param_2 == 0x16) && (*(int *)(param_1 + 0x3224) != 0)) {
    FUN_00815de9();
    FUN_006f9f77();
  }
  return;
}


