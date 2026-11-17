/* FUN_00794da8 - 0x00794da8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00794da8(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_2 == 0x7f) {
    (**(code **)(*param_1 + 0x1c))(param_3);
  }
  else if (param_2 == 0x80) {
    (**(code **)(*param_1 + 0x20))(param_3);
  }
  else {
    uVar1 = FUN_0042452b();
    if (*(int *)(param_1[0x5d1] + 4 + (uVar1 & 0xff) * 8) != 0) {
      if (param_2 == 0x81) {
        FUN_00614d0d(param_3);
      }
      else if (param_2 == 0x82) {
        FUN_00614d2e(param_3);
      }
      else if (param_2 == 0x83) {
        FUN_00614dc1(param_3);
      }
      else if (param_2 == 0x84) {
        FUN_006166e9(param_3);
      }
      else if (param_2 == 0x85) {
        FUN_00614e6a(param_3);
      }
    }
  }
  return;
}


