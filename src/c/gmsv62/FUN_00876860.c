/* FUN_00876860 - 0x00876860 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00876860(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = 0;
  if (0xf < (int)param_2) {
    uVar4 = param_2 >> 4;
    iVar2 = uVar4 * 0x10;
    param_2 = param_2 + uVar4 * -0x10;
    iVar3 = param_1;
    do {
      FUN_008768f0(iVar3,param_3);
      iVar3 = iVar3 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_2 != 0) {
    if ((int)param_2 < 0x10) {
      uVar1 = 0x10 - param_2;
      puVar5 = (undefined4 *)(iVar2 + param_1 + param_2);
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      param_2 = param_2 + uVar1;
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    FUN_008768f0(iVar2 + param_1,param_3);
    return param_2 + iVar2;
  }
  return iVar2;
}


