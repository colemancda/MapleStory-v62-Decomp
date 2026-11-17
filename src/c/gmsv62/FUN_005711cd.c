/* FUN_005711cd - 0x005711cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_005711cd(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_4;
  local_8 = param_5;
  if (param_2 == 0x201) {
    if (((*(int *)(param_1 + 0xf0) + -1) / 3 + 1 < 2) ||
       (iVar1 = FUN_00570fb5(&DAT_00965790,&local_c), iVar1 == 0)) {
      if (((*(int *)(param_1 + 0xf0) + -1) / 3 + 1 < 2) ||
         (iVar1 = FUN_00570fb5(&DAT_009657a0,&local_c), iVar1 == 0)) {
        iVar1 = FUN_00571aaa(local_c,local_8);
        if (iVar1 < 0) {
          return;
        }
      }
      else {
        iVar1 = ((*(int *)(param_1 + 0xf4) + 1) % ((*(int *)(param_1 + 0xf0) + -1) / 3 + 1)) * 3;
      }
    }
    else {
      iVar1 = (*(int *)(param_1 + 0xf0) + -1) / 3;
      iVar3 = (*(int *)(param_1 + 0xf4) + iVar1) % (iVar1 + 1);
      iVar1 = 2;
      puVar2 = (undefined4 *)(param_1 + (iVar3 * 3 + 0x1b) * 4);
      do {
        if (*(int *)*puVar2 != 0) break;
        iVar1 = iVar1 + -1;
        puVar2 = puVar2 + -1;
      } while (-1 < iVar1);
      iVar1 = iVar1 + iVar3 * 3;
    }
    FUN_005719f2(iVar1);
  }
  else if ((param_2 == 0x203) && (iVar1 = FUN_00571aaa(param_4,param_5), -1 < iVar1)) {
    FUN_005665b3();
  }
  return;
}


