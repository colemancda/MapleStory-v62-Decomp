/* FUN_007acc95 - 0x007acc95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007acc95(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((((param_2 != 0) && (0 < param_3)) &&
      ((uVar1 = FUN_0045e4b8(), (uVar1 & 1) != 0 ||
       (iVar2 = FUN_00429303(), (*(byte *)(iVar2 + 0x108) & 2) == 0)))) &&
     ((((iVar2 = FUN_007b3bb4(), iVar2 == 0 && (iVar2 = FUN_007a3f46(), iVar2 == 0)) &&
       (*(int *)(param_1 + 0x1e64) == 0)) &&
      ((iVar2 = FUN_007a44df(), iVar2 == 0 && (uVar1 = FUN_0043f6fe(), 0x7fffffff < uVar1)))))) {
    iVar2 = FUN_006509a1(param_3);
    iVar2 = FUN_00413367(iVar2 + 0xe8,*(undefined4 *)(iVar2 + 0xf0));
    iVar3 = FUN_007d1e08();
    *(int *)(param_1 + 0x2450) = iVar3 + iVar2 * 1000;
    uVar1 = -(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU;
    if (((*(int *)(uVar1 + 0x110) != 0) ||
        (iVar2 = FUN_0048bb31(uVar1 + 0x11c,*(undefined4 *)(uVar1 + 0x124)), iVar2 != 0)) &&
       (iVar2 = FUN_007bd07c(param_2,param_3,0,0xffffffff,0,0,0), iVar2 != 0)) {
      FUN_00790b31(param_2,param_3,6,0,0x7fffffff);
      iVar2 = FUN_006509a1(param_3);
      uVar4 = FUN_00413367(iVar2 + 0x13c,*(undefined4 *)(iVar2 + 0x144));
      *(undefined4 *)(uVar1 + 0x174) = uVar4;
      *(undefined4 *)(uVar1 + 0x168) = 1;
      return 1;
    }
  }
  return 0;
}


