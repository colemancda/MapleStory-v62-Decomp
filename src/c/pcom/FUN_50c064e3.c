/* FUN_50c064e3 - 0x50c064e3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


bool FUN_50c064e3(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBP;
  bool bVar5;
  
  FUN_50c10270();
  if (*(char *)(unaff_EBP + 0x10) == *(char *)(unaff_EBP + 0x14)) {
    FUN_50c061b4((void *)(unaff_EBP + -0x30),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x30),(ThrowInfo *)&DAT_50c14eb0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_50c06653();
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if ((*(byte *)(iVar1 + 0x18) & 2) == 0) {
    FUN_50c061b4((void *)(unaff_EBP + -0x30),0x80070005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x30),(ThrowInfo *)&DAT_50c14eb0);
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(*(int *)(unaff_EBP + 8) + -4) >> 1;
  }
  *(undefined4 **)(unaff_EBP + -0x20) = (undefined4 *)(iVar1 + 0x24);
  FUN_50c026fc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (4 < uVar4) {
    iVar2 = FUN_50c07501(*(void **)(iVar1 + 0x20),(undefined4 *)(unaff_EBP + 8),
                         (undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_EBP + -0xd) = *(undefined1 *)(unaff_EBP + 0x10);
      goto LAB_50c065d0;
    }
  }
  *(undefined1 *)(unaff_EBP + -0xd) = *(undefined1 *)(unaff_EBP + 0x14);
  if (4 < uVar4) {
    piVar3 = FUN_50c086b1(*(int **)(unaff_EBP + 0xc));
    iVar2 = (int)piVar3 - *(int *)(iVar1 + 0x1c);
    *(int *)(unaff_EBP + -0x18) = iVar2;
    *(int *)(unaff_EBP + -0x1c) = iVar2 + 1;
    FUN_50c0757a();
  }
LAB_50c065d0:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piVar3 = (int *)(iVar1 + 0x28);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  bVar5 = *(char *)(unaff_EBP + -0xd) != *(char *)(unaff_EBP + 0x10);
  if (bVar5) {
    FUN_50c068b6(*(int **)(unaff_EBP + 0xc),unaff_EBP + 0x14,1);
    FUN_50c06915();
  }
  else {
    FUN_50c068b6(*(int **)(unaff_EBP + 0xc),unaff_EBP + 0x10,1);
    FUN_50c068b6(*(int **)(unaff_EBP + 0xc),unaff_EBP + -0x18,4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x14);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar5;
}


