/* FUN_0064a5ca - 0x0064a5ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0064a5ca(int *param_1,uint param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + -4);
  }
  if (uVar3 < param_2) {
    uVar2 = FUN_0064ba6f();
    if (uVar2 < param_2) {
      iVar1 = FUN_004029b9(param_2 * 0x40 + 4);
      iVar1 = iVar1 + 4;
      if ((param_3 & 2) == 0) {
        for (uVar2 = uVar3 * 0x40 + iVar1; uVar2 < param_2 * 0x40 + iVar1; uVar2 = uVar2 + 0x40) {
          FUN_0064a6e0(uVar2);
        }
      }
      if (*param_1 != 0) {
        if ((param_3 & 1) == 0) {
          FUN_00879c20(iVar1,*param_1,uVar3 << 6);
        }
        FUN_00402b41(*param_1 + -4);
      }
      *param_1 = iVar1;
    }
    else if ((param_3 & 2) == 0) {
      iVar1 = *param_1;
      for (uVar3 = uVar3 * 0x40 + iVar1; uVar3 < param_2 * 0x40 + iVar1; uVar3 = uVar3 + 0x40) {
        FUN_0064a6e0(uVar3);
      }
    }
  }
  else {
    for (uVar2 = param_2 * 0x40 + iVar1; uVar2 < uVar3 * 0x40 + iVar1; uVar2 = uVar2 + 0x40) {
      FUN_00645bc9();
    }
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = param_2;
  }
  return *param_1;
}


