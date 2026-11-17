/* FUN_004351a1 - 0x004351a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_004351a1(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uStack_8;
  
  piVar1 = (int *)(param_1 + 0x10);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + -4);
  }
  uStack_8 = param_1;
  if (uVar5 <= *(uint *)(param_1 + 0xc)) {
    iVar4 = *(int *)(param_1 + 8);
    if ((iVar4 == 0) && (*piVar1 != 0)) {
      iVar4 = *(int *)(*piVar1 + -4);
    }
    iVar3 = 0;
    if (*piVar1 != 0) {
      iVar3 = *(int *)(*piVar1 + -4);
    }
    iVar3 = iVar3 + iVar4;
    if (iVar3 == 0) {
      iVar3 = 4;
    }
    FUN_00438a07(iVar3,0,(int)&uStack_8 + 3);
  }
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar4 = FUN_0043ae51(0);
  *(undefined4 *)(iVar4 + 4) = uVar2;
  uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
  *(uint *)(*piVar1 + *(int *)(param_1 + 0xc) * 4) = uVar5;
  uVar6 = -(uint)(uVar5 != 0) & uVar5 - 0x10;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(-(uint)(uVar6 != 0) & uVar6 + 0x10);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*param_2);
  *(undefined4 *)(this + 4) = param_2[1];
  *(undefined4 *)(this + 8) = param_2[2];
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_00438aad();
  return uVar5;
}


