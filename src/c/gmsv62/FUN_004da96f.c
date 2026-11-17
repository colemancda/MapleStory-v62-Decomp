/* FUN_004da96f - 0x004da96f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004da96f(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (extraout_ECX[0x1cd] != 0) {
    iVar4 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -0x18) = 4;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    (**(code **)(iVar4 + 0x3c))(0,unaff_EBP + -0x18,unaff_EBP + -0x24);
    FUN_00448dc6(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004031b7(0xff,3);
    iVar4 = extraout_ECX[0x1cd];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x1c) = iVar4;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (extraout_ECX[0x1cd] == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x14) = piVar1;
    iVar2 = FUN_0040e53d();
    iVar4 = *(int *)(unaff_EBP + -0x20);
    uVar3 = FUN_0040e48b();
    iVar4 = (**(code **)(*piVar1 + 0x80))
                      (*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x24) - (uVar3 >> 1)
                       ,iVar4 - iVar2,*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


