/* FUN_00652ec0 - 0x00652ec0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00652ec0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1 + 0x39;
  sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0x6f);
  if (iVar2 == 0) {
    sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
    iVar2 = FUN_006545ca((int)sVar1,0x79);
    if (iVar2 == 0) {
      sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
      iVar3 = FUN_006545ca((int)sVar1,0x1a5);
      if (iVar3 == 0) {
        return 100;
      }
      iVar3 = FUN_00650dae(param_1,0x403d50,&DAT_0097967c);
    }
    else {
      iVar3 = FUN_00650dae(param_1,0x127691,&DAT_00979680);
    }
  }
  else {
    iVar3 = FUN_00650dae(param_1,0x10eff1,&DAT_00979684);
  }
  if (iVar3 == 0) {
    return 100;
  }
  iVar3 = FUN_006509a1(iVar3);
  uVar4 = FUN_00413367(iVar3 + 0x13c,*(undefined4 *)(iVar3 + 0x144));
  return uVar4;
}


