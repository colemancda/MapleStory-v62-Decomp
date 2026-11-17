/* FUN_0046f6c4 - 0x0046f6c4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046f6c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 8) != 0) {
    iVar4 = FUN_0046f7fc(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
    if (iVar4 != 0) {
      *(undefined4 *)(extraout_ECX + 0x3c) = 1;
      FUN_004031b7(0,3);
      iVar4 = *(int *)(extraout_ECX + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_00425067(unaff_EBP + 0xc,unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      FUN_004031b7(0xfd,3);
      piVar5 = *(int **)(unaff_EBP + 0xc);
      uVar1 = *(undefined4 *)(extraout_ECX + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar5 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar5 = *(int **)(unaff_EBP + 0xc);
      }
      uVar2 = *(undefined4 *)(extraout_ECX + 0x38);
      uVar3 = *(undefined4 *)(extraout_ECX + 0x34);
      *(int **)(unaff_EBP + -0x10) = piVar5;
      iVar4 = (**(code **)(*piVar5 + 0x80))
                        (*(undefined4 *)(unaff_EBP + 0xc),uVar3,uVar2,uVar1,
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      piVar5 = *(int **)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


