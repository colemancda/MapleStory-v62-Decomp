/* FUN_0072f360 - 0x0072f360 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0072f360(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_1 + 0x15c;
  iVar1 = FUN_00413367(iVar2,*(undefined4 *)(param_1 + 0x164));
  if (iVar1 < 0) {
    iVar2 = FUN_00413367(iVar2,*(undefined4 *)(param_1 + 0x164));
  }
  else {
    iVar1 = FUN_00413367(iVar2,*(undefined4 *)(param_1 + 0x164));
    piVar3 = (int *)FUN_004c2648();
    iVar2 = *piVar3;
    if (iVar2 < iVar1) goto LAB_0072f3b3;
  }
  iVar1 = iVar2;
LAB_0072f3b3:
  iVar2 = FUN_00413367(param_1 + 0x150,*(undefined4 *)(param_1 + 0x158));
  return iVar2 + iVar1;
}


