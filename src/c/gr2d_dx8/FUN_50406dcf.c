/* FUN_50406dcf - 0x50406dcf in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50406dcf(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  FUN_5042a430();
  if ((*(int *)(unaff_EBP + 0xc) == 0) ||
     (puVar2 = *(undefined2 **)(unaff_EBP + 0x10), puVar2 == (undefined2 *)0x0)) {
    uVar6 = 0x80004003;
    goto LAB_50406e87;
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  puVar1 = (undefined4 *)(iVar3 + 0x28);
  *(undefined4 **)(unaff_EBP + 0x10) = puVar1;
  FUN_50401895();
  piVar4 = *(int **)(iVar3 + 100);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar4 == (int *)0x0) {
    **(undefined4 **)(unaff_EBP + 0xc) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = 0;
    piVar4 = (int *)(iVar3 + 0x2c);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      *puVar1 = 0;
    }
LAB_50406e56:
    uVar6 = 1;
  }
  else {
    if (*(int *)(iVar3 + 0x70) < 1) {
      iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,iVar3 + 0x68,0,0x8000);
      if (iVar5 < 0) {
        **(undefined4 **)(unaff_EBP + 0xc) = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *puVar2 = 0;
        piVar4 = (int *)(iVar3 + 0x2c);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          *puVar1 = 0;
        }
        goto LAB_50406e56;
      }
      *(undefined4 *)(iVar3 + 0x70) = 1;
    }
    else {
      *(int *)(iVar3 + 0x70) = *(int *)(iVar3 + 0x70) + 1;
    }
    **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(iVar3 + 0x68);
    *puVar2 = 0x4013;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(iVar3 + 0x6c);
    piVar4 = (int *)(iVar3 + 0x2c);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      *puVar1 = 0;
    }
    uVar6 = 0;
  }
LAB_50406e87:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


