/* FUN_005b139d - 0x005b139d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b139d(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ec8e0;
  extraout_ECX[-1] = &PTR_FUN_008ec894;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ec890;
  iVar1 = extraout_ECX[0x1c5];
  *(undefined4 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 != 0) {
    FUN_00434e38(iVar1 + -0xc);
  }
  iVar1 = extraout_ECX[0x1c4];
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar1 != 0) {
    FUN_00434e38(iVar1 + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_0074d4c3();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00426311();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00445a30();
  piVar2 = (int *)extraout_ECX[0x7d];
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x7c];
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x7b];
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x7a];
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x79];
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x78];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x77];
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x76];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x75];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x74];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x73];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x72];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x71];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x70];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005c027d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


