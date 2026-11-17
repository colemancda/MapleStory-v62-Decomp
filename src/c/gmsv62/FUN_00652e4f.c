/* FUN_00652e4f - 0x00652e4f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4
FUN_00652e4f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00650dae(param_1,param_2,param_3);
  if (param_4 != (undefined4 *)0x0) {
    if (iVar1 < 1) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_006509a1(iVar1);
      uVar3 = FUN_00413367(iVar2 + 0x13c,*(undefined4 *)(iVar2 + 0x144));
    }
    *param_4 = uVar3;
  }
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_006509a1(iVar1);
    uVar3 = FUN_00413367(iVar1 + 0x124,*(undefined4 *)(iVar1 + 300));
  }
  return uVar3;
}


