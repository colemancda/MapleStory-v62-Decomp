/* FUN_004ae16e - 0x004ae16e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004ae16e(int param_1,int param_2)

{
  *(int *)(param_1 + 0x34) = param_2;
  *(int *)(param_1 + 0x44) = param_2 / *(int *)(param_1 + 0x3c);
  FUN_004aea12();
  FUN_004b3daf();
  return;
}


