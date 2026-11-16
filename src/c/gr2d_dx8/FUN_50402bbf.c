/* FUN_50402bbf - 0x50402bbf in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50402bbf(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar1 = *(undefined4 **)(extraout_ECX + 900);
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  piVar2 = *(int **)(extraout_ECX + 0x394);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(extraout_ECX + 0x390);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_50407b2e((undefined4 *)(extraout_ECX + 0x128));
  piVar2 = *(int **)(extraout_ECX + 0xd4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(extraout_ECX + 0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(extraout_ECX + 0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  iVar3 = *(int *)(extraout_ECX + 0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar3 != 0) {
    FUN_5040508d(extraout_ECX + 0xb8);
    *(undefined4 *)(extraout_ECX + 0xbc) = 0;
  }
  iVar3 = *(int *)(extraout_ECX + 0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 != 0) {
    FUN_5040508d(extraout_ECX + 0xb0);
    *(undefined4 *)(extraout_ECX + 0xb4) = 0;
  }
  piVar2 = *(int **)(extraout_ECX + 0xac);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(extraout_ECX + 0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(extraout_ECX + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


