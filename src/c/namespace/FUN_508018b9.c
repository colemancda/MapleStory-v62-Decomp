/* FUN_508018b9 - 0x508018b9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508018b9(void)

{
  undefined4 *puVar1;
  int *piVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  psVar4 = *(short **)(unaff_EBP + 8);
  if ((psVar4 == (short *)0x0) || (*psVar4 == 0)) {
    iVar5 = FUN_5080653c();
    goto LAB_50801b93;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50806a56((int *)(unaff_EBP + 8),(void *)(unaff_EBP + -0x10));
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8) - (int)psVar4 >> 1;
  Ordinal_8(unaff_EBP + -0x2c);
  puVar1 = (undefined4 *)(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
  FUN_508012a1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = FUN_50803ea7((void *)(extraout_ECX + 0x2c),(int *)(unaff_EBP + -0x10),
                       (short *)(unaff_EBP + -0x2c));
  if (iVar5 == 0) {
    piVar2 = (int *)(extraout_ECX + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x2c));
    if (iVar5 < 0) {
      FUN_5080dfed(iVar5);
    }
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x10));
LAB_50801a4b:
    iVar5 = 0;
  }
  else {
    piVar2 = (int *)(extraout_ECX + 8);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar5 == 0) {
      *puVar1 = 0;
    }
    if (**(short **)(unaff_EBP + 8) != 0) {
      iVar5 = FUN_50804e67();
      *(int *)(unaff_EBP + -0x1c) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (((iVar5 != 0) &&
          (iVar5 = FUN_508053f3((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x1c)), iVar5 < 0))
         && (iVar5 != -0x7fffbffe)) {
        FUN_5080dfed(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        piVar2 = *(int **)(unaff_EBP + 0xc);
        iVar5 = FUN_50801c16(*(undefined4 *)(unaff_EBP + 8),
                             -(uint)(piVar2 != (int *)0x0) & unaff_EBP - 0x18U,
                             *(int **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0x10),
                             *(undefined4 *)(unaff_EBP + 0x14));
        if ((piVar2 != (int *)0x0) && (iVar5 != 0)) {
          *piVar2 = *piVar2 + *(int *)(unaff_EBP + -0x18);
        }
        piVar2 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar6 = FUN_508037a7((short *)(unaff_EBP + -0x2c));
        if (iVar6 < 0) {
          FUN_5080dfed(iVar6);
        }
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x10));
        }
        goto LAB_50801b93;
      }
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x2c));
        if (iVar5 < 0) {
          FUN_5080dfed(iVar5);
        }
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + -0x10));
        }
        goto LAB_50801a4b;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar5 = FUN_50804288((void *)(unaff_EBP + 0x10));
      *(int *)(unaff_EBP + -0x1c) = extraout_ECX + -0x20;
      iVar6 = FUN_508053f3((void *)(iVar5 + 0x24),(int *)(unaff_EBP + -0x1c));
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        FUN_5080dfed(iVar6);
      }
      piVar7 = FUN_50801ba4();
      FUN_50803e96(piVar7);
      FUN_508052b4((int *)(iVar5 + 0x28));
      piVar2 = *(int **)(unaff_EBP + -0x1c);
      *(int *)(iVar5 + 0x28) = *piVar7;
      if (piVar2 != (int *)0x0) {
        FUN_508040b6(piVar2);
      }
      FUN_508044df((void *)(iVar5 + 0x30),(undefined2 *)(unaff_EBP + -0x2c));
      puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
      *(code **)(iVar5 + 0x50) = FUN_50806b87;
      *(code **)(iVar5 + 0x58) = FUN_50806dd4;
      *puVar1 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    else if (*(int *)(unaff_EBP + 0x14) == 0) {
      *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x20);
      puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
      *(undefined2 *)(unaff_EBP + -0x2c) = 0;
      *puVar1 = *(undefined4 *)(unaff_EBP + -0x3c);
      puVar1[1] = *(undefined4 *)(unaff_EBP + -0x38);
      puVar1[2] = *(undefined4 *)(unaff_EBP + -0x34);
      puVar1[3] = *(undefined4 *)(unaff_EBP + -0x30);
    }
    else {
      iVar5 = FUN_50803aab(*(short **)(unaff_EBP + 0x10),(short *)(unaff_EBP + -0x2c));
      if (iVar5 < 0) {
        FUN_5080450d((void *)(unaff_EBP + -0x3c),iVar5,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_50819008);
      }
    }
    piVar2 = *(int **)(unaff_EBP + 0xc);
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + *(int *)(unaff_EBP + -0x18);
    }
    sVar3 = **(short **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = (sVar3 != 0) + 1;
    iVar6 = FUN_508037a7((short *)(unaff_EBP + -0x2c));
    if (iVar6 < 0) {
      FUN_5080dfed(iVar6);
    }
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      FUN_508040b6(*(int **)(unaff_EBP + -0x10));
    }
  }
LAB_50801b93:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


