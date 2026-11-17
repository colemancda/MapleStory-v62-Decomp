/* FUN_004ae18f - 0x004ae18f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_004ae18f(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(int *)(param_1 + 0x38) = param_2;
  *(int *)(param_1 + 0x3c) = param_3;
  if (param_3 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = (param_2 + -1 + param_3) / param_3;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(int *)(param_1 + 0x40) = iVar1;
  *(undefined4 *)(param_1 + 0x4c) = param_4;
  *(undefined4 *)(param_1 + 0x50) = param_5;
  FUN_0047266d(param_2,(int)&param_2 + 3);
  return;
}


