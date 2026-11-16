/* FUN_504035a9 - 0x504035a9 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_504035a9(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  
  FUN_5042a430();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (*(int *)(iVar1 + 0xa0) == 0) {
    uVar5 = 0x80004005;
  }
  else {
    *(int *)(iVar1 + 0xa0) = 0;
    FUN_50407b9c();
    FUN_50407b9c();
    timeEndPeriod(*(UINT *)(iVar1 + 0xa4));
    uVar5 = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(iVar1 + 0x90) = 0;
    uVar2 = *(undefined4 *)(iVar1 + 0xac);
    *(undefined4 *)(iVar1 + 0x98) = 0;
    iVar6 = *(int *)(iVar1 + 0xa8);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    if (iVar6 == 0) {
      FUN_5042a358(0x80004003);
    }
    piVar3 = *(int **)(iVar1 + 0xa8);
    (**(code **)(*piVar3 + 0x28))(piVar3,*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_5042d378;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    do {
      iVar6 = *(int *)(iVar1 + 0xb4);
      FUN_50401895();
      piVar3 = *(int **)(iVar6 + 0x18);
      uVar7 = 0;
      if (piVar3 != (int *)0x0) {
        iVar6 = *piVar3;
        uVar7 = -(uint)(piVar3[-3] != 0) & piVar3[-3] + 0x10U;
        FUN_504037b9();
        if ((-(uint)(iVar6 != 0) & iVar6 - 0xcU) != 0) {
          FUN_50409902();
        }
      }
      iVar6 = *(int *)(iVar1 + 0xb4);
      piVar3 = (int *)(iVar6 + 8);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
    } while (uVar7 != 0);
    (*DAT_50438d34)(1);
    uVar5 = *(undefined4 *)(iVar1 + 0xbc);
    *(undefined4 *)(unaff_EBP + 8) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
    FUN_50401895();
    uVar7 = *(uint *)(*(int *)(iVar1 + 0xbc) + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    while (uVar7 != 0) {
      iVar6 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
      FUN_50403ac0();
      uVar7 = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
    }
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piVar3 = puVar4 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar4 = 0;
    }
    FUN_504078fe((int *)(iVar1 + 0x394),(int *)0x0);
    if (*(int *)(iVar1 + 0x38c) != 0) {
      FUN_50403ac0();
      *(undefined4 *)(iVar1 + 0x38c) = 0;
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar1 + 0x390),(IBinding *)0x0);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    (**(code **)(*piVar3 + 0xf4))(piVar3,0,0);
    (*DAT_50438af4)(500);
    FUN_504068bd(unaff_EBP + -0x28);
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar1 + 0x14);
    FUN_50401895();
    iVar6 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar6 = (**(code **)(iVar6 + 8))(piVar3);
    if (iVar6 != 0) {
      (*DAT_50438cdc)(0x20);
    }
    piVar3 = (int *)(iVar1 + 0x18);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_5042d378;
    FUN_504068bd(unaff_EBP + -0x28);
    uVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


