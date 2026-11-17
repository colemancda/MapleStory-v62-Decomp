/* FUN_0065308e - 0x0065308e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065308e(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x39;
  sVar1 = FUN_0045f084(iVar4,*(undefined4 *)(param_1 + 0x3d));
  if ((int)sVar1 / 100 == 2) {
    FUN_0045f03e(param_1 + 0x33,*(undefined4 *)(param_1 + 0x35));
    FUN_00650dae(param_1,2000000,&DAT_0097966c);
    uVar2 = __ftol();
    return uVar2;
  }
  sVar1 = FUN_0045f084(iVar4,*(undefined4 *)(param_1 + 0x3d));
  iVar3 = FUN_006545ca((int)sVar1,0x19a);
  if (iVar3 == 0) {
    sVar1 = FUN_0045f084(iVar4,*(undefined4 *)(param_1 + 0x3d));
    iVar3 = FUN_006545ca((int)sVar1,0x1a4);
    if (iVar3 == 0) {
      sVar1 = FUN_0045f084(iVar4,*(undefined4 *)(param_1 + 0x3d));
      iVar3 = FUN_006545ca((int)sVar1,0x6f);
      if (iVar3 == 0) {
        sVar1 = FUN_0045f084(iVar4,*(undefined4 *)(param_1 + 0x3d));
        iVar4 = FUN_006545ca((int)sVar1,0x79);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = FUN_00650dae(param_1,0x127690,&DAT_0097965c);
      }
      else {
        iVar4 = FUN_00650dae(param_1,0x10eff0,&DAT_00979660);
      }
    }
    else {
      iVar4 = FUN_00650dae(param_1,0x401641,&DAT_00979664);
    }
  }
  else {
    iVar4 = FUN_00650dae(param_1,0x3e8fa2,&DAT_00979668);
  }
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_006509a1(iVar4);
  uVar2 = FUN_00413367(iVar4 + 0x10,*(undefined4 *)(iVar4 + 0x18));
  return uVar2;
}


