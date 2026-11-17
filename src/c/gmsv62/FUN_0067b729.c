/* FUN_0067b729 - 0x0067b729 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0067b729(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00413367(param_1 + 0xc4,*(undefined4 *)(param_1 + 0xcc));
  uVar3 = 1;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1 & 1;
  }
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 != 1) {
    if ((iVar2 == 2) || (iVar2 != 6)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
  }
  iVar2 = FUN_00413367(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
  if (-1 < iVar2) {
    uVar3 = FUN_00413367(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
  }
  return uVar3;
}


