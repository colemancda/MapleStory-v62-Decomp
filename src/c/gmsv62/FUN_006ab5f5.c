/* FUN_006ab5f5 - 0x006ab5f5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006ab5f5(int param_1,undefined4 param_2)

{
  int unaff_retaddr;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x59c) + 4) + 0x1c))(param_2);
  FUN_00499fb8(unaff_retaddr != 0);
  return;
}


