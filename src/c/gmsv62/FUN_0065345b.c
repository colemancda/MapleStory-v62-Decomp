/* FUN_0065345b - 0x0065345b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065345b(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_00979644 & 1) == 0) {
    DAT_00979644 = DAT_00979644 | 1;
    DAT_00979640 = FUN_0064d61f(2100000);
  }
  if ((DAT_00979644 & 2) == 0) {
    DAT_00979644 = DAT_00979644 | 2;
    DAT_0097963c = FUN_0064d61f(2200000);
  }
  if ((DAT_00979644 & 4) == 0) {
    DAT_00979644 = DAT_00979644 | 4;
    DAT_00979638 = FUN_0064d61f(2300000);
  }
  *param_4 = 0;
  *param_3 = 0;
  if (param_2 == 2) {
    iVar1 = FUN_00650dae(param_1,2100000,0);
    if (iVar1 != 0) {
      iVar2 = FUN_006509a1(iVar1);
      uVar3 = FUN_00413367(iVar2 + 0xf4,*(undefined4 *)(iVar2 + 0xfc));
      *param_3 = uVar3;
      iVar1 = FUN_006509a1(iVar1);
      uVar3 = FUN_00413367(iVar1 + 0x13c,*(undefined4 *)(iVar1 + 0x144));
      *param_4 = uVar3;
      return 2100000;
    }
    iVar1 = FUN_00650dae(param_1,2200000,0);
    if (iVar1 != 0) {
      iVar2 = FUN_006509a1(iVar1);
      uVar3 = FUN_00413367(iVar2 + 0xf4,*(undefined4 *)(iVar2 + 0xfc));
      *param_3 = uVar3;
      iVar1 = FUN_006509a1(iVar1);
      uVar3 = FUN_00413367(iVar1 + 0x13c,*(undefined4 *)(iVar1 + 0x144));
      *param_4 = uVar3;
      return 2200000;
    }
    iVar1 = FUN_00650dae(param_1,2300000,0);
    if (iVar1 != 0) {
      iVar2 = FUN_006509a1(iVar1);
      uVar3 = FUN_00413367(iVar2 + 0xf4,*(undefined4 *)(iVar2 + 0xfc));
      *param_3 = uVar3;
      iVar1 = FUN_006509a1(iVar1);
      uVar3 = FUN_00413367(iVar1 + 0x13c,*(undefined4 *)(iVar1 + 0x144));
      *param_4 = uVar3;
      return 2300000;
    }
  }
  return 0;
}


