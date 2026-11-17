/* FUN_0070e486 - 0x0070e486 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070e486(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar3 = *(int **)(extraout_ECX + 0x10);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + *(int *)(extraout_ECX + 0x14);
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 != 0) {
        iVar4 = *piVar3;
        goto LAB_0070e4bc;
      }
    }
  }
  iVar4 = 0;
LAB_0070e4bc:
  *(int *)(unaff_EBP + -0x10) = iVar4;
  while (iVar4 != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0070eda5();
    FUN_0070edc2();
    iVar2 = *(int *)(iVar4 + 0x10);
    *(int *)(unaff_EBP + -0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_0070e67d(*(undefined4 *)(iVar4 + 8));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0070edc2();
    FUN_0070f050(unaff_EBP + -0x10,0);
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


