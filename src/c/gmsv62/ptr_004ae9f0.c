/* ptr_004ae9f0 - 0x004ae9f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004ae9f0(int param_1,undefined4 param_2)

{
  FUN_004b3b3e(param_2);
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    FUN_004b3daf();
  }
  return;
}


