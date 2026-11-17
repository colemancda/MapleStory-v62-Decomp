/* FUN_004c1577 - 0x004c1577 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004c1577(int param_1)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if (((*(int **)(param_1 + 0x1c) == (int *)0x0) ||
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))(), iVar2 == 0)) ||
     (*(int *)(param_1 + 0x1c) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c) + -4;
  }
  if (iVar2 != 0) {
    FUN_00455c59();
    if (local_8 != 0) {
      FUN_0045e7c2();
    }
    piStack_24 = &local_c;
    uStack_28 = 0x4c15df;
    iVar2 = FUN_00458c4f();
    piVar1 = *(int **)(iVar2 + 4);
    if (local_8 != 0) {
      FUN_00449913();
      local_8 = 0;
    }
    iVar2 = (**(code **)(*piVar1 + 4))();
    uStack_2c = extraout_ECX;
    if ((iVar2 == 0) && (piVar1[6] == 0 && piVar1[7] == 0)) {
      piStack_24 = (int *)0x4c1615;
      LVar3 = CompareFileTime((FILETIME *)(piVar1 + 8),(FILETIME *)&DAT_008ea2a0);
      uStack_2c = extraout_ECX_00;
      if (-1 < LVar3) {
        iVar2 = FUN_0045e2eb();
        uStack_2c = 100;
        if (iVar2 / 100 != 0x2b73) {
          if (*(int *)(param_1 + 0x10) == 1) {
LAB_004c164c:
            uStack_28 = 0x4c165b;
            piStack_24 = piVar1;
            uVar4 = FUN_006c47ee();
            return uVar4;
          }
          iVar2 = FUN_0045e2eb();
          uStack_2c = 10000;
          if (iVar2 / 10000 == 0xcf) goto LAB_004c164c;
        }
      }
    }
    piStack_24 = (int *)0x0;
    uStack_28 = 0;
    FUN_00679d22(&uStack_2c,0xd13);
    FUN_007db3ad();
  }
  return 0;
}


