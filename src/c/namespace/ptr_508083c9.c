/* ptr_508083c9 - 0x508083c9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void ptr_508083c9(void)

{
  IBinding *pIVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  void *this;
  int unaff_EBP;
  
  piVar4 = *(int **)(unaff_EBP + 8);
code_r0x508083ce:
  do {
    *(undefined4 *)(unaff_EBP + -4) = 3;
LAB_508083d5:
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_508012a1();
    iVar6 = piVar4[6];
    if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= *(uint *)(unaff_EBP + -0x20))) {
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        piVar5 = piVar4 + 2;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          piVar4[1] = 0;
        }
        piVar4 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
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
        puVar3 = *(undefined2 **)(unaff_EBP + 0x18);
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(unaff_EBP + 0x14);
        *puVar3 = 0xd;
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_50808502();
        FUN_50808476();
        return;
      }
LAB_5080814d:
      *(undefined4 *)(unaff_EBP + -0x24) = 1;
    }
    else {
      if ((*(int *)(unaff_EBP + -0x24) == 0) &&
         (*(int *)(iVar6 + 4 + *(uint *)(unaff_EBP + -0x20) * 8) < 0)) goto LAB_5080814d;
      pIVar1 = *(IBinding **)(piVar4[6] + *(int *)(unaff_EBP + -0x20) * 8);
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),pIVar1);
    }
    piVar5 = piVar4 + 2;
    *piVar5 = *piVar5 + -1;
    iVar6 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar6 == 0) {
      piVar4[1] = 0;
    }
    piVar5 = *(int **)(unaff_EBP + -0x14);
    if (piVar5 != (int *)0x0) {
      if (*(int *)(unaff_EBP + 0xc) == 2) {
        Ordinal_8(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_5080dfed(0x80004003);
        }
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x24))
                  (*(int **)(unaff_EBP + -0x14),2,*(undefined4 *)(unaff_EBP + 0x10),0,
                   unaff_EBP + -0x5c);
        iVar6 = FUN_50804e67();
        *(int *)(unaff_EBP + -0x34) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        if (((iVar6 != 0) &&
            (iVar6 = FUN_5080914d((void *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x34)), iVar6 < 0
            )) && (iVar6 != -0x7fffbffe)) {
          FUN_5080dfed(iVar6);
        }
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          Ordinal_8(unaff_EBP + -0x4c);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
          while( true ) {
            if (*(int *)(unaff_EBP + -0x1c) == 0) {
              FUN_5080dfed(0x80004003);
            }
            iVar6 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))
                              (*(int **)(unaff_EBP + -0x1c),1,unaff_EBP + -0x4c,unaff_EBP + -0x38);
            if (iVar6 != 0) break;
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
          iVar6 = FUN_508037a7((short *)(unaff_EBP + -0x4c));
          if (iVar6 < 0) {
            FUN_5080dfed(iVar6);
          }
        }
        piVar5 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar6 = FUN_508037a7((short *)(unaff_EBP + -0x5c));
        if (iVar6 < 0) {
          FUN_5080dfed(iVar6);
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        iVar6 = (**(code **)(*piVar5 + 0x24))
                          (piVar5,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10)
                           ,-(uint)(*(int *)(unaff_EBP + 0x14) != 0) & unaff_EBP - 0x28U,
                           *(undefined4 *)(unaff_EBP + 0x18));
        if (-1 < iVar6) {
          piVar4 = *(int **)(unaff_EBP + 0x14);
          if (piVar4 != (int *)0x0) {
            *piVar4 = *piVar4 + *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x18);
          }
          goto LAB_5080837a;
        }
      }
      goto LAB_508083d5;
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      if (*(int *)(unaff_EBP + 0xc) != 1) {
        (**(code **)(*piVar4 + 0xc))(unaff_EBP + -0x8c);
        FUN_508083ce();
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      piVar5 = *(int **)(unaff_EBP + 0x14);
      iVar6 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      iVar6 = (**(code **)(iVar6 + 8))
                        (*(undefined4 *)(unaff_EBP + 0x10),
                         -(uint)(piVar5 != (int *)0x0) & unaff_EBP - 0x30U,0,unaff_EBP + -0x28);
      if (iVar6 != 0) {
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar5 + *(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x18);
        }
        uVar2 = *(undefined4 *)(unaff_EBP + -0x28);
        puVar3 = *(undefined2 **)(unaff_EBP + 0x18);
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        *(undefined4 *)(puVar3 + 4) = uVar2;
        *puVar3 = 0xd;
        goto LAB_5080837a;
      }
      piVar5 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        FUN_508083ce();
        return;
      }
      goto code_r0x508083ce;
    }
    iVar6 = *piVar4;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    iVar6 = (**(code **)(iVar6 + 8))
                      (*(undefined4 *)(unaff_EBP + 0x10),
                       -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & unaff_EBP - 0x28U,
                       *(undefined4 *)(unaff_EBP + 0x18),0);
    if (iVar6 != 0) {
      piVar4 = *(int **)(unaff_EBP + 0x14);
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x18);
      }
LAB_5080837a:
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_50808502();
      FUN_50808476();
      return;
    }
  } while( true );
}


