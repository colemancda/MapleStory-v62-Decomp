/* FUN_006c58cd - 0x006c58cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c58cd(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008efc98;
  extraout_ECX[-1] = &PTR_FUN_008efc4c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008efc48;
  iVar1 = DAT_00979110 + 0x1c1;
  iVar3 = DAT_00979110 + 4;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  FUN_00879c20(iVar3,iVar1,0x1bd);
  FUN_008161f1(0);
  piVar2 = (int *)extraout_ECX[0x2e1];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x2e0];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x2df];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x2de];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x2dd];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
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
  DAT_009791a0 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


