/* FUN_00653c22 - 0x00653c22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00653c22(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0x137);
  if (iVar2 == 0) {
    sVar1 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
    iVar2 = FUN_006545ca((int)sVar1,0x141);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_00650dae(param_1,0x30fb10,&DAT_00979608);
  }
  else {
    iVar2 = FUN_00650dae(param_1,0x2f7470,&DAT_0097960c);
  }
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_006509a1(iVar2);
  uVar3 = FUN_00413367(iVar2 + 0x70,*(undefined4 *)(iVar2 + 0x78));
  return uVar3;
}


