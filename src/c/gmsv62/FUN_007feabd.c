/* FUN_007feabd - 0x007feabd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007feabd(int param_1,undefined4 *param_2,undefined4 param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  int local_c;
  int local_8;
  
  iVar4 = DAT_00978138;
  fVar7 = (float10)FUN_004f1993(param_1 + 0xe0,*(undefined4 *)(param_1 + 0xf0));
  fVar8 = (float10)FUN_004f1993(param_2,param_2[4]);
  dVar1 = (double)((float10)(double)fVar7 - fVar8);
  if ((float10)(double)fVar7 - fVar8 == (float10)_DAT_008e8a80) goto LAB_007fec9a;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) + -4;
  }
  iVar2 = *(int *)(iVar2 + 0x84);
  iVar3 = *(int *)(*(int *)(param_1 + 0x110) + 0x20);
  local_8 = *(int *)(*(int *)(iVar4 + 0x34) + iVar3 * 8);
  local_c = *(int *)(*(int *)(iVar4 + 0x34) + 4 + iVar3 * 8);
  if (0x28 < local_c - local_8) {
    local_8 = local_8 + 0x14;
    local_c = local_c + -0x14;
  }
  iVar4 = param_1 + 0xe0;
  FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0xf0));
  if ((_DAT_008e8a80 <= dVar1) ||
     (fVar7 = (float10)FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0xf0)),
     (float10)_DAT_008e8a80 <= fVar7)) {
LAB_007feba0:
    if (dVar1 <= _DAT_008e8a80) goto LAB_007fec9a;
    fVar7 = (float10)FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0xf0));
    if (fVar7 <= (float10)*(double *)(*(int *)(param_1 + 0x110) + 0x40)) goto LAB_007fec9a;
    iVar3 = *(int *)(*(int *)(param_1 + 0x110) + 0x50);
    if (iVar3 != 0) {
      if (_DAT_008e8a80 < *(double *)(iVar3 + 0x30)) goto LAB_007fec9a;
      goto LAB_007febee;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x110) + 0x4c);
    if (iVar3 != 0) {
      if (_DAT_008e8a80 < *(double *)(iVar3 + 0x30)) goto LAB_007feba0;
LAB_007febee:
      if (((_DAT_008e8a80 < *(double *)(iVar3 + 0x38) * dVar1) &&
          (iVar4 = *(int *)(param_1 + 300), iVar3 = (**(code **)(*(int *)(iVar2 + 4) + 0x18))(),
          iVar3 == iVar4)) &&
         (((dVar1 < _DAT_008e8a80 && (local_8 < *(int *)(*(int *)(param_1 + 0x110) + 0xc))) ||
          ((_DAT_008e8a80 < dVar1 && (*(int *)(*(int *)(param_1 + 0x110) + 0x14) < local_c))))))
      goto LAB_007fec9a;
    }
  }
  fVar7 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  iVar4 = (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
  if (((double)*(int *)(iVar4 + 4) <= (double)fVar7) || (iVar4 = _rand(), iVar4 % 2 == 0)) {
    puVar6 = (undefined4 *)(param_1 + 0xe0);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(param_1 + 0x15c) = 1;
    return 0;
  }
LAB_007fec9a:
  uVar5 = FUN_007f39f4(param_2,param_3);
  return uVar5;
}


