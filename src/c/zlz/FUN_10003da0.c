/* FUN_10003da0 - 0x10003da0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


uint * __thiscall FUN_10003da0(void *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  void *unaff_EBX;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000c568;
  pvStack_c = ExceptionList;
  if (param_1 < 0x21) {
    uVar8 = (uint)(0x10 < param_1);
LAB_10003df0:
    if ((int)uVar8 < 0) {
      ExceptionList = &pvStack_c;
      uVar3 = (*DAT_10016c7c)(0,param_1 + 4);
      puVar4 = (uint *)(*DAT_10016c74)(uVar3);
      *puVar4 = param_1;
      ExceptionList = unaff_EBX;
      return puVar4 + 1;
    }
    if (3 < uVar8) {
      iVar9 = 0;
      iVar10 = 0;
      goto LAB_10003e5d;
    }
  }
  else {
    if (0x40 < param_1) {
      uVar8 = (-(uint)(0x80 < param_1) & 0xfffffffc) + 3;
      goto LAB_10003df0;
    }
    uVar8 = 2;
  }
  switch(uVar8) {
  case 0:
    iVar9 = 0x40;
    iVar10 = 0x10;
    break;
  case 1:
    iVar9 = 0x20;
    iVar10 = 0x20;
    break;
  default:
    iVar9 = 0x10;
    iVar10 = 0x40;
    break;
  case 3:
    iVar9 = 8;
    iVar10 = 0x80;
  }
LAB_10003e5d:
  ExceptionList = &pvStack_c;
  iVar5 = (*(code *)PTR_FUN_10012544)();
  if (iVar5 != 0) {
    iVar5 = (*(code *)PTR_FUN_10012544)();
    while (iVar5 != 0) {
      (*DAT_10016c44)(0);
      iVar5 = (*(code *)PTR_FUN_10012544)();
    }
  }
  uStack_4 = 0;
  if (*(int *)((int)this + uVar8 * 4 + 0xc) == 0) {
    iVar5 = (iVar10 + 4) * iVar9;
    uVar3 = (*DAT_10016c7c)(0,iVar5 + 8);
    piVar6 = (int *)(*DAT_10016c74)(uVar3);
    *piVar6 = iVar5 + 4;
    piVar6[1] = 0;
    piVar7 = piVar6 + 3;
    piVar6[2] = iVar10;
    piVar1 = piVar7;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      piVar2 = (int *)((int)piVar1 + iVar10 + 4);
      *piVar1 = (int)piVar2;
      piVar2[-1] = iVar10;
      piVar1 = piVar2;
    }
    *piVar1 = 0;
    piVar6[1] = *(int *)((int)this + uVar8 * 4 + 0x1c);
    *(int **)((int)this + uVar8 * 4 + 0x1c) = piVar7;
    *(int **)((int)this + uVar8 * 4 + 0xc) = piVar7;
  }
  puVar4 = *(uint **)((int)this + uVar8 * 4 + 0xc);
  *(uint *)((int)this + uVar8 * 4 + 0xc) = *puVar4;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  ExceptionList = pvStack_c;
  return puVar4;
}


