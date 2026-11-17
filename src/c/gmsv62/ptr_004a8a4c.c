/* ptr_004a8a4c - 0x004a8a4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_004a8a4c(int *param_1,int param_2)

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
      FUN_0081b1ba();
      FUN_0081b1c6(param_1[0x20] == 0);
    }
    FUN_008161f1(0);
  }
  return 1;
}


