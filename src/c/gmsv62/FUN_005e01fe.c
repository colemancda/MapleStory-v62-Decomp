/* FUN_005e01fe - 0x005e01fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e01fe(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar2 + 0x52b) = 0;
  *(undefined4 *)(iVar2 + 0x52f) = 0;
  piVar3 = *(int **)(iVar2 + 0x513);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + *(int *)(iVar2 + 0x517);
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 != 0) {
        iVar4 = *piVar3;
        goto LAB_005e0244;
      }
    }
  }
  iVar4 = 0;
LAB_005e0244:
  *(int *)(unaff_EBP + 8) = iVar4;
  while (iVar4 != 0) {
    FUN_005df3f8(unaff_EBP + -0x14,*(undefined4 *)(*(int *)(unaff_EBP + 8) + 8));
    if (*(int *)(unaff_EBP + -0x10) == 0) break;
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + 8) == 8) {
      *(int *)(iVar2 + 0x52f) = *(int *)(iVar2 + 0x52f) + 1;
    }
    else {
      *(int *)(iVar2 + 0x52b) = *(int *)(iVar2 + 0x52b) + 1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_005e064d(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_005e06d9(unaff_EBP + 8,0);
    iVar4 = *(int *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


