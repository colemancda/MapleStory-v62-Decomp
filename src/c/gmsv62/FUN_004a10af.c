/* FUN_004a10af - 0x004a10af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a10af(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_004a2fd0();
  FUN_00498b1f(unaff_EBP + -0x10,0);
  iVar4 = *(int *)(extraout_ECX + 0x80);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 != 0) {
    if (*(int *)(extraout_ECX + 0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = *(int *)(extraout_ECX + 0x18);
    *(int *)(unaff_EBP + -0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x18);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    uVar2 = *(undefined4 *)(extraout_ECX + 0x80);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x20);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x1c);
    uVar3 = FUN_00424f08();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    uVar3 = FUN_00424ee1();
    iVar4 = (**(code **)(*piVar1 + 0x8c))
                      (piVar1,uVar3,*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),uVar2);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963cc8);
    }
  }
  FUN_004a1187();
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


