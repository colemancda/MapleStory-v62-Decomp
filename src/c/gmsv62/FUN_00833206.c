/* FUN_00833206 - 0x00833206 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00833206(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) ||
     (iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x48))(&DAT_0097bd2c), iVar2 = param_1,
     iVar1 == 0)) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    if ((param_1 == 0) ||
       (iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x48))(&DAT_0097be04), iVar2 = param_1,
       iVar1 == 0)) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      if ((param_1 == 0) ||
         (iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x48))(&DAT_0097bee8), iVar2 = param_1,
         iVar1 == 0)) {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        if ((param_1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x48))(&DAT_0097bda0), iVar2 = param_1,
           iVar1 == 0)) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          if ((param_1 == 0) ||
             (iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x48))(&DAT_0097bd78), iVar2 == 0)) {
            param_1 = 0;
          }
          if (param_1 == 0) {
            return 0;
          }
          FUN_0083332c();
        }
        else {
          FUN_00833341();
        }
      }
      else {
        FUN_00833302();
      }
    }
    else {
      FUN_008332ed();
    }
  }
  else {
    FUN_008332d8();
  }
  return 1;
}


