/* FUN_508066b0 - 0x508066b0 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


short * FUN_508066b0(void)

{
  short sVar1;
  short *psVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  int *extraout_ECX;
  short *extraout_ECX_00;
  short *extraout_ECX_01;
  short *extraout_ECX_02;
  short *extraout_ECX_03;
  short *extraout_ECX_04;
  int unaff_EBP;
  short *psStackY_4c;
  
  FUN_5080e090();
  psVar5 = *(short **)(unaff_EBP + 8);
  if (psVar5 != (short *)0x0) {
    while (sVar1 = *psVar5, sVar1 != 0) {
      if (sVar1 == 0x2f) {
        sVar1 = psVar5[1];
        *(short **)(unaff_EBP + 8) = psVar5 + 1;
        if (sVar1 == 0x2f) {
          psStackY_4c = (short *)0x5080673c;
          FUN_5080450d((void *)(unaff_EBP + -0x2c),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50819008);
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(int **)(unaff_EBP + -0x18) = extraout_ECX + 1;
        FUN_508012a1();
        iVar6 = extraout_ECX[4];
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar6 != 0) {
          FUN_50808606((int *)(unaff_EBP + -0x10));
          iVar6 = extraout_ECX[4];
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          if (iVar6 == 0) {
            FUN_5080dfed(0x80004003);
          }
          FUN_50804243((void *)extraout_ECX[4],unaff_EBP + -0x10);
        }
        piVar3 = extraout_ECX + 2;
        *piVar3 = *piVar3 + -1;
        iVar6 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (iVar6 == 0) {
          extraout_ECX[1] = 0;
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piVar3 = *(int **)(unaff_EBP + 0xc);
          piVar7 = (int *)*piVar3;
          iVar6 = *(int *)(unaff_EBP + -0x10);
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 8))();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piVar7 = *(int **)(unaff_EBP + -0x10);
          *piVar3 = iVar6;
          goto LAB_5080696a;
        }
        psVar5 = FUN_508066b0();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piVar3 = *(int **)(unaff_EBP + -0x10);
LAB_508067b1:
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        break;
      }
      if (sVar1 != 0x2e) break;
      sVar1 = psVar5[1];
      *(short **)(unaff_EBP + -0x14) = psVar5;
      if (sVar1 == 0x2e) {
        sVar1 = psVar5[2];
        *(short **)(unaff_EBP + 8) = psVar5 + 2;
        if (sVar1 == 0x2f) {
          *(short **)(unaff_EBP + 8) = psVar5 + 3;
        }
        else if (sVar1 != 0) {
          psStackY_4c = (short *)0x50806809;
          FUN_5080450d((void *)(unaff_EBP + -0x2c),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50819008);
        }
        FUN_50806ab4();
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puVar4 = (undefined4 *)(**(code **)(*extraout_ECX + 4))();
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar4);
          psVar5 = extraout_ECX_00;
          if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
            psVar5 = extraout_ECX_01;
          }
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            psVar5 = FUN_508066b0();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            piVar3 = *(int **)(unaff_EBP + -0x10);
            goto LAB_508067b1;
          }
          while( true ) {
            *(short ***)(unaff_EBP + -0x1c) = &psStackY_4c;
            psStackY_4c = psVar5;
            FUN_508098ea(&psStackY_4c);
            *(undefined1 *)(unaff_EBP + -4) = 2;
            FUN_50808544((int *)(unaff_EBP + -0x10));
            FUN_508099de();
            *(undefined1 *)(unaff_EBP + -4) = 4;
            iVar6 = FUN_50804e67();
            *(int *)(unaff_EBP + -0x18) = iVar6;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            if (((iVar6 != 0) &&
                (iVar6 = FUN_508053f3((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x18)),
                iVar6 < 0)) && (iVar6 != -0x7fffbffe)) {
              FUN_5080dfed(iVar6);
            }
            psVar5 = (short *)(unaff_EBP + -0x2c);
            *(undefined1 *)(unaff_EBP + -4) = 6;
            iVar6 = FUN_508037a7(psVar5);
            if (iVar6 < 0) {
              FUN_5080dfed(iVar6);
              psVar5 = extraout_ECX_02;
            }
            iVar6 = *(int *)(unaff_EBP + -0x14);
            if (iVar6 == 0) break;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
              psVar5 = extraout_ECX_03;
            }
            *(int *)(unaff_EBP + -0x10) = iVar6;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
              psVar5 = extraout_ECX_04;
            }
          }
          piVar3 = *(int **)(unaff_EBP + 0xc);
          piVar7 = (int *)*piVar3;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (piVar7 != *(int **)(unaff_EBP + -0x10)) {
            *piVar3 = (int)*(int **)(unaff_EBP + -0x10);
            FUN_508085f9(piVar3);
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 8))();
            }
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piVar7 = *(int **)(unaff_EBP + -0x10);
LAB_5080696a:
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 8))();
          }
          psVar5 = *(short **)(unaff_EBP + 8);
        }
        else {
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0xc),
                     *(IBinding **)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          psVar5 = *(short **)(unaff_EBP + -0x14);
        }
        break;
      }
      if ((sVar1 != 0x2f) && (sVar1 != 0)) {
        psStackY_4c = (short *)0x5080698b;
        FUN_5080450d((void *)(unaff_EBP + -0x3c),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_50819008);
      }
      psVar2 = psVar5 + 1;
      if (sVar1 != 0) {
        psVar2 = psVar5 + 2;
      }
      psVar5 = psVar2;
      if (psVar5 == (short *)0x0) break;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return psVar5;
}


