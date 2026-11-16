/* FUN_50004d83 - 0x50004d83 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50004d83(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  HDC pHVar4;
  int *piVar5;
  void *this;
  int unaff_EBP;
  
  FUN_50012d80();
  if (*(int *)((int)this + 0x38) == 0) {
    FUN_50004f6a(this,(int *)(unaff_EBP + -0x84));
    if (*(int *)((int)this + 0x30) != 0) {
      (*DAT_50081dd8)(*(int *)((int)this + 0x30));
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    if (*(int *)((int)this + 0x2c) != 0) {
      (*DAT_50081dc8)(*(int *)((int)this + 0x2c));
    }
    iVar2 = (*DAT_50081dfc)(unaff_EBP + -0x84);
    *(int *)((int)this + 0x2c) = iVar2;
    if (iVar2 == 0) {
      FUN_50007006((void *)(unaff_EBP + -0x48),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_50015eb8);
    }
    iVar2 = abs(*(int *)(unaff_EBP + -0x84));
    *(int *)((int)this + 0x14) = iVar2;
    uVar3 = (*DAT_50081df8)(0);
    *(undefined4 *)((int)this + 0x30) = uVar3;
    (*DAT_50081dcc)(uVar3,*(undefined4 *)((int)this + 0x2c));
    (*DAT_50081df4)(*(undefined4 *)((int)this + 0x30),0);
    (*DAT_50081dc4)(*(undefined4 *)((int)this + 0x30),0);
    (*DAT_50081dd4)(*(undefined4 *)((int)this + 0x30),1);
    pHVar4 = CreateCompatibleDC(*(HDC *)((int)this + 0x30));
    (*DAT_50081dcc)(pHVar4,*(undefined4 *)((int)this + 0x2c));
    (*DAT_50081df0)(pHVar4,unaff_EBP + -0xbc);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(unaff_EBP + -0xbc);
    (*DAT_50081dd8)(pHVar4);
    uVar1 = *(uint *)((int)this + 0x20);
    if (uVar1 < 0x100) {
      iVar2 = (int)(0x100 / (ulonglong)uVar1);
    }
    else {
      iVar2 = 1;
    }
    iVar2 = uVar1 * iVar2 + 2;
    *(int *)((int)this + 0x34) = iVar2;
    if ((*(byte *)((int)this + 0x1c) & 2) != 0) {
      *(uint *)((int)this + 0x34) = (uVar1 * 3 >> 1) + iVar2;
    }
    *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 7U & 0xfffffff0;
    FUN_500069c0((void *)(unaff_EBP + -0x38),0,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_500069c0((void *)(unaff_EBP + -0x28),0,3);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)((int)this + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)((int)this + 0x34);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar5 = (int *)FUN_50005ffb((void *)((int)this + 0x38));
    iVar2 = *piVar5;
    *(int **)(unaff_EBP + -0x18) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x2c))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar2 < 0) {
      FUN_50012ca5(iVar2,*(int **)(unaff_EBP + -0x18),&DAT_50018368);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_5000630c((short *)(unaff_EBP + -0x28));
    if (iVar2 < 0) {
      FUN_50012c97(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_5000630c((short *)(unaff_EBP + -0x38));
    if (iVar2 < 0) {
      FUN_50012c97(iVar2);
    }
    FUN_5000f634((int)this + 0x44);
    FUN_5001181d((int)this + 0x58);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


