/* ptr_00433ed3 - 0x00433ed3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00433ed3(void)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00878dfb();
  piVar2 = *(int **)(unaff_EBP + -0x14);
  iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,unaff_EBX);
  }
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x28);
    piVar2 = (int *)(iVar1 + 0x48);
    *piVar2 = *piVar2 + 1;
    FUN_00435345(iVar1 + 0x48,unaff_EBP + -0x14);
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    FUN_00433fd5();
    return;
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb(unaff_EDI);
    piVar2 = *(int **)(unaff_EBP + -0x14);
  }
  iVar1 = *piVar2;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x5c);
  uVar4 = *(undefined4 *)(unaff_EBP + -0x58);
  uVar5 = *(undefined4 *)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + 0xc) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x1c))(piVar2,uVar3,uVar4,uVar5,*(undefined4 *)(unaff_EBP + -0x50));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBX);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_00433fd5(uVar3,uVar4,uVar5);
  return;
}


