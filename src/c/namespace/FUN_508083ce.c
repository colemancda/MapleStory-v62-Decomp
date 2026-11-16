/* FUN_508083ce - 0x508083ce in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508083ce(void)

{
  IBinding *pIVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *this;
  undefined1 uVar7;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  
code_r0x508083ce:
  do {
    *(undefined4 *)(unaff_EBP + -4) = 3;
LAB_508083d5:
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar4 != unaff_EBX) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    *(int **)(unaff_EBP + -0x14) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_508012a1();
    piVar4 = (int *)unaff_EDI[6];
    uVar7 = SUB41(unaff_EBX,0);
    if ((piVar4 == unaff_EBX) || ((uint)piVar4[-1] <= *(uint *)(unaff_EBP + -0x20))) {
      if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
        piVar4 = unaff_EDI + 2;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          unaff_EDI[1] = (int)unaff_EBX;
        }
        piVar4 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar4 != unaff_EBX) {
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        if (*(int *)(unaff_EBP + 0xc) != 2) {
          *(undefined1 *)(unaff_EBP + -4) = uVar7;
          FUN_50808502();
          FUN_50808476();
          return;
        }
        *(int **)(unaff_EBP + 0x14) = unaff_EBX;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        this = (void *)FUN_50808b5d((void *)(unaff_EBP + 0x14));
        FUN_50808584(this,unaff_EBP + -0x70);
        puVar3 = *(undefined2 **)(unaff_EBP + 0x18);
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(unaff_EBP + 0x14);
        *puVar3 = 0xd;
        *(int **)(unaff_EBP + 0x14) = unaff_EBX;
        *(undefined1 *)(unaff_EBP + -4) = uVar7;
        FUN_50808502();
        FUN_50808476();
        return;
      }
LAB_5080814d:
      *(undefined4 *)(unaff_EBP + -0x24) = 1;
    }
    else {
      if ((*(int **)(unaff_EBP + -0x24) == unaff_EBX) &&
         (piVar4[*(uint *)(unaff_EBP + -0x20) * 2 + 1] < (int)unaff_EBX)) goto LAB_5080814d;
      pIVar1 = *(IBinding **)(unaff_EDI[6] + *(int *)(unaff_EBP + -0x20) * 8);
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),pIVar1);
    }
    piVar4 = unaff_EDI + 2;
    *piVar4 = *piVar4 + -1;
    iVar5 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar5 == 0) {
      unaff_EDI[1] = (int)unaff_EBX;
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
    if (piVar4 != unaff_EBX) {
      if (*(int *)(unaff_EBP + 0xc) == 2) {
        Ordinal_8(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
          FUN_5080dfed(0x80004003);
        }
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x24))
                  (*(int **)(unaff_EBP + -0x14),2,*(undefined4 *)(unaff_EBP + 0x10));
        piVar4 = (int *)FUN_50804e67();
        *(int **)(unaff_EBP + -0x34) = piVar4;
        *(int **)(unaff_EBP + -0x1c) = unaff_EBX;
        if (((piVar4 != unaff_EBX) &&
            (iVar5 = FUN_5080914d((void *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x34)),
            iVar5 < (int)unaff_EBX)) && (iVar5 != -0x7fffbffe)) {
          FUN_5080dfed(iVar5);
        }
        if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
          Ordinal_8(unaff_EBP + -0x4c);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          *(int **)(unaff_EBP + -0x38) = unaff_EBX;
          while( true ) {
            if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
              FUN_5080dfed(0x80004003);
            }
            piVar4 = (int *)(**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))
                                      (*(int **)(unaff_EBP + -0x1c),1,unaff_EBP + -0x4c,
                                       unaff_EBP + -0x38);
            if (piVar4 != unaff_EBX) break;
            FUN_50803d00();
            *(undefined1 *)(unaff_EBP + -4) = 8;
            *(short *)(unaff_EBP + -0x4c) = (short)unaff_EBX;
            FUN_50808487(unaff_EBP + -0x8c,(int *)(unaff_EBP + -0x2c));
            *(undefined1 *)(unaff_EBP + -4) = 7;
            if (*(int **)(unaff_EBP + -0x2c) != unaff_EBX) {
              FUN_508040b6(*(int **)(unaff_EBP + -0x2c));
              *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x4c));
          if (iVar5 < (int)unaff_EBX) {
            FUN_5080dfed(iVar5);
          }
        }
        piVar4 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar4 != unaff_EBX) {
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x5c));
        if (iVar5 < (int)unaff_EBX) {
          FUN_5080dfed(iVar5);
        }
      }
      else {
        *(int **)(unaff_EBP + -0x28) = unaff_EBX;
        iVar5 = (**(code **)(*piVar4 + 0x24))
                          (piVar4,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10)
                           ,-(uint)(*(int *)(unaff_EBP + 0x14) != 0) & unaff_EBP - 0x28U,
                           *(undefined4 *)(unaff_EBP + 0x18));
        if ((int)unaff_EBX <= iVar5) {
          piVar4 = *(int **)(unaff_EBP + 0x14);
          if (piVar4 != unaff_EBX) {
            *piVar4 = *piVar4 + *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x18);
          }
          goto LAB_5080837a;
        }
      }
      goto LAB_508083d5;
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
      if (*(int *)(unaff_EBP + 0xc) != 1) {
        (**(code **)(*unaff_EDI + 0xc))(unaff_EBP + -0x8c);
        FUN_508083ce();
        return;
      }
      *(int **)(unaff_EBP + -0x30) = unaff_EBX;
      piVar4 = *(int **)(unaff_EBP + 0x14);
      iVar5 = *unaff_EDI;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      *(int **)(unaff_EBP + -0x28) = unaff_EBX;
      piVar6 = (int *)(**(code **)(iVar5 + 8))
                                (*(undefined4 *)(unaff_EBP + 0x10),
                                 -(uint)(piVar4 != (int *)0x0) & unaff_EBP - 0x30U);
      if (piVar6 != unaff_EBX) {
        if (piVar4 != unaff_EBX) {
          *piVar4 = *piVar4 + *(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x18);
        }
        uVar2 = *(undefined4 *)(unaff_EBP + -0x28);
        puVar3 = *(undefined2 **)(unaff_EBP + 0x18);
        *(int **)(unaff_EBP + -0x28) = unaff_EBX;
        *(undefined4 *)(puVar3 + 4) = uVar2;
        *puVar3 = 0xd;
        goto LAB_5080837a;
      }
      piVar4 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar4 != unaff_EBX) {
        (**(code **)(*piVar4 + 8))(piVar4);
        FUN_508083ce();
        return;
      }
      goto code_r0x508083ce;
    }
    iVar5 = *unaff_EDI;
    *(int **)(unaff_EBP + -0x28) = unaff_EBX;
    piVar4 = (int *)(**(code **)(iVar5 + 8))
                              (*(undefined4 *)(unaff_EBP + 0x10),
                               -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & unaff_EBP - 0x28U,
                               *(undefined4 *)(unaff_EBP + 0x18));
    if (piVar4 != unaff_EBX) {
      piVar4 = *(int **)(unaff_EBP + 0x14);
      if (piVar4 != unaff_EBX) {
        *piVar4 = *piVar4 + *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x18);
      }
LAB_5080837a:
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar4 != unaff_EBX) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = uVar7;
      FUN_50808502();
      FUN_50808476();
      return;
    }
  } while( true );
}


