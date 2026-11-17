/* FUN_0052676d - 0x0052676d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052676d(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  piVar2 = (int *)*piVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(int **)(unaff_EBP + 8) = piVar2;
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x30) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0097bb34;
    iVar3 = *piVar2;
    *(undefined4 *)(unaff_EBP + -0x28) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x24) = DAT_0097bb3c;
    iVar3 = (**(code **)(iVar3 + 0xfc))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
    }
    if (*piVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar1;
    iVar3 = (**(code **)(*piVar2 + 0xb4))(piVar2,0x7fffffff);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
    }
    if (*piVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar1;
    iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
    }
    piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x9b0);
    *(undefined2 *)(unaff_EBP + -0x20) = 0xd;
    *(int **)(unaff_EBP + -0x18) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*piVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar1;
    iVar3 = (**(code **)(*piVar1 + 100))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


