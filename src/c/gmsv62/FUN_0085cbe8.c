/* FUN_0085cbe8 - 0x0085cbe8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085cbe8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[2];
  uVar2 = FUN_0047c41d(*(undefined4 *)(param_2 * 0x16 + *param_1),0);
  *(undefined4 *)(iVar1 + param_2 * 4) = uVar2;
  iVar1 = param_1[3];
  uVar2 = FUN_0047c41d(*(undefined4 *)(param_2 * 0x16 + *param_1),1);
  *(undefined4 *)(iVar1 + param_2 * 4) = uVar2;
  return;
}


