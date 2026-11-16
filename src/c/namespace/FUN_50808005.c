/* FUN_50808005 - 0x50808005 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50808005(void)

{
  undefined2 *puVar1;
  int *piVar2;
  IBinding *pIVar3;
  undefined4 uVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  void *this;
  int unaff_EBP;
  
  FUN_5080e090();
  puVar1 = *(undefined2 **)(unaff_EBP + 0x18);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff74;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined2 *)0x0) {
    FUN_50808476();
    return;
  }
  iVar7 = *(int *)(unaff_EBP + 0xc);
  if (iVar7 == 3) {
    piVar5 = FUN_50806ab4();
    iVar7 = *piVar5;
    *piVar5 = 0;
    piVar5 = *(int **)(unaff_EBP + 0x14);
    *(int *)(puVar1 + 4) = iVar7;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    *puVar1 = 0xd;
LAB_50808448:
    FUN_50808476();
    return;
  }
  if (((iVar7 != 0) && (iVar7 != 1)) && (iVar7 != 2)) {
    FUN_50808476();
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  piVar5 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  psVar6 = FUN_508066b0();
  iVar7 = *(int *)(unaff_EBP + 0x10);
  *(short **)(unaff_EBP + 0x10) = psVar6;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + ((int)psVar6 - iVar7 >> 1);
  piVar2 = *(int **)(unaff_EBP + -0x28);
  if (piVar2 == (int *)0x0) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_508084c5((undefined4 *)(unaff_EBP + -0x8c));
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
LAB_50808100:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_508012a1();
    iVar7 = piVar5[6];
    if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= *(uint *)(unaff_EBP + -0x20))) {
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        piVar2 = piVar5 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          piVar5[1] = 0;
        }
        piVar5 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        if (*(int *)(unaff_EBP + 0xc) != 2) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_50808502();
          FUN_50808476();
          return;
        }
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        this = (void *)FUN_50808b5d((void *)(unaff_EBP + 0x14));
        FUN_50808584(this,unaff_EBP + -0x70);
        puVar1 = *(undefined2 **)(unaff_EBP + 0x18);
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(unaff_EBP + 0x14);
        *puVar1 = 0xd;
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_50808502();
        goto LAB_50808448;
      }
LAB_5080814d:
      *(undefined4 *)(unaff_EBP + -0x24) = 1;
    }
    else {
      if ((*(int *)(unaff_EBP + -0x24) == 0) &&
         (*(int *)(iVar7 + 4 + *(uint *)(unaff_EBP + -0x20) * 8) < 0)) goto LAB_5080814d;
      pIVar3 = *(IBinding **)(piVar5[6] + *(int *)(unaff_EBP + -0x20) * 8);
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),pIVar3);
    }
    piVar2 = piVar5 + 2;
    *piVar2 = *piVar2 + -1;
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar7 == 0) {
      piVar5[1] = 0;
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    if (piVar2 == (int *)0x0) {
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        iVar7 = *piVar5;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        iVar7 = (**(code **)(iVar7 + 8))
                          (*(undefined4 *)(unaff_EBP + 0x10),
                           -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & unaff_EBP - 0x28U,
                           *(undefined4 *)(unaff_EBP + 0x18),0);
        if (iVar7 != 0) {
          piVar5 = *(int **)(unaff_EBP + 0x14);
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar5 + *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x18);
          }
          goto LAB_5080837a;
        }
      }
      else {
        if (*(int *)(unaff_EBP + 0xc) != 1) {
          (**(code **)(*piVar5 + 0xc))(unaff_EBP + -0x8c);
          FUN_508083ce();
          return;
        }
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        piVar2 = *(int **)(unaff_EBP + 0x14);
        iVar7 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        iVar7 = (**(code **)(iVar7 + 8))
                          (*(undefined4 *)(unaff_EBP + 0x10),
                           -(uint)(piVar2 != (int *)0x0) & unaff_EBP - 0x30U,0,unaff_EBP + -0x28);
        if (iVar7 != 0) {
          if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar2 + *(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x18);
          }
          uVar4 = *(undefined4 *)(unaff_EBP + -0x28);
          puVar1 = *(undefined2 **)(unaff_EBP + 0x18);
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          *(undefined4 *)(puVar1 + 4) = uVar4;
          *puVar1 = 0xd;
          goto LAB_5080837a;
        }
        piVar2 = *(int **)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          FUN_508083ce();
          return;
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 3;
    }
    else if (*(int *)(unaff_EBP + 0xc) == 2) {
      Ordinal_8(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_5080dfed(0x80004003);
      }
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x24))
                (*(int **)(unaff_EBP + -0x14),2,*(undefined4 *)(unaff_EBP + 0x10),0,
                 unaff_EBP + -0x5c);
      iVar7 = FUN_50804e67();
      *(int *)(unaff_EBP + -0x34) = iVar7;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (((iVar7 != 0) &&
          (iVar7 = FUN_5080914d((void *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x34)), iVar7 < 0))
         && (iVar7 != -0x7fffbffe)) {
        FUN_5080dfed(iVar7);
      }
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        Ordinal_8(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            FUN_5080dfed(0x80004003);
          }
          iVar7 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))
                            (*(int **)(unaff_EBP + -0x1c),1,unaff_EBP + -0x4c,unaff_EBP + -0x38);
          if (iVar7 != 0) break;
          FUN_50803d00();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          *(undefined2 *)(unaff_EBP + -0x4c) = 0;
          FUN_50808487(unaff_EBP + -0x8c,(int *)(unaff_EBP + -0x2c));
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            FUN_508040b6(*(int **)(unaff_EBP + -0x2c));
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar7 = FUN_508037a7((short *)(unaff_EBP + -0x4c));
        if (iVar7 < 0) {
          FUN_5080dfed(iVar7);
        }
      }
      piVar2 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar7 = FUN_508037a7((short *)(unaff_EBP + -0x5c));
      if (iVar7 < 0) {
        FUN_5080dfed(iVar7);
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      iVar7 = (**(code **)(*piVar2 + 0x24))
                        (piVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                         -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & unaff_EBP - 0x28U,
                         *(undefined4 *)(unaff_EBP + 0x18));
      if (-1 < iVar7) goto code_r0x508082bf;
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    goto LAB_50808100;
  }
  iVar7 = (**(code **)(*piVar2 + 0x24))
                    (piVar2,*(undefined4 *)(unaff_EBP + 0xc),psVar6,
                     -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & unaff_EBP - 0x18U,
                     *(undefined4 *)(unaff_EBP + 0x18));
  if (-1 < iVar7) {
    **(int **)(unaff_EBP + 0x14) = **(int **)(unaff_EBP + 0x14) + *(int *)(unaff_EBP + -0x18);
  }
  piVar5 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
LAB_50808399:
  FUN_50808476();
  return;
code_r0x508082bf:
  piVar5 = *(int **)(unaff_EBP + 0x14);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x18);
  }
LAB_5080837a:
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50808502();
  goto LAB_50808399;
}


