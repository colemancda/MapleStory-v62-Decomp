/* FUN_0065321e - 0x0065321e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0065321e(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x39;
  sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
  if ((int)sVar1 / 100 == 1) {
    iVar3 = FUN_00650dae(param_1,0xf4242,&DAT_00979658);
  }
  else {
    if ((int)sVar1 / 100 != 4) {
      return 0;
    }
    sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
    iVar2 = FUN_006545ca((int)sVar1,0x19a);
    if (iVar2 == 0) {
      sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
      iVar3 = FUN_006545ca((int)sVar1,0x1a4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00650dae(param_1,0x401641,&DAT_00979650);
    }
    else {
      iVar3 = FUN_00650dae(param_1,0x3e8fa2,&DAT_00979654);
    }
  }
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_006509a1(iVar3);
  iVar3 = FUN_00413367(iVar3 + 0xe8,*(undefined4 *)(iVar3 + 0xf0));
  return iVar3 * 1000;
}


