/* FUN_5080781a - 0x5080781a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


/* WARNING: Removing unreachable block (ram,0x50807a1a) */

void FUN_5080781a(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  short *psVar7;
  int iVar8;
  IBinding *pIVar9;
  undefined4 uVar10;
  int unaff_EBP;
  undefined4 uVar11;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  psVar7 = FUN_508066b0();
  *(short **)(unaff_EBP + 8) = psVar7;
  bVar6 = FUN_5080855a((void *)(unaff_EBP + -0x14),0);
  if (!bVar6) {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_5080dfed(0x80004003);
    }
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x1c))
              (*(int **)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8),
               *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
               *(undefined4 *)(unaff_EBP + 0x18));
LAB_50807943:
    FUN_50808606((int *)(unaff_EBP + -0x14));
    FUN_50807bf1();
    return;
  }
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    Ordinal_8();
    iVar8 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar8 = (**(code **)(iVar8 + 8))(psVar7,0,unaff_EBP + -0x38,0);
    if ((iVar8 != 0) &&
       (((iVar8 = FUN_50803865((ushort *)(unaff_EBP + -0x38),(ushort *)(unaff_EBP + -0x38),0,0xd),
         -1 < iVar8 &&
         (iVar8 = FUN_508053f3((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x30)), iVar8 < 0))
        && (iVar8 != -0x7fffbffe)))) {
      FUN_5080dfed(iVar8);
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    if (piVar1 == (int *)0x0) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar8 = FUN_508037a7((short *)(unaff_EBP + -0x38));
      if (iVar8 < 0) {
        FUN_5080dfed(iVar8);
      }
    }
    else {
      (**(code **)(*piVar1 + 0x1c))
                (piVar1,0,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                 *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar8 = FUN_508037a7((short *)(unaff_EBP + -0x38));
      if (iVar8 < 0) {
        FUN_5080dfed(iVar8);
      }
    }
    goto LAB_50807943;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if ((*(short *)(unaff_EBP + 0x10) != 0) && (*(short *)(unaff_EBP + 0x10) != 10)) {
    Ordinal_8();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_50804f37((void *)(unaff_EBP + -0x38),0xd,(ushort *)(unaff_EBP + 0x10));
    iVar8 = FUN_508053f3((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + -0x30));
    if ((iVar8 < 0) && (iVar8 != -0x7fffbffe)) {
      FUN_5080dfed(iVar8);
    }
    if ((*(int *)(unaff_EBP + -0x30) != 0) && (*(int *)(unaff_EBP + 0xc) == 0)) {
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar8 = FUN_508037a7((short *)(unaff_EBP + -0x38));
      if (iVar8 < 0) {
        FUN_5080dfed(iVar8);
      }
      FUN_50808606((int *)(unaff_EBP + 0xc));
      FUN_50808606((int *)(unaff_EBP + -0x14));
      FUN_50807bf1();
      return;
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar8 = FUN_508037a7((short *)(unaff_EBP + -0x38));
    if (iVar8 < 0) {
      FUN_5080dfed(iVar8);
    }
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int **)(unaff_EBP + -0x20) = piVar1 + 1;
  FUN_508012a1();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iVar8 = piVar1[4];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar8 != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    FUN_50804243((void *)piVar1[4],unaff_EBP + 8);
    if (*(int *)(unaff_EBP + 8) != 0) goto LAB_50807a44;
  }
  pIVar9 = (IBinding *)(**(code **)*piVar1)();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),pIVar9);
LAB_50807a44:
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    if (piVar1[6] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(piVar1[6] + -4);
    }
    *(int *)(unaff_EBP + -0x18) = iVar8 + -1;
    while (-1 < *(int *)(unaff_EBP + -0x18)) {
      iVar8 = *(int *)(unaff_EBP + -0x18) * 8;
      piVar2 = *(int **)(iVar8 + piVar1[6]);
      *(int **)(unaff_EBP + -0x24) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      iVar3 = piVar1[6];
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_508086a4(piVar1 + 6,(int *)(iVar8 + iVar3));
      if ((undefined4 *)piVar1[5] == (undefined4 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)piVar1[5];
      }
      if (piVar2 == (int *)0x0) {
        FUN_5080dfed(0x80004003);
      }
      uVar10 = (**(code **)*piVar1)();
      iVar8 = (**(code **)(*piVar2 + 0x20))(piVar2,uVar10,*(undefined4 *)(unaff_EBP + 8),uVar11);
      if (iVar8 < 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
    }
  }
  else {
    piVar2 = piVar1 + 6;
    if (piVar1[6] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(piVar1[6] + -4);
    }
    *(int *)(unaff_EBP + -0x18) = iVar8 + -1;
    while (-1 < *(int *)(unaff_EBP + -0x18)) {
      piVar4 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffc4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_50808ab6(piVar2,*(int *)(unaff_EBP + -0x18));
      *(undefined1 *)(unaff_EBP + -4) = 6;
      bVar6 = FUN_50808ac2();
      if (bVar6) {
        FUN_508086a4(piVar2,(int *)(*piVar2 + *(int *)(unaff_EBP + -0x18) * 8));
        if ((undefined4 *)piVar1[5] == (undefined4 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)piVar1[5];
        }
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_5080dfed(0x80004003);
        }
        piVar2 = *(int **)(unaff_EBP + 0xc);
        uVar10 = (**(code **)*piVar1)();
        uVar11 = (**(code **)(*piVar2 + 0x20))(piVar2,uVar10,*(undefined4 *)(unaff_EBP + 8),uVar11);
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar11;
        if (-1 < *(int *)(unaff_EBP + -0x18)) goto LAB_50807b91;
        break;
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x80004005;
  }
LAB_50807b91:
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  puVar5 = *(undefined4 **)(unaff_EBP + -0x20);
  piVar1 = puVar5 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar5 = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  FUN_50807bf1();
  return;
}


