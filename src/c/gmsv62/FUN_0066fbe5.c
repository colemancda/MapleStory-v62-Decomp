/* FUN_0066fbe5 - 0x0066fbe5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0066fbe5(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = FUN_00650dae(param_1,&LAB_0040413b_2,&local_c);
  iVar2 = __ftol();
  if ((local_c != 0) && (iVar1 != 0)) {
    iVar1 = FUN_006509a1(iVar1);
    local_8 = iVar2 / 2;
    iVar3 = FUN_00413367(iVar1 + 0x13c,*(undefined4 *)(iVar1 + 0x144));
    iVar4 = FUN_00413367(param_1 + 0xa5,*(undefined4 *)(param_1 + 0xad));
    if (iVar4 < ((iVar2 / 2) * iVar3) / 100) {
      iVar2 = FUN_00413367(param_1 + 0xa5,*(undefined4 *)(param_1 + 0xad));
      local_8 = FUN_00413367(iVar1 + 0x13c,*(undefined4 *)(iVar1 + 0x144));
      local_8 = (iVar2 * 100) / local_8;
    }
  }
  return local_8;
}


