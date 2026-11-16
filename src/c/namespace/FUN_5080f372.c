/* FUN_5080f372 - 0x5080f372 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080f372(void)

{
  undefined2 *puVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  short *psVar10;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff54;
  if ((*(int *)(unaff_EBP + 0x20) == 0) ||
     (iVar7 = *(int *)(unaff_EBP + 8), *(int *)(iVar7 + 0x14) == 0)) {
    uVar5 = 0x80004003;
  }
  else {
    psVar10 = *(short **)(unaff_EBP + 0xc);
    if ((psVar10 == (short *)0x0) || (sVar3 = *psVar10, sVar3 == 0)) {
LAB_5080f430:
      uVar5 = 0x80070057;
    }
    else {
      do {
        if ((sVar3 == 0x2f) || (sVar3 == 0x5c)) goto LAB_5080f430;
        sVar3 = psVar10[1];
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_50803d00();
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      puVar9 = (undefined4 *)(iVar7 + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined4 **)(unaff_EBP + -0x24) = puVar9;
      FUN_508012a1();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar4 = FUN_5080febc((void *)(iVar7 + 0x20),(int *)(unaff_EBP + -0x20),
                           (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0);
      if (iVar4 == 0) {
        piVar6 = FUN_5080bac1();
        FUN_50803c5f((void *)(unaff_EBP + 8),piVar6);
        FUN_50803d5b((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 8));
        FUN_508052b4((undefined4 *)(unaff_EBP + 8));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
        piVar6 = FUN_5080bac1();
        FUN_50803c5f((void *)(unaff_EBP + 8),piVar6);
        FUN_50803d5b((void *)(unaff_EBP + -0x18),(int *)(unaff_EBP + 8));
        FUN_508052b4((undefined4 *)(unaff_EBP + 8));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
        piVar6 = (int *)(iVar7 + -0x14);
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          *puVar9 = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_5080e4db();
        iVar7 = *(int *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar7 == 0) {
          uVar5 = 0x80070005;
        }
        else {
          if (*(short *)(unaff_EBP + 0x10) != 0) {
            Ordinal_8(unaff_EBP + -0x4c);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_50804f37((void *)(unaff_EBP + -0x4c),0xd,(ushort *)(unaff_EBP + 0x10));
            iVar7 = FUN_50804e67();
            *(int *)(unaff_EBP + -0x2c) = iVar7;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            if (((iVar7 != 0) &&
                (iVar7 = FUN_50810dce((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x2c)),
                iVar7 < 0)) && (iVar7 != -0x7fffbffe)) {
              FUN_5080dfed(iVar7);
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              FUN_5080450d((void *)(unaff_EBP + -100),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((void *)(unaff_EBP + -100),(ThrowInfo *)&DAT_50819008);
            }
            FUN_5080d5b5();
            *(undefined1 *)(unaff_EBP + -4) = 9;
            FUN_50810190((void *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x14));
            Ordinal_8(unaff_EBP + -0x3c);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            bVar2 = FUN_5080fbc6((void *)(unaff_EBP + -0x1c),0);
            if (!bVar2) {
              if (*(int *)(unaff_EBP + -0x1c) == 0) {
                FUN_5080dfed(0x80004003);
              }
              uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x38))
                                (*(int **)(unaff_EBP + -0x1c),unaff_EBP + -0x3c);
              *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
            }
            if (*(int *)(unaff_EBP + -0x1c) == 0) {
              FUN_5080dfed(0x80004003);
            }
            piVar6 = FUN_5080d530(*(int **)(unaff_EBP + -0x1c));
            uVar5 = *(undefined4 *)(unaff_EBP + -0x34);
            piVar8 = FUN_5080f794();
            iVar7 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piVar8 = (int *)(**(code **)(iVar7 + 0x18))(uVar5,piVar6);
            if (piVar6 != piVar8) {
              *(undefined4 *)(unaff_EBP + -0x28) = 0x26;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_5081ae30);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_5080dad0();
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                       (IBinding *)0x0);
            puVar9 = (undefined4 *)FUN_5080e4db();
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                       (IBinding *)*puVar9);
            FUN_5080fc91((int *)(unaff_EBP + -0x24));
            puVar1 = *(undefined2 **)(unaff_EBP + 0x20);
            *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(unaff_EBP + 8);
            *puVar1 = 0xd;
            *(undefined4 *)(unaff_EBP + 8) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iVar7 = FUN_508037a7((short *)(unaff_EBP + -0x3c));
            if (iVar7 < 0) {
              FUN_5080dfed(iVar7);
            }
            piVar6 = *(int **)(unaff_EBP + -0x1c);
            *(undefined1 *)(unaff_EBP + -4) = 9;
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 8))(piVar6);
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            FUN_5080dad0();
            piVar6 = *(int **)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 8))(piVar6);
            }
            *(undefined1 *)(unaff_EBP + -4) = 6;
            iVar7 = FUN_508037a7((short *)(unaff_EBP + -0x4c));
            if (iVar7 < 0) {
              FUN_5080dfed(iVar7);
            }
            piVar6 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 5;
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 8))(piVar6);
            }
            if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
              FUN_508040b6(*(int **)(unaff_EBP + -0x18));
              *(undefined4 *)(unaff_EBP + -0x18) = 0;
            }
            if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
              FUN_508040b6(*(int **)(unaff_EBP + 0xc));
              *(undefined4 *)(unaff_EBP + 0xc) = 0;
            }
            if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
              FUN_508040b6(*(int **)(unaff_EBP + -0x20));
            }
            uVar5 = 0;
            goto LAB_5080f783;
          }
          puVar1 = *(undefined2 **)(unaff_EBP + 0x20);
          *puVar1 = 0xd;
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(int *)(puVar1 + 4) = iVar7;
          uVar5 = 0;
        }
        FUN_5080fc91((int *)(unaff_EBP + 8));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
        FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x20));
      }
      else {
        piVar6 = (int *)(iVar7 + -0x14);
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          *puVar9 = 0;
        }
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
        FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x20));
        uVar5 = 0x80030050;
      }
    }
  }
LAB_5080f783:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


