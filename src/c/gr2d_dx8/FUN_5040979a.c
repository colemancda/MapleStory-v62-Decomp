/* FUN_5040979a - 0x5040979a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040979a(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar1 = *(undefined4 **)(extraout_ECX + 0x70);
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  FUN_5040170b(&DAT_50438f50,puVar1);
  FUN_5040170b(&DAT_50438f50,*(undefined4 **)(extraout_ECX + 0x74));
  if (*(int *)(extraout_ECX + 0x28) != 0) {
    FUN_504037b9();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_5042d378;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_50409902();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_5042d378;
  FUN_504068bd(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined4 *)(extraout_ECX + 0xd4) = &PTR_FUN_5042d8a4;
  FUN_504068bd(extraout_ECX + 0xd4);
  iVar2 = *(int *)(extraout_ECX + 0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 != 0) {
    FUN_5040508d(extraout_ECX + 0xcc);
    *(undefined4 *)(extraout_ECX + 0xd0) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined4 *)(extraout_ECX + 0xb4) = "Fh@PhTCP";
  FUN_504068bd(extraout_ECX + 0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined4 *)(extraout_ECX + 0x9c) = &PTR_FUN_5042d8a8;
  FUN_5040686c(extraout_ECX + 0x9c);
  piVar3 = *(int **)(extraout_ECX + 0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(extraout_ECX + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(extraout_ECX + 0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(extraout_ECX + 0x30);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(extraout_ECX + 0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  iVar2 = *(int *)(extraout_ECX + 0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_5040508d(extraout_ECX + 0x24);
    *(undefined4 *)(extraout_ECX + 0x28) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5040c04e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


