/* FUN_00498a08 - 0x00498a08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00498a08(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00498b1f(unaff_EBP + -0x10,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00498bb6(unaff_EBP + -0x14);
  iVar1 = *(int *)(extraout_ECX + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    iVar1 = (**(code **)(*piVar2 + 0x8c))
                      (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(extraout_ECX + 0x1c),*(undefined4 *)(extraout_ECX + 0x20),
                       0xffffff);
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar2,&DAT_00963cc8);
    }
  }
  FUN_004031b7(0xff,3);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x18) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


