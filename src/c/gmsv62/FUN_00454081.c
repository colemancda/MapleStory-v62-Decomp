/* FUN_00454081 - 0x00454081 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00454081(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    FUN_00414f29();
  }
  else {
    uVar3 = 0;
    iVar1 = (*DAT_0097b4cc)(0,0,param_1,param_2,0,0,0,0);
    uVar2 = FUN_00415015(iVar1 + -1,0);
    (*DAT_0097b4cc)(0,0,uVar3,0xffffffff,uVar2,0x3fffffff,0,0);
    FUN_004150c0(iVar1 + -1);
  }
  return;
}


