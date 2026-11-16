/* FUN_50c06653 - 0x50c06653 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c06653(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_50c10270();
  Ordinal_8(unaff_EBP + -0x1c);
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = (**(code **)(iVar2 + 0x24))(piVar1,unaff_EBP + -0x1c);
  if (iVar2 < 0) {
    FUN_50c061b4((void *)(unaff_EBP + -0x2c),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
  }
  if (*(short *)(unaff_EBP + -0x1c) == 0) {
    piVar3 = (int *)FUN_50c07861();
    FUN_50c086b1(piVar1);
    FUN_50c08650(piVar1);
    FUN_50c06763();
    *(int **)(unaff_EBP + -0x14) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    iVar2 = *piVar1;
    *(undefined2 *)(unaff_EBP + -0x1c) = 0xd;
    iVar2 = (**(code **)(iVar2 + 0x28))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
    if (iVar2 < 0) {
      FUN_50c101d2(iVar2,piVar1,&DAT_50c174a8);
    }
  }
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (piVar1 != (int *)0x0) {
    puVar4 = (undefined4 *)FUN_50c08293();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4,&DAT_50c17498,piVar1);
    }
    if (*piVar1 == 0) {
      FUN_50c061b4((void *)(unaff_EBP + -0x2c),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50c14eb0);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_50c08269((short *)(unaff_EBP + -0x1c));
  if (iVar2 < 0) {
    FUN_50c101c4(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


