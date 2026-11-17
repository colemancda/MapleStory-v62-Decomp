/* FUN_004c07b9 - 0x004c07b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c07b9(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  if ((DAT_00979178 == 0) && (iVar2 = FUN_004c2076(1), iVar2 != 0)) {
    local_8 = DAT_00978368;
    iVar2 = FUN_004becbc(500,0);
    if ((iVar2 != 0) && (iVar2 = FUN_006c15c2(param_3,param_4), iVar2 != 0)) {
      FUN_00455c59(local_10);
      if (local_c != 0) {
        FUN_0045e7c2(0);
      }
      if ((*(int *)(param_2 + 0x59c) == *(int *)(param_1 + 0x10)) &&
         (*(int *)(param_1 + 0x14) != iVar2)) {
        iVar3 = FUN_00458c4f(local_10,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
        piVar1 = *(int **)(iVar3 + 4);
        if (local_c != 0) {
          FUN_00449913(0);
          local_c = 0;
        }
        if ((piVar1 != (int *)0x0) &&
           ((iVar3 = FUN_004c24cb(piVar1), iVar3 != 0 ||
            (iVar3 = (**(code **)(*piVar1 + 0x18))(), 0 < iVar3)))) {
          FUN_008347d4(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),iVar2,
                       0xffffffff);
          return 1;
        }
      }
    }
  }
  return 0;
}


