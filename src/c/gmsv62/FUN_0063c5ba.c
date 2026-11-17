/* FUN_0063c5ba - 0x0063c5ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063c5ba(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  FUN_00448dc6(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0xff,3);
  *(undefined4 *)(unaff_EBP + -0x10) =
       *(undefined4 *)(extraout_ECX + 0xf0 + *(int *)(extraout_ECX + 0x84) * 4);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x14) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar3,0x26,0x14,*(undefined4 *)(unaff_EBP + -0x10),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  uVar1 = *(undefined4 *)(extraout_ECX + 0xfc + *(int *)(extraout_ECX + 0x8c) * 4);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x14) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar3,0xbe,0x14,uVar1,*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


