/* FUN_005d6574 - 0x005d6574 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005d6574(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *local_8;
  
  uVar3 = param_1[10];
  local_8 = param_1;
joined_r0x005d657e:
  do {
    if (uVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    iVar1 = FUN_005c4e46();
  } while (iVar1 == 0);
  piVar2 = (int *)FUN_005c9ce2(&local_8);
  uVar4 = -(uint)(*piVar2 != 0) & *piVar2 - 0xcU;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (param_2 != 0) goto code_r0x005d65da;
  goto LAB_005d65f0;
code_r0x005d65da:
  if (uVar4 != 0) {
    if (*(int *)(uVar4 + 0x240) == 0) {
LAB_005d65f0:
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x240) != param_3)) goto joined_r0x005d657e;
      uVar6 = 0;
      iVar1 = 0;
      uVar5 = 0;
    }
    else {
      uVar6 = 1;
      uVar5 = 1;
      iVar1 = param_3;
    }
    FUN_005cc3d9(uVar5,iVar1,uVar6);
  }
  goto joined_r0x005d657e;
}


