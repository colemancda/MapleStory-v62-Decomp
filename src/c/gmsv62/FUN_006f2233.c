/* FUN_006f2233 - 0x006f2233 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f2233(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_4 + -6;
  iVar2 = param_5 + -0x80;
  if ((param_2 == 0x201) || (param_2 == 0x203)) {
    iVar4 = (*DAT_0097b57c)(param_1 + 0x590,iVar1,iVar2);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xaf4);
      iVar5 = FUN_006ef6e0(iVar1,iVar2);
      *(int *)(param_1 + 0xaf4) = iVar5;
      iVar3 = *(int *)(*(int *)(param_1 + 0x58c) + 4);
      if (iVar5 == 0) {
        (**(code **)(iVar3 + 0x1c))(0);
      }
      else {
        (**(code **)(iVar3 + 0x1c))(1);
        *(undefined4 *)(param_1 + 0xafc) = 8000;
        if (param_2 == 0x203) {
          FUN_006f2a7a();
        }
      }
      if (*(int *)(param_1 + 0xaf4) != iVar4) {
        FUN_008161f1(0);
      }
      FUN_006f2797(param_4,param_5,iVar1,iVar2);
    }
    else {
      *(uint *)(param_1 + 0x5a0) = (uint)(*(int *)(param_1 + 0x5a0) == 0);
      *(undefined4 *)(param_1 + 0xafc) = 8000;
      FUN_0074d6fb();
      FUN_006f293e();
      FUN_008161f1(0);
    }
  }
  return;
}


