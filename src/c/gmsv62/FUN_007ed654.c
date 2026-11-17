/* FUN_007ed654 - 0x007ed654 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_007ed654(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_14 [16];
  
  if (param_2 == 0x201) {
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar1 = FUN_007e6ce4(*(undefined4 *)(param_1 + 0x90));
      (*DAT_0097b504)(local_14,0,0,uVar1);
      iVar2 = (*DAT_0097b57c)(local_14,param_4,param_5);
      if (iVar2 != 0) {
        uVar1 = 0;
        if (*(int *)(param_1 + 0x678) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x678) + -4);
        }
        *(undefined4 *)(param_1 + 0x684) = uVar1;
      }
    }
    if (*(int *)(param_1 + 0x70) == 4) {
      FUN_007ed72c(param_4,param_5);
      if (*(int *)(param_1 + 0xd4) != -1) {
        uVar3 = 0;
        while( true ) {
          iVar2 = *(int *)(param_1 + 0xdc);
          if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= uVar3)) goto LAB_007ed6fb;
          if (*(int *)(*(int *)(iVar2 + uVar3 * 4) + 0x28) == *(int *)(param_1 + 0xd4)) break;
          uVar3 = uVar3 + 1;
        }
        *(uint *)(param_1 + 0xd8) = uVar3;
LAB_007ed6fb:
        (**(code **)(*(int *)(param_1 + -4) + 0x34))(1);
        return;
      }
    }
    FUN_0074d6fb();
  }
  return;
}


