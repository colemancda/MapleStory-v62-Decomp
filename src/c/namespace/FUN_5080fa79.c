/* FUN_5080fa79 - 0x5080fa79 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080fa79(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  
  FUN_5080e090();
  if ((*(int *)(unaff_EBP + 0xc) == 0) ||
     (uVar8 = *(uint *)(*(int *)(unaff_EBP + 0xc) + -4) >> 1, uVar8 == 0)) {
    uVar5 = 0x80070057;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    puVar9 = (undefined4 *)(iVar3 + -0x18);
    *(undefined4 **)(unaff_EBP + 8) = puVar9;
    *(undefined4 **)(unaff_EBP + -0x14) = puVar9;
    FUN_508012a1();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(iVar3 + 0x14) == 0) {
      piVar1 = (int *)(iVar3 + 0x18);
      if ((*(int **)(iVar3 + 0x18) == (int *)0x0) || (iVar7 = **(int **)(iVar3 + 0x18), iVar7 == 0))
      {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(iVar7 + -4) >> 1;
      }
      if (uVar6 == 0) {
        sVar2 = *(short *)(uVar8 * 2 + -2 + *(int *)(unaff_EBP + 0xc));
        *(uint *)(unaff_EBP + -0x10) = uVar8 * 2;
        if (sVar2 == 0x2f) {
          FUN_50803d00();
          FUN_50803e96((int *)(unaff_EBP + 0xc));
          FUN_508052b4(piVar1);
          piVar4 = *(int **)(unaff_EBP + 0xc);
          *piVar1 = (int)piVar4;
          if (piVar4 != (int *)0x0) {
            FUN_508040b6(piVar4);
          }
        }
        else {
          FUN_50803a6e(*(int *)(unaff_EBP + 0xc),uVar8 + 1);
          FUN_50803d00();
          FUN_50803e96((int *)(unaff_EBP + 0xc));
          FUN_508052b4(piVar1);
          piVar4 = *(int **)(unaff_EBP + 0xc);
          *piVar1 = (int)piVar4;
          if (piVar4 != (int *)0x0) {
            FUN_508040b6(piVar4);
          }
          if ((int *)*piVar1 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)*piVar1;
          }
          *(undefined2 *)(*(int *)(unaff_EBP + -0x10) + iVar7) = 0x2f;
        }
        FUN_5080fc9e(iVar3 + 0x10);
        iVar7 = *(int *)(iVar3 + 0x14);
        *(int *)(unaff_EBP + 0xc) = iVar3 + -0x3c;
        FUN_5080fdd5((void *)(iVar7 + 8),piVar1,(undefined4 *)(unaff_EBP + 0xc));
        puVar9 = *(undefined4 **)(unaff_EBP + 8);
        *(undefined4 *)(iVar3 + 0x38) = 1;
        piVar1 = puVar9 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *puVar9 = 0;
        }
        uVar5 = 0;
        goto LAB_5080fba8;
      }
      puVar9 = *(undefined4 **)(unaff_EBP + 8);
    }
    piVar1 = puVar9 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar9 = 0;
    }
    uVar5 = 0x80004005;
  }
LAB_5080fba8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


