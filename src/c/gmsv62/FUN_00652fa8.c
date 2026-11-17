/* FUN_00652fa8 - 0x00652fa8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00652fa8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = param_1 + 0x39;
  sVar1 = FUN_0045f084(iVar2,*(undefined4 *)(param_1 + 0x3d));
  if ((int)sVar1 / 100 == 1) {
    iVar2 = FUN_00650dae(param_1,1000000,&DAT_00979678);
  }
  else {
    sVar1 = FUN_0045f084(iVar2,*(undefined4 *)(param_1 + 0x3d));
    iVar3 = FUN_006545ca((int)sVar1,0x19a);
    if (iVar3 == 0) {
      sVar1 = FUN_0045f084(iVar2,*(undefined4 *)(param_1 + 0x3d));
      iVar2 = FUN_006545ca((int)sVar1,0x1a4);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_00650dae(param_1,0x401641,&DAT_00979670);
    }
    else {
      iVar2 = FUN_00650dae(param_1,0x3e8fa2,&DAT_00979674);
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_006509a1(iVar2);
  uVar4 = FUN_00413367(iVar2 + 4,*(undefined4 *)(iVar2 + 0xc));
  return uVar4;
}


