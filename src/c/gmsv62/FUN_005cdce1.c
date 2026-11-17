/* FUN_005cdce1 - 0x005cdce1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005cdce1(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x160) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x160) != 0) {
      return;
    }
    uVar2 = FUN_005d90ec(0x18705);
    *(undefined4 *)(param_1 + 0x160) = uVar2;
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar3 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffff);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
    }
    iVar3 = FUN_007d1e08();
    *(int *)(param_1 + 0x128) = iVar3 + 0x4b0;
  }
  iVar3 = *(int *)(param_1 + 0xf0);
  uVar5 = -(uint)(*(int *)(param_1 + 0xec) != 0) & *(int *)(param_1 + 0xec) - 0xcU;
  if ((*(int *)(param_1 + 0x274) == 0) || (iVar4 = *(int *)(param_1 + 0x160), iVar4 == 0)) {
    iVar4 = *(int *)(param_1 + 0x15c);
  }
  uVar2 = FUN_00413367(iVar4 + 0x40,*(undefined4 *)(iVar4 + 0x48));
  *(undefined4 *)(uVar5 + 0x238) = uVar2;
  if ((*(int *)(param_1 + 0x274) == 0) || (iVar4 = *(int *)(param_1 + 0x160), iVar4 == 0)) {
    iVar4 = *(int *)(param_1 + 0x15c);
  }
  uVar2 = FUN_00413367(iVar4 + 0x40,*(undefined4 *)(iVar4 + 0x48));
  *(undefined4 *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x238) = uVar2;
  FUN_005c55cd();
  FUN_005c5f28();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x348) = uVar2;
  FUN_005cde58();
  FUN_005cde58();
  FUN_005c5ab5(*(undefined4 *)(uVar5 + 0x140),1);
  if ((*(int *)(param_1 + 0x274) == 0) || (iVar3 = *(int *)(param_1 + 0x160), iVar3 == 0)) {
    iVar3 = *(int *)(param_1 + 0x15c);
  }
  uVar2 = FUN_00413367(iVar3 + 0x40,*(undefined4 *)(iVar3 + 0x48));
  FUN_005e4d3f(uVar2,uVar5);
  return;
}


