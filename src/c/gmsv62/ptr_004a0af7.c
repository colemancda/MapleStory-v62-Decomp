/* ptr_004a0af7 - 0x004a0af7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_004a0af7(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = param_1[9];
  }
  if (iVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x3c))(&DAT_00978474);
    }
    else {
      if ((DAT_00978358 != 0) && (*(int *)(DAT_00978358 + 0x2454) != 0)) {
        FUN_007b0b2a();
      }
      FUN_0081b1ba();
      FUN_0081b1c6(0);
    }
    FUN_008161f1(0);
  }
  return 1;
}


