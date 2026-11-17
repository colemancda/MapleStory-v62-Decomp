/* FUN_004190dc - 0x004190dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004190dc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + -0xc) = 1;
  if (param_2 == -1) {
    param_2 = FUN_0087a007(iVar1);
  }
  else {
    *(undefined2 *)(*param_1 + param_2 * 2) = 0;
  }
  *(int *)(iVar1 + -4) = param_2 * 2;
  return;
}


