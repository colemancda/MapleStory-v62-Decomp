/* FUN_004a1196 - 0x004a1196 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a1196(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_3c;
  int iStack_38;
  int *piStack_34;
  
  FUN_00879bb8();
  piStack_34 = (int *)0x0;
  iStack_38 = unaff_EBP + -0x10;
  iStack_3c = 0x4a11b4;
  FUN_00498b1f();
  iVar1 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_34 = (int *)0x4a11c0;
  iVar4 = (**(code **)(iVar1 + 0x20))();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  if (iVar4 == 0) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_34 = (int *)0x80004003;
      iStack_38 = 0x4a11d6;
      FUN_00878dfb();
    }
    iStack_3c = *(int *)(extraout_ECX + 0x1c);
    iStack_38 = *(undefined4 *)(extraout_ECX + 0x20);
    piStack_34 = (int *)((-(uint)((*(uint *)(extraout_ECX + 0x80) & 0xff000000) != 0) & 0xff000000)
                        + 0xffffff);
    *(int **)(unaff_EBP + 0xc) = *(int **)(unaff_EBP + -0x10);
    iStack_3c = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))
                          (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),iVar1);
    if (-1 < iStack_3c) goto LAB_004a126b;
    iStack_38 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    if (*(int *)(extraout_ECX + 0x80) == 0) goto LAB_004a126b;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_34 = (int *)0x80004003;
      iStack_38 = 0x4a1239;
      FUN_00878dfb();
    }
    piStack_34 = *(int **)(extraout_ECX + 0x80);
    iStack_38 = *(undefined4 *)(extraout_ECX + 0x20);
    iStack_3c = *(int *)(extraout_ECX + 0x1c);
    *(int **)(unaff_EBP + 0xc) = *(int **)(unaff_EBP + -0x10);
    iStack_3c = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))
                          (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),iVar1);
    if (-1 < iStack_3c) goto LAB_004a126b;
    iStack_38 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  piStack_34 = (int *)&DAT_00963cc8;
  FUN_00878e09();
LAB_004a126b:
  iVar4 = *(int *)(extraout_ECX + 0x38);
  *(int *)(unaff_EBP + -0x20) = iVar4 + *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(extraout_ECX + 0x3c);
  *(int *)(unaff_EBP + -0x1c) = iVar2 + iVar1;
  iVar3 = *(int *)(extraout_ECX + 0x1c);
  *(int *)(unaff_EBP + -0x14) = (*(int *)(extraout_ECX + 0x20) - iVar2) + iVar1;
  piStack_34 = (int *)(unaff_EBP + -0x20);
  iStack_38 = unaff_EBP + -0x30;
  *(int *)(unaff_EBP + -0x18) = iVar3 + iVar4 * -2 + *(int *)(unaff_EBP + 8);
  iStack_3c = 0x4a12a6;
  FUN_00816537();
  piStack_34 = (int *)0x7fffffff;
  iStack_38 = 0;
  *(int **)(unaff_EBP + 8) = &iStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0046fc23(unaff_EBP + -0x10);
  FUN_004a213e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_34 = (int *)(unaff_EBP + -0x30);
  iStack_38 = 0x4a12d4;
  piStack_34 = (int *)FUN_00402bc3();
  if ((int)piStack_34 < 0) {
    iStack_38 = 0x4a12df;
    FUN_00878dfb();
  }
  piStack_34 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_34 != (int *)0x0) {
    iStack_38 = 0x4a12f0;
    (**(code **)(*piStack_34 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


