/* FUN_007b2483 - 0x007b2483 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b2483(void)

{
  int *piVar1;
  int unaff_EBP;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *local_10;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    local_10 = (int *)0x7b24dd;
    FUN_007b49d6();
    local_10 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x10) = &local_10;
    uVar6 = *(undefined4 *)(unaff_EBP + 0x18);
    uVar5 = *(undefined4 *)(unaff_EBP + 0x14);
    uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  else {
    local_10 = (int *)0x7b24a8;
    FUN_007b4b26();
    local_10 = (int *)0x7b24af;
    FUN_007b49d6();
    *(int ***)(unaff_EBP + -0x10) = &local_10;
    local_10 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    uVar6 = *(undefined4 *)(unaff_EBP + 0x18);
    uVar5 = *(undefined4 *)(unaff_EBP + 0x14);
    uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  FUN_007b25d6(uVar2,uVar3,uVar4,uVar5,uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    local_10 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


