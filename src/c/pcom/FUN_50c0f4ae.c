/* FUN_50c0f4ae - 0x50c0f4ae in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0f4ae(void)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(iVar2 + 0x18);
  FUN_50c026fc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x10) = (int *)(iVar2 + 0x30);
  piVar3 = *(int **)(iVar2 + 0x30);
  if ((piVar3 == (int *)0x0) || (iVar4 = *piVar3, iVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(iVar4 + -4) >> 1;
  }
  if (uVar6 == 0) {
    if ((*(int **)(iVar2 + 0x2c) == (int *)0x0) || (iVar4 = **(int **)(iVar2 + 0x2c), iVar4 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar4 + -4) >> 1;
    }
    if (uVar6 != 0) {
      if (*(undefined4 **)(iVar2 + 0x2c) == (undefined4 *)0x0) {
        psVar9 = (short *)0x0;
      }
      else {
        psVar9 = (short *)**(undefined4 **)(iVar2 + 0x2c);
      }
      if ((*(int **)(iVar2 + 0x2c) == (int *)0x0) || (iVar4 = **(int **)(iVar2 + 0x2c), iVar4 == 0))
      {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(iVar4 + -4) >> 1;
      }
      for (psVar7 = psVar9 + uVar6; (psVar9 <= psVar7 && (*psVar7 != 0x2f)); psVar7 = psVar7 + -1) {
      }
      psVar7 = psVar7 + 1;
      sVar8 = *psVar7;
      psVar9 = psVar7;
      while ((sVar8 != 0 && (sVar8 != 0x2e))) {
        psVar1 = psVar9 + 1;
        psVar9 = psVar9 + 1;
        sVar8 = *psVar1;
      }
      FUN_50c02a35(psVar7,(int)psVar9 - (int)psVar7 >> 1);
      FUN_50c05e8d();
      if (*(int *)(unaff_EBP + 8) != 0) {
        InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + 8) + 8));
      }
      puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
      FUN_50c02a72(puVar5);
      piVar3 = *(int **)(unaff_EBP + 8);
      *puVar5 = piVar3;
      if (piVar3 != (int *)0x0) {
        FUN_50c02a85(piVar3);
      }
    }
  }
  FUN_50c10184(*(void **)(unaff_EBP + -0x10),*(undefined4 **)(unaff_EBP + 0xc));
  piVar3 = (int *)(iVar2 + 0x1c);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


