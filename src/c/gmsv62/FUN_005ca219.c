/* FUN_005ca219 - 0x005ca219 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005ca219(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = FUN_00404a94();
  if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_00404abb();
  iVar2 = iVar2 + (-0xf - ((-(uint)(param_5 != 0) & 0xfffffff1) + 0x1e) * param_3);
  if (param_2 < 1) {
    if (param_2 == 0) {
      FUN_0042a3fc(uVar1,iVar2,0);
      return;
    }
    if (-1 < param_2) {
      return;
    }
    param_4 = 0;
    uVar3 = 1;
    param_2 = -param_2;
  }
  else {
    uVar3 = 0;
  }
  FUN_00429685(uVar1,iVar2,param_2,uVar3,param_4);
  return;
}


