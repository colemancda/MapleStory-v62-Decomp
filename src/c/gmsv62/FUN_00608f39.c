/* FUN_00608f39 - 0x00608f39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00608f39(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 0xf4) != 0) {
    return;
  }
  if ((param_3 & 0x80000000) == 0) {
    if (param_2 == 0xd) {
      if (*(int *)(param_1 + 0x80) == 0) {
        FUN_00604b34();
        return;
      }
      if (*(int *)(param_1 + 0x80) != 1) {
        return;
      }
      FUN_00607522();
      return;
    }
    if (param_2 == 0x1b) {
      FUN_00609492();
      return;
    }
  }
  FUN_004bc822(param_2,param_3);
  return;
}


