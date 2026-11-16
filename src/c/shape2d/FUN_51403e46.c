/* FUN_51403e46 - 0x51403e46 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51403e46(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  uint uVar5;
  int unaff_EBP;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(int *)(unaff_EBP + 8) = iVar1 + 8;
  FUN_5140126a();
  piVar6 = *(int **)(iVar1 + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  while (piVar6 != (int *)0x0) {
    piVar7 = (int *)(piVar6[-3] + 0x10U & -(uint)(piVar6[-3] != 0));
    if (*piVar6 == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar2 = (int *)*piVar6;
    iVar4 = (**(code **)(*piVar2 + 0x48))
                      (piVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                       *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                       *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20));
    piVar6 = piVar7;
    if (iVar4 < 0) {
      FUN_5140ac55(iVar4,piVar2,&DAT_514101b0);
    }
  }
  bVar8 = *(int *)(unaff_EBP + 0xc) < 0;
  if (*(int *)(unaff_EBP + 0x10) < 0) {
    bVar8 = !bVar8;
  }
  if (*(int *)(unaff_EBP + 0x14) < 0) {
    bVar8 = !bVar8;
  }
  if (*(int *)(unaff_EBP + 0x18) < 0) {
    bVar8 = !bVar8;
  }
  if (bVar8) {
    uVar5 = *(uint *)(iVar1 + 0x1c);
    while (uVar5 != 0) {
      iVar4 = *(int *)(uVar5 - 0xc);
      *(uint *)(unaff_EBP + 0x10) = uVar5;
      *(uint *)(unaff_EBP + 0xc) = uVar5;
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_51404453((void *)(iVar1 + 0x10))
      ;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this,(IBinding *)**(undefined4 **)(unaff_EBP + 0xc));
      FUN_5140455a((void *)(iVar1 + 0x10),*(int *)(unaff_EBP + 0x10));
      uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    }
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  piVar6 = puVar3 + 1;
  *piVar6 = *piVar6 + -1;
  if (*piVar6 == 0) {
    *puVar3 = 0;
  }
  FUN_51403f5d();
  return;
}


