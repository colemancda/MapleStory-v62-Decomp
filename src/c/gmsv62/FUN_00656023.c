/* FUN_00656023 - 0x00656023 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00656023(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  FUN_0087a0b8(extraout_ECX + 0x8c,4,3,FUN_004115cc);
  FUN_00402fa6();
  if (*(int *)(extraout_ECX + 0x84) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x84) = 0;
  }
  if (*(int *)(extraout_ECX + 0x80) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x80) = 0;
  }
  if (*(int *)(extraout_ECX + 0x7c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  }
  if (*(int *)(extraout_ECX + 0x78) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x78) = 0;
  }
  if (*(int *)(extraout_ECX + 0x74) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x74) = 0;
  }
  if (*(int *)(extraout_ECX + 0x70) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x70) = 0;
  }
  if (*(int *)(extraout_ECX + 0x6c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x6c) = 0;
  }
  if (*(int *)(extraout_ECX + 0x68) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x68) = 0;
  }
  if (*(int *)(extraout_ECX + 100) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004d7d1e();
  if (*(int *)(extraout_ECX + 0x5c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  }
  if (*(int *)(extraout_ECX + 0x58) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x58) = 0;
  }
  if (*(int *)(extraout_ECX + 0x54) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x54) = 0;
  }
  piVar1 = *(int **)(extraout_ECX + 0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_006568ef();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)(extraout_ECX + 0x34) = &PTR_FUN_008ed430;
  FUN_00655f21();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00656772();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


