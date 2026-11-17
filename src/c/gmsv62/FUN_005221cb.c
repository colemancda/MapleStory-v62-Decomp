/* FUN_005221cb - 0x005221cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005221cb(void)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00448dc6(unaff_EBP + -0x10);
  uVar1 = *(undefined1 *)(extraout_ECX + 0xe8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00856c17(unaff_EBP + -0x14,*(undefined2 *)(extraout_ECX + 0xec),
               *(undefined1 *)(extraout_ECX + 0xf0),*(undefined2 *)(extraout_ECX + 0xe4),uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3,0x75,0x67,0x11,0x11,0xffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
    }
    FUN_004031b7(0xff,3);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x18) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar3,0x75,0x67,*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


