/* ptr_004ad03e - 0x004ad03e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_004ad03e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x38) < 2) || (*(int *)(param_1 + 0x44) == 0)) ||
     (*(int *)(param_1 + 0x3c) != 0x69)) {
    uVar1 = 0;
  }
  else {
    FUN_004ad45a(param_2,param_3);
    uVar1 = 1;
  }
  return uVar1;
}


