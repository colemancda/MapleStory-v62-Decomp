/* FUN_005cfefc - 0x005cfefc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005cfefc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = param_1 + 0x340;
  iVar1 = FUN_00413367(iVar2,*(undefined4 *)(param_1 + 0x348));
  if ((((iVar1 < 0xc) || (0x14 < iVar1)) &&
      ((iVar1 = FUN_00413367(iVar2,*(undefined4 *)(param_1 + 0x348)), iVar1 < 0x15 || (0x19 < iVar1)
       ))) && ((iVar2 = FUN_00413367(iVar2,*(undefined4 *)(param_1 + 0x348)), iVar2 < 6 ||
               (8 < iVar2)))) {
    if ((*(int *)(param_1 + 0x274) == 0) || (iVar2 = *(int *)(param_1 + 0x160), iVar2 == 0)) {
      iVar2 = *(int *)(param_1 + 0x15c);
    }
    iVar2 = FUN_00413367(iVar2 + 0x10c,*(undefined4 *)(iVar2 + 0x114));
    if (iVar2 <= param_2) {
      iVar2 = FUN_005cdcb1();
      if (iVar2 != 0) {
        param_2 = FUN_007d1e08();
        iVar2 = FUN_00413367(param_1 + 0x358,*(undefined4 *)(param_1 + 0x360));
        if (param_2 <= iVar2 + 10000) {
          return;
        }
      }
      uVar3 = FUN_005c9cb2();
      uVar4 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x348) = uVar4;
      FUN_005c5f49();
      iVar2 = FUN_005c6409(uVar3);
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x354) = uVar3;
      if (iVar2 + param_2 == 0) {
        FUN_00413367(param_1 + 0x34c,uVar3);
        uVar3 = FUN_004133b5();
        *(undefined4 *)(param_1 + 0x354) = uVar3;
      }
      FUN_00413367(param_1 + 0x34c,*(undefined4 *)(param_1 + 0x354));
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x360) = uVar3;
    }
  }
  return;
}


