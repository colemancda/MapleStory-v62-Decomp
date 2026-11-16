/* FUN_50801fd4 - 0x50801fd4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50801fd4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  short *psVar7;
  int unaff_EBP;
  
  FUN_5080e090();
  psVar7 = *(short **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  if ((psVar7 == (short *)0x0) || (sVar3 = *psVar7, sVar3 == 0)) {
LAB_5080212c:
    iVar4 = -0x7ff8ffa9;
  }
  else if (*(int *)(unaff_EBP + 0x20) == 0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    do {
      if ((sVar3 == 0x2f) || (sVar3 == 0x5c)) goto LAB_5080212c;
      sVar3 = psVar7[1];
      psVar7 = psVar7 + 1;
    } while (sVar3 != 0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_50803d00();
    iVar4 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar4 + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 **)(unaff_EBP + 8) = puVar1;
    FUN_508012a1();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_50803ea7((void *)(iVar4 + 0x10),(int *)(unaff_EBP + 0xc),(short *)0x0);
    if (iVar5 == 0) {
      Ordinal_8(unaff_EBP + -0x24);
      iVar5 = FUN_50803aab((short *)(unaff_EBP + -0x24),(short *)(unaff_EBP + 0x10));
      if (iVar5 < 0) {
        FUN_5080dfed(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puVar6 = FUN_50803fbb();
      iVar5 = FUN_50803aab((short *)(puVar6 + 4),(short *)(unaff_EBP + -0x24));
      if (iVar5 < 0) {
        FUN_5080dfed(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar5 = FUN_508037a7((short *)(unaff_EBP + -0x24));
      if (iVar5 < 0) {
        FUN_5080dfed(iVar5);
      }
      piVar2 = (int *)(iVar4 + -0x14);
      *piVar2 = *piVar2 + -1;
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        *puVar1 = 0;
      }
      iVar4 = FUN_50803aab(*(short **)(unaff_EBP + 0x20),(short *)(unaff_EBP + 0x10));
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 0xc));
      }
    }
    else {
      piVar2 = (int *)(iVar4 + -0x14);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 0xc));
      }
      iVar4 = -0x7ffcffb0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


