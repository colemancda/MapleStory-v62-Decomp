/* FUN_50807c02 - 0x50807c02 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50807c02(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  if ((*(int *)(unaff_EBP + 0xc) == 0) || (*(int *)(unaff_EBP + 0x10) == 0)) {
    uVar8 = 0x80004003;
    goto LAB_50807ff4;
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  piVar2 = piVar1 + 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x18) = piVar2;
  *(int **)(unaff_EBP + -0x20) = piVar2;
  FUN_508012a1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x18) == 1) {
    bVar4 = FUN_5080855a(piVar1 + 3,0);
    if (bVar4) {
      pvVar5 = (void *)(**(code **)(*piVar1 + 4))(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      bVar4 = FUN_5080855a(pvVar5,0);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_50808606((int *)(unaff_EBP + -0x1c));
      if (!bVar4) {
        piVar1 = piVar1 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *piVar2 = 0;
        }
        uVar8 = 0x80004005;
        goto LAB_50807ff4;
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        iVar6 = FUN_508090ed((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + 0xc));
        if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
          FUN_5080dfed(iVar6);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(void **)(unaff_EBP + -0x14) == (void *)0x0) {
        FUN_50808606((int *)(unaff_EBP + -0x14));
        piVar1 = piVar1 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *piVar2 = 0;
        }
        uVar8 = 0x80004002;
        goto LAB_50807ff4;
      }
      puVar7 = (undefined4 *)
               FUN_508063c0(*(void **)(unaff_EBP + -0x14),(undefined4 *)(unaff_EBP + -0x1c));
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 3),(IBinding *)*puVar7
                );
      FUN_50808606((int *)(unaff_EBP + -0x1c));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_50808606((int *)(unaff_EBP + -0x14));
      goto LAB_50807d1c;
    }
    piVar1 = piVar1 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *piVar2 = 0;
    }
LAB_50807d8e:
    uVar8 = 0x80030050;
    goto LAB_50807ff4;
  }
LAB_50807d1c:
  if ((*(int *)(unaff_EBP + 0x18) == 0) || (*(int *)(unaff_EBP + 0x18) == 2)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    piVar2 = piVar1 + 3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    bVar4 = FUN_5080855a(piVar2,0);
    if (!bVar4) {
      FUN_50808606((int *)(unaff_EBP + -0x14));
      iVar6 = *piVar2;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar6 == 0) {
        FUN_5080dfed(0x80004003);
      }
      FUN_50808b18((void *)*piVar2,unaff_EBP + -0x14);
    }
    if ((*(int *)(unaff_EBP + 0x18) != 0) || (*(int *)(unaff_EBP + -0x14) != 0)) {
      iVar6 = FUN_508096b2((void *)(unaff_EBP + -0x14),*(undefined4 **)(unaff_EBP + 0xc));
      if (iVar6 != 0) {
        FUN_50808606((int *)(unaff_EBP + -0x14));
        puVar7 = *(undefined4 **)(unaff_EBP + -0x18);
        piVar2 = puVar7 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *puVar7 = 0;
        }
        goto LAB_50807d8e;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_50808606((int *)(unaff_EBP + -0x14));
  }
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 3),(IBinding *)0x0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 4),(IBinding *)0x0);
  }
  if ((*(int *)(unaff_EBP + 0x18) == 1) || (*(int *)(unaff_EBP + 0x18) == 2)) {
    iVar6 = *(int *)(unaff_EBP + 0x14);
    if ((iVar6 == 0) || (uVar9 = *(uint *)(iVar6 + -4) >> 1, uVar9 == 0)) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_50803d5b(piVar1 + 5,(int *)(unaff_EBP + -0x1c));
LAB_50807ded:
      FUN_508052b4((undefined4 *)(unaff_EBP + -0x1c));
    }
    else {
      if (*(short *)(uVar9 * 2 + -2 + iVar6) == 0x2f) {
        FUN_50803d00();
        FUN_50803d5b((void *)(*(int *)(unaff_EBP + 8) + 0x14),(int *)(unaff_EBP + -0x1c));
        goto LAB_50807ded;
      }
      FUN_50803a6e(*(undefined4 *)(unaff_EBP + 0x14),uVar9 + 1);
      FUN_50803d00();
      piVar2 = (int *)(*(int *)(unaff_EBP + 8) + 0x14);
      FUN_50803d5b(piVar2,(int *)(unaff_EBP + -0x1c));
      FUN_508052b4((undefined4 *)(unaff_EBP + -0x1c));
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      *(undefined2 *)(uVar9 * 2 + iVar6) = 0x2f;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      iVar6 = FUN_508090ed((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + 0x10));
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        FUN_5080dfed(iVar6);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(void **)(unaff_EBP + -0x14) != (void *)0x0) {
      puVar7 = (undefined4 *)
               FUN_508063c0(*(void **)(unaff_EBP + -0x14),(undefined4 *)(unaff_EBP + -0x1c));
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + 8) + 0x10)
                 ,(IBinding *)*puVar7);
      piVar2 = *(int **)(unaff_EBP + -0x1c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      goto LAB_50807edb;
    }
    puVar7 = *(undefined4 **)(unaff_EBP + -0x18);
    piVar2 = puVar7 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar7 = 0;
    }
LAB_50807f34:
    uVar8 = 0x80070057;
  }
  else {
LAB_50807edb:
    puVar7 = *(undefined4 **)(unaff_EBP + 8);
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      piVar2 = puVar7 + 5;
      if ((undefined4 *)puVar7[5] == (undefined4 *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = *(void **)puVar7[5];
      }
      if (((int *)*piVar2 == (int *)0x0) || (iVar6 = *(int *)*piVar2, iVar6 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)(iVar6 + -4) >> 1;
      }
      if ((uVar9 != 0) && (*(short *)((int)pvVar5 + uVar9 * 2 + -2) == 0x2f)) {
        uVar9 = uVar9 - 1;
      }
      iVar6 = memcmp(pvVar5,*(void **)(unaff_EBP + 0x14),uVar9 * 2);
      if (iVar6 != 0) {
        puVar7 = *(undefined4 **)(unaff_EBP + -0x18);
        piVar2 = puVar7 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *puVar7 = 0;
        }
        goto LAB_50807f34;
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      FUN_50803e96((int *)(unaff_EBP + 8));
      FUN_508052b4(piVar2);
      piVar1 = *(int **)(unaff_EBP + 8);
      *piVar2 = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        FUN_508040b6(piVar1);
      }
    }
    if (puVar7[6] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(puVar7[6] + -4);
    }
    *(int *)(unaff_EBP + 8) = iVar6 + -1;
    while (-1 < *(int *)(unaff_EBP + 8)) {
      if (*(int *)(unaff_EBP + 0x18) == 0) {
        uVar8 = (**(code **)*puVar7)();
      }
      else {
        uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
      }
      *(undefined4 *)(unaff_EBP + 0x14) = uVar8;
      if ((undefined4 *)puVar7[5] == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)puVar7[5];
      }
      iVar6 = puVar7[6];
      iVar3 = *(int *)(unaff_EBP + 8);
      if (*(int *)(iVar6 + iVar3 * 8) == 0) {
        FUN_5080dfed(0x80004003);
      }
      piVar2 = *(int **)(iVar6 + iVar3 * 8);
      uVar10 = (**(code **)*puVar7)();
      (**(code **)(*piVar2 + 0x20))(piVar2,uVar10,*(undefined4 *)(unaff_EBP + 0x14),uVar8,2);
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -1;
    }
    puVar7 = *(undefined4 **)(unaff_EBP + -0x20);
    piVar2 = puVar7 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar7 = 0;
    }
    uVar8 = 0;
  }
LAB_50807ff4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


