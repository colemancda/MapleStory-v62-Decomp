/* ptr_00433ef3 - 0x00433ef3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00433ef3(void)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00878e09(in_EAX);
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    piVar1 = (int *)(*(int *)(unaff_EBP + -0x28) + 0x48);
    *piVar1 = *piVar1 + 1;
    FUN_00435345();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    FUN_00433fd5();
    return;
  }
  FUN_0040ee87();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piVar1;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x5c);
  uVar4 = *(undefined4 *)(unaff_EBP + -0x58);
  *(int **)(unaff_EBP + 0xc) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x1c))(piVar1,uVar3,uVar4);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBX);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_00433fd5(uVar3,uVar4);
  return;
}


