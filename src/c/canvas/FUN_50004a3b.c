/* FUN_50004a3b - 0x50004a3b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50004a3b(void)

{
  void *this;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = (void *)FUN_50005fa7((void *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x54) = 0x28;
  puVar3 = (undefined4 *)(unaff_EBP + -0x50);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(extraout_ECX + 0x34);
  *(int *)(unaff_EBP + -0x4c) = -*(int *)(extraout_ECX + 0x20);
  *(undefined2 *)(unaff_EBP + -0x48) = 1;
  *(undefined2 *)(unaff_EBP + -0x46) = 0x10;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar1 = (*DAT_50081de8)(0,unaff_EBP + -0x54,1,unaff_EBP + -0x10,0,0);
  FUN_50004bc8(this,uVar1);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)((int)this + 0x44);
    *(int *)(unaff_EBP + -0x18) =
         (int)((uint)*(ushort *)((int)this + 0x4a) * *(int *)((int)this + 0x3c)) / 8;
    iVar4 = *(int *)(extraout_ECX + 0x20);
    if (0 < iVar4) {
      do {
        memset(*(void **)(unaff_EBP + -0x10),0xff,*(size_t *)(unaff_EBP + -0x18));
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x1c);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    piVar5 = (int *)((*(int *)(extraout_ECX + 0x4c) + 1) * *(int *)(extraout_ECX + 0x20));
    if (*(int *)(extraout_ECX + 0x38) == 0) {
      FUN_50012c97(0x80004003);
    }
    piVar2 = FUN_5000717b(*(int **)(extraout_ECX + 0x38));
    if (piVar2 < piVar5) {
      if (*(int *)(extraout_ECX + 0x38) == 0) {
        FUN_50012c97(0x80004003);
      }
      piVar2 = *(int **)(extraout_ECX + 0x38);
      iVar4 = *piVar2;
      *(int **)(unaff_EBP + -0x1c) = piVar2;
      iVar4 = (**(code **)(iVar4 + 0x4c))(piVar2,piVar5);
      if (iVar4 < 0) {
        FUN_50012ca5(iVar4,*(int **)(unaff_EBP + -0x1c),&DAT_50018368);
      }
    }
    iVar4 = *(int *)(extraout_ECX + 0x38);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x4c);
    if (iVar4 == 0) {
      FUN_50012c97(0x80004003);
    }
    piVar5 = *(int **)(extraout_ECX + 0x38);
    iVar4 = (**(code **)(*piVar5 + 0x30))
                      (piVar5,0,*(int *)(extraout_ECX + 0x20) * *(int *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      FUN_50012ca5(iVar4,piVar5,&DAT_50018368);
    }
    puVar3 = (undefined4 *)FUN_50005b5e((void *)(extraout_ECX + 0x44));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar3 = this;
    piVar5 = *(int **)(unaff_EBP + -0x14);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  FUN_50007006((void *)(unaff_EBP + -0x2c),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50015eb8);
}


