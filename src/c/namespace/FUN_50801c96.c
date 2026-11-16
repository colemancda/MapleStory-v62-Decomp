/* FUN_50801c96 - 0x50801c96 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50801c96(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 4);
  FUN_508012a1();
  piVar3 = *(int **)(extraout_ECX + 0x30);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + *(int *)(extraout_ECX + 0x34);
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 != 0) {
        iVar4 = *piVar3;
        goto LAB_50801cdb;
      }
    }
  }
  iVar4 = 0;
LAB_50801cdb:
  *(int *)(unaff_EBP + -0x10) = iVar4;
  while (iVar4 != 0) {
    puVar2 = (undefined4 *)**(undefined4 **)(unaff_EBP + 8);
    iVar4 = FUN_5080416f((void *)(extraout_ECX + 0x2c),(int *)(unaff_EBP + -0x10),(short *)0x0);
    (*(code *)*puVar2)(*(undefined4 *)(unaff_EBP + 8),iVar4);
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  piVar3 = (int *)(extraout_ECX + 8);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


