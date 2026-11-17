/* FUN_00773190 - 0x00773190 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00773190(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = (uint)(param_2 == 0) * 0x7c + 100 + param_1;
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  FUN_0077f304();
  FUN_0077e699();
  FUN_008161f1(0);
  return;
}


