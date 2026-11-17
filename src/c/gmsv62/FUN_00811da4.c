/* FUN_00811da4 - 0x00811da4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00811da4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x48))(param_4,param_5,&param_5,&param_2);
    if (iVar1 != 0) {
      if (param_5 == 0) {
        *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
        *(int *)(param_1 + 0xc4) = param_2;
      }
      else {
        *(int *)(param_1 + 0xc0) = param_2;
        *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
      }
      FUN_008161f1(0);
    }
  }
  else if (param_2 == 0x203) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x48))(param_4,param_5,&param_2,&param_5);
    if (((iVar1 != 0) && (param_2 != 0)) && (param_5 == *(int *)(param_1 + 0xc0))) {
      FUN_00812350();
    }
  }
  return;
}


