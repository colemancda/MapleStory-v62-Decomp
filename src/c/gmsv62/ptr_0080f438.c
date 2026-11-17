/* ptr_0080f438 - 0x0080f438 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0080f438(int *param_1,undefined4 param_2)

{
  FUN_008101df(param_2);
  FUN_0080ecbc(0,param_1 + 0x2b);
  (**(code **)(*param_1 + 0x40))();
  FUN_008161f1(0);
  return;
}


