/* FUN_006931aa - 0x006931aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006931aa(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008eeb18;
  extraout_ECX[-1] = &PTR_FUN_008eeacc;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eeac8;
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  FUN_0074d4c3();
  piVar1 = (int *)extraout_ECX[0x40];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = extraout_ECX[0x3f];
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar2 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x3f] = 0;
  }
  piVar1 = (int *)extraout_ECX[0x37];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x36];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x35];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x34];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_006934f1();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_006934f1();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_006934f1();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e5df();
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
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


