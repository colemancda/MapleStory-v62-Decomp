/* FUN_5080eadd - 0x5080eadd in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080eadd(void)

{
  short sVar1;
  short *psVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  int *piVar10;
  size_t _Size;
  int extraout_ECX;
  void *_Src;
  int unaff_EBP;
  int iVar11;
  
  FUN_5080e090();
  psVar2 = *(short **)(unaff_EBP + 8);
  iVar11 = 0;
  if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
    iVar11 = FUN_5080653c();
    goto LAB_5080ef41;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50806a56((int *)(unaff_EBP + 8),(void *)(unaff_EBP + -0x14));
  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + 8) - (int)psVar2 >> 1;
  piVar5 = FUN_5080bac1();
  FUN_50803c5f((void *)(unaff_EBP + -0x10),piVar5);
  FUN_508052b4((undefined4 *)(unaff_EBP + -0x28));
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  puVar9 = (undefined4 *)(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 **)(unaff_EBP + -0x34) = puVar9;
  FUN_508012a1();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar6 = FUN_5080febc((void *)(extraout_ECX + 0x3c),(int *)(unaff_EBP + -0x14),
                       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18));
  if (iVar6 == 0) {
    if (*(int **)(unaff_EBP + -0x10) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_5080d29f(*(int **)(unaff_EBP + -0x10));
    }
    uVar7 = (*DAT_5081e6ac)(iVar6);
    if (uVar7 != 0xffffffff) {
      if ((uVar7 & 0x10) != 0) {
        FUN_5080d311((void *)(unaff_EBP + -0x10),(wchar_t *)&DAT_5081d240);
        iVar11 = FUN_5081013c((void *)(unaff_EBP + -0x18));
        *(int *)(unaff_EBP + -0x1c) = iVar11;
        *(int *)(unaff_EBP + -0x24) = iVar11 + 0x4c;
        FUN_5080fcd1(extraout_ECX + 0x2c);
        FUN_5080fcee(*(int *)(unaff_EBP + -0x24));
        *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 4) = *(undefined4 *)(extraout_ECX + 0x30);
        FUN_50801ba4();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piVar5 = FUN_5080504c();
        FUN_50803c5f((void *)(unaff_EBP + -0x24),piVar5);
        FUN_50803d5b((void *)(*(int *)(unaff_EBP + -0x1c) + 0x34),(int *)(unaff_EBP + -0x24));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x24));
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x2c));
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_508052b4((undefined4 *)(unaff_EBP + -0x30));
        FUN_50803d5b((void *)(*(int *)(unaff_EBP + -0x1c) + 0x54),(int *)(unaff_EBP + -0x10));
        FUN_5080ff0e();
      }
      goto LAB_5080ec9e;
    }
    iVar6 = (*DAT_5081e704)();
    if (iVar6 == 2) {
      pwVar8 = FUN_5080d311((void *)(unaff_EBP + -0x10),u__img_5081e500);
      if (*(int **)pwVar8 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_5080d29f(*(int **)pwVar8);
      }
      uVar7 = (*DAT_5081e6ac)(iVar6);
      if ((uVar7 & 0x10) == 0) goto LAB_5080ec9e;
    }
    piVar5 = (int *)(extraout_ECX + 8);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      *puVar9 = 0;
    }
  }
  else {
LAB_5080ec9e:
    piVar5 = (int *)(extraout_ECX + 8);
    *piVar5 = *piVar5 + -1;
    iVar11 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar11 == 0) {
      *puVar9 = 0;
    }
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puVar9 = *(undefined4 **)(extraout_ECX + 0x30);
      *(undefined4 **)(unaff_EBP + -0x34) = puVar9;
      FUN_508012a1();
      iVar11 = *(int *)(extraout_ECX + 0x30);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_5080fdd5((void *)(iVar11 + 8),(int *)(unaff_EBP + -0x10),(undefined4 *)(unaff_EBP + -0x1c)
                  );
      piVar5 = puVar9 + 1;
      *piVar5 = *piVar5 + -1;
      iVar11 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar11 == 0) {
        *puVar9 = 0;
      }
    }
    sVar1 = **(short **)(unaff_EBP + 8);
    piVar5 = *(int **)(unaff_EBP + -0x18);
    if ((sVar1 == 0) || (piVar5 == (int *)0x0)) {
      if ((sVar1 == 0) || (*(int *)(unaff_EBP + 0xc) != 0)) {
        puVar3 = *(undefined2 **)(unaff_EBP + 0x10);
        if (puVar3 == (undefined2 *)0x0) {
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar11 = FUN_50804288((void *)(unaff_EBP + -0x24));
          *(int *)(unaff_EBP + 0x10) = extraout_ECX + -0x20;
          iVar6 = FUN_50810d05((void *)(iVar11 + 0x24),(int *)(unaff_EBP + 0x10));
          if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
            FUN_5080dfed(iVar6);
          }
          piVar10 = FUN_50801ba4();
          FUN_50803e96(piVar10);
          FUN_508052b4((int *)(iVar11 + 0x28));
          piVar5 = *(int **)(unaff_EBP + 0x10);
          *(int *)(iVar11 + 0x28) = *piVar10;
          if (piVar5 != (int *)0x0) {
            FUN_508040b6(piVar5);
          }
          if ((*(int **)(unaff_EBP + -0x10) == (int *)0x0) ||
             (iVar6 = **(int **)(unaff_EBP + -0x10), iVar6 == 0)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(uint *)(iVar6 + -4) >> 1;
          }
          piVar5 = (int *)(iVar11 + 0x2c);
          FUN_5080fd4e(piVar5,uVar7 * 2 + 2);
          _Size = 0;
          if (*piVar5 != 0) {
            _Size = *(size_t *)(*piVar5 + -4);
          }
          if (*(undefined4 **)(unaff_EBP + -0x10) == (undefined4 *)0x0) {
            _Src = (void *)0x0;
          }
          else {
            _Src = (void *)**(undefined4 **)(unaff_EBP + -0x10);
          }
          memcpy((void *)*piVar5,_Src,_Size);
          iVar6 = *(int *)(unaff_EBP + -0x18);
          if (iVar6 == 0) {
            *(undefined **)(iVar11 + 0x40) = &DAT_5080e8ed;
            *(code **)(iVar11 + 0x50) = FUN_5080e748;
            *(code **)(iVar11 + 0x58) = FUN_5080e7df;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            *(int *)(iVar11 + 0x38) = iVar6;
            *(undefined2 *)(iVar11 + 0x30) = 0xd;
            *(code **)(iVar11 + 0x50) = FUN_50806b87;
            *(code **)(iVar11 + 0x58) = FUN_50806dd4;
          }
          **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x24);
        }
        else {
          if (piVar5 == (int *)0x0) {
            FUN_50801ba4();
            *(undefined1 *)(unaff_EBP + -4) = 6;
            puVar9 = (undefined4 *)FUN_5080e4db();
            uVar4 = *puVar9;
            *puVar9 = 0;
            piVar5 = *(int **)(unaff_EBP + 0x14);
            *(undefined4 *)(puVar3 + 4) = uVar4;
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 8))(piVar5);
            }
            if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
              FUN_508040b6(*(int **)(unaff_EBP + 0x10));
            }
          }
          else {
            *(int **)(puVar3 + 4) = piVar5;
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          *puVar3 = 0xd;
        }
        piVar5 = *(int **)(unaff_EBP + 0xc);
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar5 + *(int *)(unaff_EBP + -0x20);
        }
        sVar1 = **(short **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar11 = (sVar1 != 0) + 1;
        piVar5 = *(int **)(unaff_EBP + -0x18);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x14));
        }
      }
      else {
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x14));
        }
        iVar11 = 0;
      }
      goto LAB_5080ef41;
    }
    piVar10 = *(int **)(unaff_EBP + 0xc);
    iVar11 = FUN_50801c16(*(short **)(unaff_EBP + 8),
                          -(uint)(piVar10 != (int *)0x0) & unaff_EBP - 0x20U,piVar5,
                          *(int *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    if ((piVar10 != (int *)0x0) && (iVar11 != 0)) {
      *piVar10 = *piVar10 + *(int *)(unaff_EBP + -0x20);
    }
  }
  FUN_5080fc91((int *)(unaff_EBP + -0x18));
  FUN_508052b4((undefined4 *)(unaff_EBP + -0x10));
  FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
LAB_5080ef41:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar11;
}


