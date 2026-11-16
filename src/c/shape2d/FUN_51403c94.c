/* FUN_51403c94 - 0x51403c94 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51403c94(void)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this_00;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(short *)(unaff_EBP + 0x1c) == 0) || (*(short *)(unaff_EBP + 0x1c) == 10)) {
    uVar4 = FUN_51405b5b();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    iVar5 = FUN_51405448((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x1c));
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      FUN_5140ac47(iVar5);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_514017d8((int *)(unaff_EBP + -0x14));
      goto LAB_51403da2;
    }
  }
  else {
    Ordinal_8(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_51405a4b((void *)(unaff_EBP + -0x30),3,(ushort *)(unaff_EBP + 0xc));
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
    uVar4 = FUN_51405b5b();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    iVar5 = FUN_51405448((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x1c));
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      FUN_5140ac47(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_51405818((short *)(unaff_EBP + -0x30));
    if (iVar5 < 0) {
      FUN_5140ac47(iVar5);
    }
  }
  this = *(void **)(unaff_EBP + 8);
  if (*(int *)((int)this + 0x34) == 0) {
LAB_51403d55:
    puVar1 = (undefined4 *)((int)this + 8);
    *(undefined4 **)(unaff_EBP + 8) = puVar1;
    FUN_5140126a();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_51403be6(this,*(int **)(unaff_EBP + -0x14));
    uVar3 = *(uint *)(unaff_EBP + -0x18);
    if (((int)uVar3 < 0) || (uVar3 == *(uint *)((int)this + 0x18))) {
      this_00 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                FUN_51404415((void *)((int)this + 0x10));
LAB_51403dfb:
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this_00,*(IBinding **)(unaff_EBP + -0x14));
      piVar2 = (int *)((int)this + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      FUN_51403e35();
      return;
    }
    iVar5 = FUN_5140466c((void *)((int)this + 0x10),uVar3);
    if (iVar5 != 0) {
      this_00 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                FUN_51404496((void *)((int)this + 0x10),iVar5);
      goto LAB_51403dfb;
    }
    piVar2 = (int *)((int)this + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    FUN_51404c5d((void *)(unaff_EBP + 8),(int *)(unaff_EBP + -0x14));
    piVar2 = *(int **)(unaff_EBP + 8);
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      (**(code **)(iVar5 + 8))(piVar2);
      goto LAB_51403d55;
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
LAB_51403da2:
  FUN_51403e35();
  return;
}


