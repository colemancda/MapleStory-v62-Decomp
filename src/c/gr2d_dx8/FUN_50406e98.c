/* FUN_50406e98 - 0x50406e98 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50406e98(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  
  FUN_5042a430();
  iVar2 = *(int *)(unaff_EBP + 8);
  puVar9 = (undefined4 *)(iVar2 + 0x28);
  *(undefined4 **)(unaff_EBP + 8) = puVar9;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar9;
  FUN_50401895();
  piVar1 = (int *)(iVar2 + 0x70);
  *piVar1 = *piVar1 + -1;
  iVar7 = *piVar1;
  iVar3 = *(int *)(iVar2 + 0x70);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar7 < 0) {
    *(int *)(iVar2 + 0x70) = iVar3 + 1;
    piVar1 = (int *)(iVar2 + 0x2c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar9 = 0;
    }
    uVar5 = 0x8000ffff;
  }
  else {
    if (*(int *)(iVar2 + 100) != 0) {
      piVar1 = *(int **)(unaff_EBP + 0xc);
      if (piVar1 != (int *)0x0) {
        iVar7 = *piVar1;
        iVar3 = piVar1[2];
        bVar8 = (byte)*(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        *(int *)(unaff_EBP + -0x20) = iVar7 >> (bVar8 & 0x1f);
        iVar7 = piVar1[1];
        iVar4 = piVar1[3];
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(int *)(unaff_EBP + -0x1c) = iVar7 >> (bVar8 & 0x1f);
        iVar6 = 1 << (bVar8 & 0x1f);
        *(int *)(unaff_EBP + -0x14) = iVar4 + -1 + iVar6 >> (bVar8 & 0x1f);
        iVar7 = *(int *)(iVar2 + 0x40);
        iVar4 = *(int *)(iVar2 + 0x38);
        *(int *)(unaff_EBP + -0x18) = iVar3 + -1 + iVar6 >> (bVar8 & 0x1f);
        *(int *)(unaff_EBP + -0x28) = (iVar7 - iVar4) + -1 + iVar6 >> (bVar8 & 0x1f);
        *(int *)(unaff_EBP + -0x24) =
             (*(int *)(iVar2 + 0x44) - *(int *)(iVar2 + 0x3c)) + -1 + iVar6 >> (bVar8 & 0x1f);
        iVar7 = (*DAT_50438ca8)(unaff_EBP + -0x20,unaff_EBP + -0x20,unaff_EBP + -0x30);
        if (iVar7 != 0) {
          (**(code **)(**(int **)(iVar2 + 0x60) + 0x48))(*(int **)(iVar2 + 0x60),unaff_EBP + -0x20);
          *(undefined4 *)(iVar2 + 0x74) = 1;
        }
        puVar9 = *(undefined4 **)(unaff_EBP + 8);
      }
      if (*(int *)(iVar2 + 0x70) == 0) {
        (**(code **)(**(int **)(iVar2 + 100) + 0x28))(*(int **)(iVar2 + 100));
      }
    }
    piVar1 = puVar9 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar9 = 0;
    }
    uVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


