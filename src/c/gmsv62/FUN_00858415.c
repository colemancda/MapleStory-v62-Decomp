/* FUN_00858415 - 0x00858415 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00858415(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  if ((*(int *)(param_1 + 0x2cac) == 0) || (*(int *)(param_1 + 0x2cd2) == 0)) {
LAB_008584a0:
    uVar3 = 1;
  }
  else {
    iVar4 = 0;
    for (uVar5 = 0;
        (iVar6 = *(int *)(param_1 + 0x2cbc), iVar6 != 0 && (uVar5 < *(uint *)(iVar6 + -4)));
        uVar5 = uVar5 + 1) {
      if (param_2 == *(int *)(iVar4 + 0x21 + iVar6)) goto LAB_008584a0;
      iVar4 = iVar4 + 0x25;
    }
    local_8 = 0;
    local_c = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x2cf8);
      iVar6 = 0;
      if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= local_8)) break;
      iVar1 = *(int *)(iVar4 + local_c + 0xc);
      param_2 = 0;
      while( true ) {
        if (iVar1 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar1 + -4);
        }
        if (iVar7 <= param_2) break;
        if (iVar2 == *(int *)(*(int *)(iVar4 + local_c + 0x10) + 0x21 + iVar6)) goto LAB_008584a0;
        param_2 = param_2 + 1;
        iVar6 = iVar6 + 0x25;
      }
      local_8 = local_8 + 1;
      local_c = local_c + 0x2a;
    }
    uVar3 = 0;
  }
  return uVar3;
}


