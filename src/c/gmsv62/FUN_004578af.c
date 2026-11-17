/* FUN_004578af - 0x004578af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004578af(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    if (param_2 == 1) {
      uVar1 = 0;
      if (*(int *)(*(int *)(param_1 + 0x9c) + 0x48) != 0) {
        uVar1 = 2;
      }
      if (*(int *)(*(int *)(param_1 + 0xac) + 0x48) != 0) {
        uVar1 = uVar1 | 1;
      }
      if (*(int *)(*(int *)(param_1 + 0xa4) + 0x48) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((((*(int *)(param_1 + 0xb0) == 0) && (uVar1 != 2)) && (uVar1 != 1)) && (uVar1 != 4)) {
        FUN_0045f0f3(s_You_should_choose_only_one_of_th_009642cc,0xffffffff);
        FUN_007db3ad();
        return;
      }
    }
    *(int *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00815de9();
    }
  }
  return;
}


