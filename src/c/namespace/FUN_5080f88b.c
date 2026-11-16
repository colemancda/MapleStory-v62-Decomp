/* FUN_5080f88b - 0x5080f88b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080f88b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar3 + 0x14);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  if (iVar1 == 0) {
    iVar3 = -0x7fffbffd;
  }
  else if ((*(short **)(unaff_EBP + 0xc) == (short *)0x0) || (**(short **)(unaff_EBP + 0xc) == 0)) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_50803d00();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar4 = FUN_5080bac1();
    FUN_50803c5f((void *)(unaff_EBP + 8),piVar4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
    *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(iVar3 + -0x18);
    FUN_508012a1();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_5080ffeb((void *)(iVar3 + 0x20),(int *)(unaff_EBP + 0xc));
    piVar4 = (int *)(iVar3 + -0x14);
    *piVar4 = *piVar4 + -1;
    iVar1 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar3 + -0x18) = 0;
    }
    puVar2 = *(undefined4 **)(iVar3 + 0x14);
    *(undefined4 **)(unaff_EBP + -0x18) = puVar2;
    FUN_508012a1();
    iVar3 = *(int *)(iVar3 + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_5080fd86((void *)(iVar3 + 8),(int *)(unaff_EBP + 8),(undefined4 *)0x0);
    if (iVar3 == 0) {
      if (*(int **)(unaff_EBP + 8) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_5080d29f(*(int **)(unaff_EBP + 8));
      }
      uVar5 = (*DAT_5081e6ac)(iVar3);
      if (uVar5 == 0xffffffff) {
        iVar3 = (*DAT_5081e704)();
        iVar3 = ((iVar3 != 2) - 1 & 0x7ffcffff) + 0x80030002;
        piVar4 = puVar2 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *puVar2 = 0;
        }
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + 8));
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + 0xc));
        }
        goto LAB_5080fa68;
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      if ((uVar5 & 0x10) == 0) {
        if (piVar4 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_5080d29f(piVar4);
        }
        iVar3 = (*DAT_5081e6d0)(iVar3);
      }
      else {
        if (piVar4 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_5080d29f(piVar4);
        }
        iVar3 = (*DAT_5081e6a8)(iVar3);
      }
      if (iVar3 != 0) {
        piVar4 = puVar2 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *puVar2 = 0;
        }
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + 8));
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          FUN_508040b6(*(int **)(unaff_EBP + 0xc));
        }
        iVar3 = 0;
        goto LAB_5080fa68;
      }
      piVar4 = puVar2 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        *puVar2 = 0;
      }
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 8));
        *(undefined4 *)(unaff_EBP + 8) = 0;
      }
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 0xc));
      }
    }
    else {
      piVar4 = puVar2 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        *puVar2 = 0;
      }
      FUN_508052b4((undefined4 *)(unaff_EBP + 8));
      FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
    }
    iVar3 = -0x7ff8fffb;
  }
LAB_5080fa68:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


