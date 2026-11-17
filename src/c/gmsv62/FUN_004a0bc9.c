/* FUN_004a0bc9 - 0x004a0bc9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a0bc9(int param_1,char *param_2)

{
  FUN_0047cf76();
  FUN_004a2fd0();
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) || (*(int *)(param_1 + 0x48) != 0)) {
    FUN_004a1770();
    FUN_0045f0f3(param_2,0xffffffff);
    FUN_004a1334();
    FUN_004b3daf();
  }
  return;
}


