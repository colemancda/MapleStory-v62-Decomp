/* FUN_00801ba0 - 0x00801ba0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_00801ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  
  iVar4 = DAT_00978138;
  if ((*(int *)(param_1 + 0x248) != 3) && (*(int *)(param_1 + 0x248) != 4)) {
    uVar5 = FUN_007f3054(param_2,param_3,param_4);
    return uVar5;
  }
  bVar2 = false;
  bVar3 = false;
  iVar1 = param_1 + 0x20;
  fVar7 = (float10)FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
  iVar6 = *(int *)(iVar4 + 0x24);
  if ((float10)iVar6 <= fVar7) {
    fVar7 = (float10)FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
    iVar6 = *(int *)(iVar4 + 0x2c) + -1;
    if ((float10)iVar6 < fVar7) goto LAB_00801c1f;
  }
  else {
LAB_00801c1f:
    uVar5 = FUN_004f1a11((double)iVar6);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    bVar2 = true;
  }
  fVar7 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  iVar6 = *(int *)(iVar4 + 0x28);
  if ((float10)iVar6 <= fVar7) {
    fVar7 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    iVar6 = *(int *)(iVar4 + 0x30) + -1;
    if (fVar7 <= (float10)iVar6) goto LAB_00801c93;
  }
  uVar5 = FUN_004f1a11((double)iVar6);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  bVar3 = true;
LAB_00801c93:
  if (bVar2) {
    fVar7 = (float10)FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
    if (fVar7 == (float10)*(int *)(iVar4 + 0x24)) {
      FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
    }
    else {
      FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
    }
    uVar5 = __ftol();
    *(undefined4 *)(param_1 + 0x254) = uVar5;
  }
  if (bVar3) {
    fVar7 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    if (fVar7 == (float10)*(int *)(iVar4 + 0x28)) {
      FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
    }
    else {
      FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    }
    uVar5 = __ftol();
    *(undefined4 *)(param_1 + 600) = uVar5;
  }
  return 0;
}


