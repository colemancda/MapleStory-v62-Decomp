/* FUN_004a58cd - 0x004a58cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a58cd(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_004a1770();
  FUN_004a59aa(param_2);
  FUN_004a1334();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x48) + -1;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  iVar1 = (*DAT_0097b704)();
  *(int *)(param_1 + 0xbc) = iVar1 + 500;
  FUN_004b3daf();
  return;
}


