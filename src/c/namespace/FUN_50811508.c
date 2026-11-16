/* FUN_50811508 - 0x50811508 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50811508(void)

{
  short sVar1;
  short *psVar2;
  IBinding *pIVar3;
  int *piVar4;
  undefined2 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  _CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *p_Var9;
  int iVar10;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  psVar2 = *(short **)(unaff_EBP + 8);
  if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
    iVar7 = FUN_5080653c();
    goto LAB_50811a40;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50806a56((int *)(unaff_EBP + 8),(void *)(unaff_EBP + -0x18));
  *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8) - (int)psVar2 >> 1;
  piVar6 = FUN_5080bac1();
  FUN_50803c5f((void *)(unaff_EBP + -0x14),piVar6);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_508052b4((undefined4 *)(unaff_EBP + -0x34));
  FUN_50801ba4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar7 = FUN_50812177((void *)(extraout_ECX + 0x44),(int *)(unaff_EBP + -0x18),(void *)0x0);
  *(int *)(unaff_EBP + -0x28) = iVar7;
  if (iVar7 == 0) {
    piVar6 = FUN_5080504c();
    FUN_50803c5f((void *)(unaff_EBP + -0x30),piVar6);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar7 = FUN_50812177((void *)(extraout_ECX + 0x44),(int *)(unaff_EBP + -0x30),(void *)0x0);
    *(int *)(unaff_EBP + -0x28) = iVar7;
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x30));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x38));
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x10) == 0)) {
      iVar7 = *(int *)(unaff_EBP + -0x28);
      goto LAB_50811615;
    }
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x1c));
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
LAB_5081191a:
    iVar7 = 0;
  }
  else {
LAB_50811615:
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    iVar7 = *(int *)(iVar7 + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar7 == 0) {
      piVar6 = FUN_508113fa();
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x24),
                 (IBinding *)*piVar6);
      FUN_5080fc91((int *)(unaff_EBP + -0x34));
    }
    else {
      FUN_5080d311((void *)(unaff_EBP + -0x14),(wchar_t *)&DAT_5081d240);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      puVar8 = *(undefined4 **)(extraout_ECX + 0x30);
      *(undefined4 **)(unaff_EBP + -0x3c) = puVar8;
      FUN_508012a1();
      iVar7 = *(int *)(extraout_ECX + 0x30);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar7 = FUN_50811fc4((void *)(iVar7 + 8),(int *)(unaff_EBP + -0x14),
                           (undefined4 *)(unaff_EBP + -0x10));
      if (((iVar7 != 0) &&
          (iVar7 = FUN_50812d30((void *)(unaff_EBP + -0x20),(int *)(unaff_EBP + -0x10)), iVar7 < 0))
         && (iVar7 != -0x7fffbffe)) {
        FUN_5080dfed(iVar7);
      }
      piVar6 = puVar8 + 1;
      *piVar6 = *piVar6 + -1;
      iVar7 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar7 == 0) {
        *puVar8 = 0;
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iVar7 = FUN_5081240d((void *)(unaff_EBP + -0x20));
        *(int *)(unaff_EBP + -0x10) = iVar7;
        piVar6 = FUN_5080504c();
        FUN_50803c5f((void *)(unaff_EBP + -0x34),piVar6);
        FUN_50803d5b((void *)(*(int *)(unaff_EBP + -0x10) + 0x34),(int *)(unaff_EBP + -0x34));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x34));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x3c));
        FUN_50803d5b((void *)(*(int *)(unaff_EBP + -0x10) + 0x7c),(int *)(unaff_EBP + -0x14));
        FUN_50803d5b((void *)(*(int *)(unaff_EBP + -0x10) + 0x80),(int *)(extraout_ECX + 0x5c));
        iVar7 = *(int *)(unaff_EBP + -0x10);
        FUN_50811f91(extraout_ECX + 0x2c);
        FUN_50811fae(iVar7 + 0x4c);
        *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(extraout_ECX + 0x30);
        *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x5c) = *(undefined4 *)(extraout_ECX + 0x3c);
        *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x60) = *(undefined4 *)(extraout_ECX + 0x40);
        *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x58) = *(undefined4 *)(extraout_ECX + 0x38);
        puVar8 = (undefined4 *)FUN_5081135e();
        pIVar3 = (IBinding *)*puVar8;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        p_Var9 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                           ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                            (*(int *)(unaff_EBP + -0x10) + 0x54),pIVar3);
        if (*(int *)p_Var9 == 0) {
          FUN_5080dfed(0x80004003);
        }
        piVar6 = *(int **)p_Var9;
        iVar7 = (**(code **)(*piVar6 + 0x2c))
                          (piVar6,*(int *)(*(int *)(unaff_EBP + -0x28) + 4) +
                                  *(int *)(extraout_ECX + 0x38));
        if (iVar7 < 0) {
          FUN_5080dffb(iVar7,piVar6,&DAT_5081e4e0);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_5080fc91((int *)(unaff_EBP + -0x3c));
        FUN_5080d5b5();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_50811dd7();
        FUN_50812330();
        puVar8 = *(undefined4 **)(extraout_ECX + 0x30);
        *(undefined4 **)(unaff_EBP + -0x3c) = puVar8;
        FUN_508012a1();
        iVar7 = *(int *)(extraout_ECX + 0x30);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iVar7 = FUN_50811fc4((void *)(iVar7 + 8),(int *)(unaff_EBP + -0x14),
                             (undefined4 *)(unaff_EBP + -0x10));
        if (iVar7 == 0) {
          FUN_50812013((void *)(*(int *)(extraout_ECX + 0x30) + 8),(int *)(unaff_EBP + -0x14),
                       (undefined4 *)(unaff_EBP + -0x10));
        }
        else {
          iVar7 = FUN_50812d30((void *)(unaff_EBP + -0x20),(int *)(unaff_EBP + -0x10));
          if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
            FUN_5080dfed(iVar7);
          }
        }
        piVar6 = puVar8 + 1;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          *puVar8 = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_5080dad0();
      }
    }
    sVar1 = **(short **)(unaff_EBP + 8);
    piVar6 = *(int **)(unaff_EBP + -0x20);
    if ((sVar1 == 0) || (piVar6 == (int *)0x0)) {
      if ((sVar1 != 0) && (*(int *)(unaff_EBP + 0xc) == 0)) {
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        piVar6 = *(int **)(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x1c));
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x14));
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x18));
        }
        goto LAB_5081191a;
      }
      puVar5 = *(undefined2 **)(unaff_EBP + 0x10);
      if (puVar5 == (undefined2 *)0x0) {
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar7 = FUN_50804288((void *)(unaff_EBP + 0x10));
        *(int *)(unaff_EBP + -0x3c) = extraout_ECX + -0x20;
        iVar10 = FUN_50812cd0((void *)(iVar7 + 0x24),(int *)(unaff_EBP + -0x3c));
        if ((iVar10 < 0) && (iVar10 != -0x7fffbffe)) {
          FUN_5080dfed(iVar10);
        }
        FUN_50803e96((int *)(unaff_EBP + -0x1c));
        FUN_508052b4((undefined4 *)(iVar7 + 0x28));
        *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(unaff_EBP + -0x1c);
        iVar10 = *(int *)(unaff_EBP + -0x20);
        if (iVar10 == 0) {
          iVar10 = *(int *)(unaff_EBP + -0x24);
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
        *(int *)(iVar7 + 0x38) = iVar10;
        puVar8 = *(undefined4 **)(unaff_EBP + -0x28);
        *(undefined2 *)(iVar7 + 0x30) = 0xd;
        *(undefined4 *)(iVar7 + 0x48) = *puVar8;
        *(undefined4 *)(iVar7 + 0x4c) = 0;
        *(undefined4 *)(iVar7 + 0x54) = puVar8[3];
        **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 0x10);
      }
      else {
        if (piVar6 == (int *)0x0) {
          piVar6 = *(int **)(unaff_EBP + -0x24);
        }
        *(int **)(puVar5 + 4) = piVar6;
        (**(code **)(*piVar6 + 4))(piVar6);
        *puVar5 = 0xd;
      }
      piVar6 = *(int **)(unaff_EBP + 0xc);
      if (piVar6 != (int *)0x0) {
        *piVar6 = *piVar6 + *(int *)(unaff_EBP + -0x2c);
      }
      iVar7 = (**(short **)(unaff_EBP + 8) != 0) + 1;
    }
    else {
      piVar4 = *(int **)(unaff_EBP + 0xc);
      iVar7 = FUN_50801c16(*(short **)(unaff_EBP + 8),
                           -(uint)(piVar4 != (int *)0x0) & unaff_EBP - 0x2cU,piVar6,
                           *(int *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
      if ((piVar4 != (int *)0x0) && (iVar7 != 0)) {
        *piVar4 = *piVar4 + *(int *)(unaff_EBP + -0x2c);
      }
    }
    piVar6 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    piVar6 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      FUN_508040b6(*(int **)(unaff_EBP + -0x1c));
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      FUN_508040b6(*(int **)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      FUN_508040b6(*(int **)(unaff_EBP + -0x18));
    }
  }
LAB_50811a40:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar7;
}


