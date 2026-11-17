/* FUN_00653821 - 0x00653821 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00653821(int param_1,uint *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  sVar1 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0x137);
  if (iVar2 == 0) {
    sVar1 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
    iVar2 = FUN_006545ca((int)sVar1,0x141);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_00650dae(param_1,0x30fb11,&DAT_00979628);
    uVar4 = -(uint)(iVar2 != 0) & _DAT_00979628;
  }
  else {
    iVar2 = FUN_00650dae(param_1,0x2f7471,&DAT_0097962c);
    uVar4 = -(uint)(iVar2 != 0) & _DAT_0097962c;
  }
  if ((uVar4 != 0) && (iVar2 != 0)) {
    if ((param_2 != (uint *)0x0) && (param_3 != (int *)0x0)) {
      *param_2 = uVar4;
      *param_3 = iVar2;
    }
    iVar2 = FUN_006509a1(iVar2);
    uVar3 = FUN_00413367(iVar2 + 0xf4,*(undefined4 *)(iVar2 + 0xfc));
    return uVar3;
  }
  return 0;
}


