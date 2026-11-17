/* FUN_005b2752 - 0x005b2752 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_005b2752(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x6fc) != 0) && (*(int *)(param_1 + 0x704) == 1)) &&
      (*(int *)(param_1 + 0x744) < 2)) && (*(int *)(param_1 + 0x71c) < 0x2711)) {
    iVar1 = FUN_005b752b(param_4,param_5);
    if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x740))) &&
       ((*(int *)(*(int *)(param_1 + 0x1fc) + iVar1 * 4) != -1 &&
        (iVar1 != *(int *)(param_1 + 0x738))))) {
      if (param_2 == 0x202) {
        if (*(int *)(param_1 + 0x1c0) != 0) {
          FUN_005b950f();
        }
        if (*(int *)(param_1 + 0x744) == 0) {
          FUN_005b289c(iVar1,1);
          FUN_005b75a5(iVar1,0);
          *(undefined4 *)(param_1 + 0x744) = 1;
          *(int *)(param_1 + 0x738) = iVar1;
        }
        else if (*(int *)(param_1 + 0x744) == 1) {
          FUN_005b289c(iVar1,0);
          *(undefined4 *)(param_1 + 0x744) = 2;
          *(int *)(param_1 + 0x73c) = iVar1;
        }
      }
      else if ((param_2 == 0x201) && (*(int *)(param_1 + 0x1c0) == 0)) {
        FUN_005b93c2(iVar1);
      }
      FUN_008161f1(0);
    }
  }
  return;
}


