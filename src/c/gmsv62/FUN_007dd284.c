/* FUN_007dd284 - 0x007dd284 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007dd284(int param_1,int param_2)

{
  FUN_007dd3ba();
  if (param_2 == 1) {
    FUN_0047c31f(param_1 + 0x11c,1);
    FUN_0047a88e();
  }
  else if (param_2 == 2) {
    FUN_0047c31f(param_1 + 0xec,0);
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(int *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00815de9();
    }
  }
  return;
}


