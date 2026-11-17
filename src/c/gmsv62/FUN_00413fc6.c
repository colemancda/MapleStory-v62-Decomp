/* FUN_00413fc6 - 0x00413fc6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00413fc6(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar7 = *(int *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x14)) goto LAB_00413ff6;
    iVar7 = *(int *)(param_1 + 8) * 2 + 1;
  }
  if (iVar7 != 0) {
    FUN_00419781(iVar7,0);
  }
LAB_00413ff6:
  uVar4 = 0;
  iVar7 = 3;
  piVar6 = param_2;
  do {
    iVar2 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar7 = iVar7 + -1;
    uVar4 = uVar4 * 0x20 + 1 + iVar2;
  } while (iVar7 != 0);
  uVar4 = uVar4 % *(uint *)(param_1 + 8);
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar4 * 4);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4);
  while( true ) {
    if (puVar5 == (undefined4 *)0x0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      puVar5 = (undefined4 *)FUN_0041a632();
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar3 = *puVar1;
        *puVar5 = &PTR_LAB_008e8690;
        puVar5[1] = uVar3;
        puVar5[2] = *param_2;
        puVar5[3] = param_2[1];
        puVar5[4] = param_2[2];
        puVar5[6] = 0;
        *puVar5 = &PTR_FUN_008e868c;
      }
      if (param_3 != 0) {
        FUN_0041283f(param_3);
      }
      *puVar1 = puVar5;
      return puVar5;
    }
    iVar7 = _memcmp(puVar5 + 2,param_2,0xc);
    if (iVar7 == 0) break;
    puVar5 = (undefined4 *)puVar5[1];
  }
  if (param_3 == 0) {
    return puVar5;
  }
  FUN_0041283f(param_3);
  return puVar5;
}


