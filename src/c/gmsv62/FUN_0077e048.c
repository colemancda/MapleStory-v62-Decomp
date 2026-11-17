/* FUN_0077e048 - 0x0077e048 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0077e048(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0x201) {
    if (param_2 == 0x203) {
      iVar1 = *(int *)(param_1 + 0x584);
      if (iVar1 == 0) {
        FUN_0076be33();
      }
      else if (iVar1 == 1) {
        FUN_0076f79c();
      }
      else if (iVar1 == 2) {
        FUN_00772890();
      }
    }
    goto LAB_0077e1fa;
  }
  iVar1 = *(int *)(param_1 + 0x814);
  iVar4 = *(int *)(param_1 + 0x584);
  if (iVar4 == 0) {
    uVar2 = FUN_0076bf4c(param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38),1,1);
LAB_0077e19b:
    *(undefined4 *)(param_1 + 0x814) = uVar2;
  }
  else {
    if (iVar4 == 1) {
      uVar2 = FUN_0076f974(param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38));
      goto LAB_0077e19b;
    }
    if (iVar4 == 2) {
      uVar2 = FUN_00772c1c(param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38));
      *(undefined4 *)(param_1 + 0x814) = uVar2;
      FUN_00772b34(1,param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38));
      FUN_00772b34(0,param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38));
    }
    else if (iVar4 == 3) {
      uVar2 = FUN_0077696b(param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38));
      *(undefined4 *)(param_1 + 0x814) = uVar2;
      iVar4 = 0;
      while( true ) {
        iVar3 = 0;
        if (*(int *)(DAT_00978368 + 0x2cf8) != 0) {
          iVar3 = *(int *)(*(int *)(DAT_00978368 + 0x2cf8) + -4);
        }
        if (iVar3 + 1 <= iVar4) break;
        FUN_0077688d(iVar4,param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38));
        iVar4 = iVar4 + 1;
      }
    }
    else if (iVar4 == 4) {
      uVar2 = FUN_0077a9d2(param_4,param_5,*(undefined4 *)(*(int *)(param_1 + 0x580) + 0x38));
      goto LAB_0077e19b;
    }
  }
  if (*(int *)(param_1 + 0x814) != iVar1) {
    FUN_008161f1(0);
  }
LAB_0077e1fa:
  FUN_0074d6fb();
  return;
}


