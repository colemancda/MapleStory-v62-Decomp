/* FUN_0086d170 - 0x0086d170 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0086d170(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x24;
  uVar2 = FUN_00875080(&DAT_0096df94);
  FUN_0086cff0(iVar1,uVar2);
  FUN_0086ea60();
  FUN_0086eb40();
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_00874040(0x8b1,0x612,param_2);
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = FUN_00875080(&DAT_0096df74,*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    FUN_0086cff0(iVar1,uVar2);
    iVar3 = FUN_0086698a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (iVar3 == 0) {
      uVar2 = FUN_00875080(&DAT_0096df58);
      FUN_0086cff0(iVar1,uVar2);
    }
  }
  uVar2 = FUN_00875080(&DAT_0096df38);
  FUN_0086cff0(iVar1,uVar2);
  return;
}


