/* FUN_00653a70 - 0x00653a70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00653a70(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 < 1) {
    return 0;
  }
  if (7 < param_2) {
    return 0;
  }
  iVar3 = param_1 + 0x39;
  sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0x83);
  if (iVar2 == 0) {
    sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
    iVar2 = FUN_006545ca((int)sVar1,0xd3);
    if (iVar2 != 0) {
      iVar3 = FUN_00650dae(param_1,0x203230,&DAT_00979618);
      if (iVar3 == 0) {
        return 0;
      }
      if ((param_2 != 2) && (param_2 != 4)) {
        return 0;
      }
      goto LAB_00653ad2;
    }
    sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
    iVar2 = FUN_006545ca((int)sVar1,0xdd);
    if (iVar2 != 0) {
      iVar3 = FUN_00650dae(param_1,0x21b8d0,&DAT_00979614);
      if (iVar3 == 0) {
        return 0;
      }
      if ((param_2 != 1) && (param_2 != 3)) {
        return 0;
      }
      goto LAB_00653ad2;
    }
    sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
    iVar3 = FUN_006545ca((int)sVar1,0xe7);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00650dae(param_1,0x233f70,&DAT_00979610);
  }
  else {
    iVar3 = FUN_00650dae(param_1,0x13fd30,&DAT_0097961c);
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_00653ad2:
  iVar3 = FUN_006509a1(iVar3);
  uVar4 = FUN_00413367(iVar3 + 0x13c,*(undefined4 *)(iVar3 + 0x144));
  return uVar4;
}


