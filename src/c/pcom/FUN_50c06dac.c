/* FUN_50c06dac - 0x50c06dac in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c06dac(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_50c0dc70((int *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_50c06653();
  iVar2 = *(int *)(unaff_EBP + -0x14);
  if ((*(byte *)(iVar2 + 0x18) & 4) == 0) {
    FUN_50c061b4((void *)(unaff_EBP + -0x34),0x80070005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_50c14eb0);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    piVar5 = FUN_50c086b1(*(int **)(unaff_EBP + 0xc));
    *(int *)(unaff_EBP + 0x10) = (int)piVar5 - *(int *)(iVar2 + 0x1c);
    FUN_50c0707f();
    if ((*(int **)(unaff_EBP + -0x10) == (int *)0x0) ||
       (iVar7 = **(int **)(unaff_EBP + -0x10), iVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar7 + -4) >> 1;
    }
    if (4 < uVar6) {
      *(undefined4 **)(unaff_EBP + -0x20) = (undefined4 *)(iVar2 + 0x24);
      FUN_50c026fc();
      pvVar3 = *(void **)(iVar2 + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_50c07726(pvVar3,(ulong *)(unaff_EBP + 0x10),(int *)(unaff_EBP + -0x10));
      piVar5 = (int *)(iVar2 + 0x28);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        *(undefined4 *)(iVar2 + 0x24) = 0;
      }
    }
  }
  else {
    FUN_50c07020(*(int **)(unaff_EBP + 0xc),unaff_EBP + -0x18,4);
    puVar1 = (undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    *(undefined4 **)(unaff_EBP + -0x20) = puVar1;
    FUN_50c026fc();
    pvVar3 = *(void **)(iVar2 + 0x20);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar7 = FUN_50c076d2(pvVar3,(ulong *)(unaff_EBP + -0x18),(void *)(unaff_EBP + -0x10));
    if (iVar7 == 0) {
      *(undefined4 *)(unaff_EBP + 0x10) = 1;
    }
    piVar5 = (int *)(iVar2 + 0x28);
    *piVar5 = *piVar5 + -1;
    iVar7 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar7 == 0) {
      *puVar1 = 0;
    }
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      if (((*(int *)(unaff_EBP + 0xc) != 0) &&
          (iVar7 = FUN_50c07ce1((void *)(unaff_EBP + 0x10),(int *)(unaff_EBP + 0xc)), iVar7 < 0)) &&
         (iVar7 != -0x7fffbffe)) {
        FUN_50c101c4(iVar7);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + 0x10) == (int *)0x0) {
        FUN_50c061b4((void *)(unaff_EBP + -0x34),0x80070570,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_50c14eb0);
      }
      piVar8 = FUN_50c086d8(*(int **)(unaff_EBP + 0x10));
      piVar5 = *(int **)(unaff_EBP + 0x10);
      *(int **)(unaff_EBP + -0x20) = piVar8;
      if (piVar5 == (int *)0x0) {
        FUN_50c101c4(0x80004003);
        piVar5 = *(int **)(unaff_EBP + 0x10);
      }
      iVar7 = *(int *)(iVar2 + 0x1c);
      iVar4 = *piVar5;
      *(int **)(unaff_EBP + -0x1c) = piVar5;
      iVar7 = (**(code **)(iVar4 + 0x2c))(piVar5,iVar7 + *(int *)(unaff_EBP + -0x18));
      if (iVar7 < 0) {
        FUN_50c101d2(iVar7,*(int **)(unaff_EBP + -0x1c),&DAT_50c174c8);
      }
      FUN_50c0707f();
      piVar5 = *(int **)(unaff_EBP + 0x10);
      if (piVar5 == (int *)0x0) {
        FUN_50c101c4(0x80004003);
        piVar5 = *(int **)(unaff_EBP + 0x10);
      }
      iVar7 = *piVar5;
      *(int **)(unaff_EBP + -0x1c) = piVar5;
      iVar7 = (**(code **)(iVar7 + 0x2c))(piVar5,*(undefined4 *)(unaff_EBP + -0x20));
      if (iVar7 < 0) {
        FUN_50c101d2(iVar7,*(int **)(unaff_EBP + -0x1c),&DAT_50c174c8);
      }
      *(undefined4 **)(unaff_EBP + -0x20) = puVar1;
      FUN_50c026fc();
      pvVar3 = *(void **)(iVar2 + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_50c07726(pvVar3,(ulong *)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x10));
      piVar5 = (int *)(iVar2 + 0x28);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        *puVar1 = 0;
      }
      piVar5 = *(int **)(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
  }
  FUN_50c05e16(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


