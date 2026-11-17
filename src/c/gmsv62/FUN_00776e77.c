/* FUN_00776e77 - 0x00776e77 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00776e77(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_2 * 0x80 + 0x60 + param_1;
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  FUN_0077f351();
  FUN_0077e699();
  FUN_008161f1(0);
  return;
}


