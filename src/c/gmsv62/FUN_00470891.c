/* FUN_00470891 - 0x00470891 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00470891(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    FUN_00419015();
  }
  else {
    uVar4 = 0;
    uVar1 = (*DAT_0097b4c8)(0,0,param_1,param_2,0,0);
    iVar3 = (uVar1 & 0x7fffffff) - 1;
    uVar2 = FUN_0041903e(iVar3,0);
    (*DAT_0097b4c8)(0,0,uVar4,0xffffffff,uVar2,0x3fffffff);
    FUN_004190dc(iVar3);
  }
  return;
}


