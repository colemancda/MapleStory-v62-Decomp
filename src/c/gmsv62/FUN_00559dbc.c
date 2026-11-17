/* FUN_00559dbc - 0x00559dbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00559dbc(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_00980b5c & 1) == 0) {
    DAT_00980b5c = DAT_00980b5c | 1;
    FUN_00679d86(&DAT_00980b60,0x881);
    FUN_008796d0(&LAB_00559e85);
  }
  if ((DAT_00980b5c & 2) == 0) {
    DAT_00980b5c = DAT_00980b5c | 2;
    _DAT_00980b64 = FUN_0087a007(DAT_00980b60);
  }
  iVar1 = *param_1;
  while( true ) {
    iVar1 = (**(code **)(iVar1 + 0xc))(param_1,1,param_2,param_3);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = FUN_0087b57c(iVar1,0x2e);
    if (iVar2 == 0) break;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar1 + -4) >> 1;
    }
    iVar1 = FUN_0087c71f(iVar1 + (uVar3 - _DAT_00980b64) * 2,DAT_00980b60);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_00402bc3(param_2);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    iVar1 = *param_1;
  }
  return 1;
}


