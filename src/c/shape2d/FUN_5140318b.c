/* FUN_5140318b - 0x5140318b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140318b(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var4;
  void *pvVar5;
  int unaff_EBP;
  uint uVar6;
  undefined4 *puVar7;
  
  FUN_5140ad20();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffbc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_514032e2();
    return;
  }
  FUN_514032f3();
  iVar2 = *(int *)(unaff_EBP + 8);
  puVar7 = (undefined4 *)(iVar2 + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pvVar5 = (void *)(-(uint)(unaff_EBP != 0x44) & unaff_EBP - 0x40U);
  *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
  FUN_5140126a();
  bVar1 = *(byte *)((int)pvVar5 + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if ((bVar1 & 0x10) == 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar2 + 0x18);
    FUN_51404c3e(pvVar5,(int *)(unaff_EBP + 0xc));
    p_Var4 = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(iVar2 + 0x1c);
    while (p_Var4 != (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0) {
      iVar2 = *(int *)(p_Var4 + -0xc);
      FUN_514047a3(p_Var4,*(int **)(unaff_EBP + -0x28));
      p_Var4 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (iVar2 + 0x10U & -(uint)(iVar2 != 0));
    }
  }
  else {
    FUN_51409cf6(iVar2 + 0x10);
    *(undefined4 *)(iVar2 + 0x24) = DAT_5140c6c0;
    *(undefined4 *)(iVar2 + 0x28) = DAT_5140c6c4;
    *(undefined4 *)(iVar2 + 0x2c) = DAT_5140c6c8;
    *(undefined4 *)(iVar2 + 0x30) = DAT_5140c6cc;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_51404c3e(pvVar5,(int *)(unaff_EBP + -0x14));
    for (uVar6 = 0; uVar6 < *(uint *)(unaff_EBP + -0x14); uVar6 = uVar6 + 1) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_514047a3((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0xc),
                   *(int **)(unaff_EBP + -0x28));
      pvVar5 = *(void **)(unaff_EBP + 8);
      FUN_51403be6(pvVar5,*(int **)(unaff_EBP + 0xc));
      p_Var4 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               FUN_51404415((void *)((int)pvVar5 + 0x10));
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (p_Var4,*(IBinding **)(unaff_EBP + 0xc));
      piVar3 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
    puVar7 = *(undefined4 **)(unaff_EBP + -0x18);
  }
  piVar3 = puVar7 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *puVar7 = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_514037f7();
  FUN_514032e2();
  return;
}


